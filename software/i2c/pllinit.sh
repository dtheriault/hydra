#!/bin/bash

addr=0x6c

file=$1

while read line; do

    reg=`echo ${line} | awk '{print $1}'`
    value=`echo ${line} | awk '{print $2}'`

    let "reg |= 0x80"

    i2cset -y 1 ${addr} ${reg} ${value}

    resp=`i2cget -y 1 ${addr} ${reg}`

    echo "Reg[$reg]: ${value} ${resp}"

done < ${file}

i2cget -y 1 ${addr} 0x81
sleep 3
i2cget -y 1 ${addr} 0x81
sleep 3
i2cget -y 1 ${addr} 0x81
sleep 1
i2cset -y 1 ${addr} 0x86 00
sleep 1
i2cget -y 1 ${addr} 0x81
