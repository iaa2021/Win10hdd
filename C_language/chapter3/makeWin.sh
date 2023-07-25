echo [*] build release configuration with MinGW
cd winMGWrelease
cmake -DCMAKE_BUILD_TYPE=Release .. -G "MinGW Makefiles"
cmake --build .
cd ..