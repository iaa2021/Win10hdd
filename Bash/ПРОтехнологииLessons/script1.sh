declare -a Array1=( 
[0] = 1
[1] = 2
[2] = 3 )
echo ${Array1[@]}
echo $((${Array1[0]} + ${Array1[1]}))



