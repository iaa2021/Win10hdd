#!/bin/bash
echo "My 1 adv-it script\n"
xterm &
ls -lh
echo "Work with variables"
echo "Script's name is $0"
echo "My familiars names are $1 and $2 and $3"
var1=`uname -a`
var2="\Dell 7710"
echo "Info about my pc:"
echo " $var1"
echo " my pc's name is $var2"
read -p "enter your name: " name
echo "my name is $name"
read -p "Input number: " number1
read -p "Input 2nd number: " number2
sum=$((number1+number2))
echo "sum $number1 + $number2 = $sum"
myHost=`hostname`
myGtw="8.8.8.8"
ping -c 4 $myGtw
ping -c 4 $myHost
