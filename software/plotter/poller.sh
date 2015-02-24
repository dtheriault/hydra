#! /bin/bash

# Wait until we process a few callsigns
#
sleep 15

while true; do

    tail -$1 lastSpots.txt > data.csv

    sleep 10

done
