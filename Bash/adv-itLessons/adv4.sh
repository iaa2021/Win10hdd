#!/bin/bash
sum=0 #global variable
myFunction()
{
	echo "This is a function"
	echo "$x1 plus $x2 yelds $(($x1+$x2))"
	echo "You text is $text"
	sum=$(($x1+$x2))
}
read -p "Enter some integer: " x1
read -p "Enter another integer: " x2
read -p "Enter some text: " text
myFunction x1 x2 text
echo "Variable sum is $sum"
