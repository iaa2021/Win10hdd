echo [*] build simple debug configuration
cd build
cmake -DCMAKE_BUILD_TYPE=Debug .. 
cmake --build .
cd ..