echo [*]Build release configuration with MinGW Makefiles
cd releaseMGW
cmake -DCMAKE_BUILD_TYPE=Release .. -G "MinGW Makefiles"
cmake --build .
cd ..