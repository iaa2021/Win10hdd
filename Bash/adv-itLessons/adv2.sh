#!/bin/bash
echo "Start if selection"
if   [ $1 == "Tanya" ]; then
echo "Hello my wife $1"
elif [ $1 == "Danya" ]; then
echo "Hello my elder sone $1"
elif [ $1 == "Vit" ]; then
echo "Hello my younger sone $1"
else echo "Hello, stranger"
fi
echo "Start CASE selection"
read -p "Input number 1 to 30: " var3 #input parameter from keyboard
case $var3 in
	1) echo "This is $var3";;
	[2-9]) echo "Number $var3 is more than 1 and less than 10";;
 	"Vit") echo "Hello, $var3";;
	*) echo "Parametr unknown" #;; don't need to be taped
esac
echo "Work with loops"
count=0
while [ $count -lt 10 ]; do
echo "Current count * 11 is $(($count*11))"
#or count=$(($count+1))
 let count=count+1
#or let count+=1 
done

