echo [*]for hidden math functions
cd ../hiddenMath
gcc `pkg-config --cflags --libs glib-2.0`  -o some ../src/some.c -lm 
cd ..