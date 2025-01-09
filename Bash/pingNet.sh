#!/bin/bash
NET="192.168.50."
for((i=0;i<$1;i++))
do
ADR="${NET}${i}"
if ping -c 1 $ADR &>/dev/null
then
echo "$ADR is alive"
fi
done

