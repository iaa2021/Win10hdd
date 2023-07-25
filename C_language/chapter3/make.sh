echo [*] build debug configuration with MinGW Makefiles
cd debugMinGW
cmake -DCMAKE_BUILD_TYPE=Debug .. -G "MinGW Makefiles"
cmake --build .
cd ..
echo [*] build release configuration with Ninja
cd releaseNinja
cmake -DCMAKE_BUILD_TYPE=Release .. -G "Ninja"
cmake --build .
cd ..