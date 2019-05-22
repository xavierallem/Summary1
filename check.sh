#!/bin/bash

# generate a Random number
num=$RANDOM
file1="Results-${num}.md "

# Check for kernel-name
echo "## System Details" >>  ${file1}
uname -a >> ${file1} 
# Check for lsb_release-name

echo "## Release Details" >>  ${file1}

lsb_release -a >> ${file1} 

# MAC addr

echo "## Connectivity Details" >>  ${file1}

ifconfig -a | awk '/^[a-z]/ { iface=$1; mac=$NF; next } /inet addr:/ { print iface, mac }' >> ${file1} 
# Timestamp 

echo "## TimeStamp" >>  ${file1}

timestamp=`date "+%Y/%m/%d-%H:%M:%S"`
echo ${timestamp} >> ${file1} 
