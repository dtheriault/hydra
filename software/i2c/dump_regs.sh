#!/bin/bash

addr=0x6c


for reg in {0..79}; do
    
    let "reg |= 0x80"

#    echo -n "$r  "
#    i2cget -y 1 ${ADDR} ${r}

    resp=`i2cget -y 1 ${addr} ${reg}`

    echo "Reg[$reg]: ${value} ${resp}"


done
