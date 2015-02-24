#! /bin/bash


SPOTS_PATH=~/skimsvr/Spots.txt
CACHE_FILE=Cache.txt
SPOTS_FILE=lastSpots.txt
TMP_FILE=$(mktemp /tmp/callsign.XXXXXXXX)
QUERY=./QUERY

# Some Globals
lat=
lon=
key=
query=
data=
myCall=
myPass=
status=0

# trap ctrl-c and call ctrl_c()
trap ctrl_c INT

function ctrl_c() {
    echo "** User Requesting Exit..."
    # Cleanup processes
    kill $TAIL_PID
    kill $SERVER_PID
    kill $POLLER_PID
    # Clean up temp files
    rm -f ${TMP_FILE}
    rm -f ${SPOTS_FILE}
    rm -f ${QUERY}

    exit 1
}

# Functions
#
function timestamp() 
{
    date +"%Y%m%d %H:%M:%S"
}

# Checks Cache to see if we have a hit
# 
function check_cache() 
{
    echo -n "$(timestamp): Checking Cache for:" $1 "  "

    # perform exact string match
    grep -w "$1" ${CACHE_FILE} > ${TMP_FILE}

    if [ $? -eq 0 ]; then
        cat ${TMP_FILE} >> ${SPOTS_FILE}
        cat ${TMP_FILE}
        return 0
    fi

    return 1
}

# Adds new callsign,lat,long entry into cache, csv format
#
function update_cache () 
{
    echo "$(timestamp): Adding to cache: " $1, $2, $3
    echo $1,$2,$3 >> ${CACHE_FILE}
}

# Queries QRZ.com for a callsign and parses the output looking for
# lat/long data.  THis is then added to our cache
#
function query_qrz () 
{
    curl "https://xmldata.qrz.com/xml/current/?s=${key};callsign=${call}" &> /dev/null > ${QUERY}

    lat=`cat ${QUERY} | grep "<lat>" | sed 's/<lat>//' | sed 's/<\/lat>//'`
    lon=`cat ${QUERY} | grep "<lon>" | sed 's/<lon>//' | sed 's/<\/lon>//'`

    echo "$(timestamp): QRZ Returns: "${call}, ${lat}, ${lon} 

    if [ -z "${lat}" ] || [ -z "${lon}" ]; then
	return 1
    else
	return 0
    fi
}

# Posts a login to QRZ.com and returns session key which is needed for future queries
#
function login_qrz ()
{
    key=`curl -s "https://xmldata.qrz.com/xml/current/?username=${myCall};password=${myPass}" | grep Key | sed 's/<Key>//' | sed 's/<\/Key>//'`

    echo "$(timestamp): Logging into QRZ.com: " ${key}
}

# Simple usage summary
#
function usage ()
{
    echo
    echo "Usage:  ./plotter.sh  <QRZ_Login_Name> <QRZ_Password> [Path to CW Skimmer Spots.txt]"
    echo
}


#
# Main Entry Point of the script
#

# Check for QRZ login elements
#
if [ -z "$1" ]; then
    usage
    exit 1
else
    myCall=$1
fi

if [ -z "$2" ]; then
    usage
    exit 1
else
    myPass=$2
fi

if [ -z "$3" ]; then
    echo "Using default path to Spots.txt: " ${SPOTS_PATH}
else
    SPOTS_PATH=$3
fi

if [ -z "$4" ]; then
    echo "Using default of 100 spots to track"
    NUM_SPOTS=100
else
    NUM_SPOTS=$4
fi

# Login to QRZ.com
#
login_qrz ${myCall} ${myPass}

# TODO:  Error check login return

# Start Map HTTP Server
python -m SimpleHTTPServer &> /dev/null &
SERVER_PID=$!
if [ ${SERVER_PID} -ne 0 ]; then
    echo "Started Server at: "${SERVER_PID}
fi

# Start Cache poller for map data
./poller.sh ${NUM_SPOTS} &
POLLER_PID=$!
if [ ${POLLER_PID} -ne 0 ]; then
    echo "Started Poller at: "${POLLER_PID}
fi

# Spawn off tail -f process of Skimmer Spots
coproc TAIL { tail -f ${SPOTS_PATH} ;}
TAIL_PID=$!
if [ ${TAIL_PID} -ne 0 ]; then
    echo "Started Listener: "${TAIL_PID}
fi

#
# Main loop, reads callsigns from spots, performs lookups and
# updates cache from QRZ.com queries for those not in cache.
#
# TODO:  Eventually we'll plot lat/long in real-time map.  For now you
#        have to do that manually using the cache csv format file.
#
while read line; do
    call=`echo ${line} | awk '{print $4}'`
    check_cache ${call};
    if [ $? -ne 0 ]; then
	echo "  Miss"
	query_qrz ${call}
	if [ $? -ne 0 ]; then
	    ## query bad, no luck
	    echo "$(timestamp): Bad Callsign or DB entry" ${call}
	    echo
	    lat=0
	    lon=0
	    continue;
	fi

	## query success, update our cache
	update_cache ${call} ${lat} ${lon}

        ## update running datafile
        echo "${call},${lat},${lon}" >> ${SPOTS_FILE}

        ## throttle so QRZ doesn't get swamped
        sleep 3
    fi
    echo

done <&${TAIL[0]}

# Cleanup processes
kill $TAIL_PID
kill $SERVER_PID
kill $POLLER_PID

# We're outa here
exit 0
