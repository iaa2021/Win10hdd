echo [*]for hidden math functions
cd hiddenMath
gcc -o ex_math ../src/ex_math.c -lm -Wall -O3 -g -std=gnu11
cd ..