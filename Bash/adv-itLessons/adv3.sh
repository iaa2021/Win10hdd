#!/bin/bash
for myFile in `ls *.txt`; do
cat $myFile
done
#output text files content via loop
for x in {1..10}; do
echo "$x * 57 is $(($x*57))"
echo "$x pow2 is $(($x*$x))"
done
#output via loop with integer's range
for (( i=0; i<=10; i++ )); do
echo "$i + 37 yelds $(($i+37))"
done
#output via loop with integer's condition
