echo [*] build release configuration with MinGW
cd winMGWrelease
cmake -DCMAKE_BUILD_TYPE=Release .. -G "MinGW Makefiles"
cmake --build .
cd ..
echo [*] build debug configuration with MinGW
cd winMGWdebug
cmake -DCMAKE_BUILD_TYPE=Debug .. -G "MinGW Makefiles"
cmake --build .
cd ..