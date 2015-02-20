#! /bin/bash


SPOTS_PATH=~/skimsvr/Spots.txt

# Some Globals
lat=
lon=
key=
query=
data=
myCall=
myPass=
status=0


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

    grep $1 Cache.txt

    return $?
}

# Adds new callsign,lat,long entry into cache, csv format
#
function update_cache () 
{
    echo "$(timestamp): Adding to cache: " $1, $2, $3
    echo $1,$2,$3 >> Cache.txt
}

# Queries QRZ.com for a callsign and parses the output looking for
# lat/long data.  THis is then added to our cache
#
function query_qrz () 
{
    curl "https://xmldata.qrz.com/xml/current/?s=${key};callsign=${call}" 2>1 /dev/null > QUERY

    lat=`cat ./QUERY | grep "<lat>" | sed 's/<lat>//' | sed 's/<\/lat>//'`
    lon=`cat ./QUERY | grep "<lon>" | sed 's/<lon>//' | sed 's/<\/lon>//'`

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
    key=`curl "https://xmldata.qrz.com/xml/current/?username=${myCall};password=${myPass}" 2>1 /dev/null | grep Key | sed 's/<Key>//' | sed 's/<\/Key>//'`

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
    ${SPOTS_PATH}=$3
fi


# Login to QRZ.com
#
login_qrz ${myCall} ${myPass}

# TODO:  Error check login return

# Spawn off tail -f process of Skimmer Spots
coproc TAIL { tail -f ${SPOTS_PATH} ;}
TAIL_PID=$!

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
    else
	echo
	continue
    fi
    echo

    ## throttle so QRZ doesn't get swamped
    sleep 3
done <&${TAIL[0]}
kill $TAIL_PID

exit 0
