echo [*] build debug configuration with MinGW

cd ../debugMGW

cmake -DCMAKE_BUILD_TYPE=Debug .. -G "MinGW Makefiles" 

cmake --build .

cd ..