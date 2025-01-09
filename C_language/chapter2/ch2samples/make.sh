echo [*] build debug configuration with Ninja
cd debugNinja
cmake -DCMAKE_BUILD_TYPE=Debug .. -G "Ninja"
cmake --build .
cd ..
echo [*] build release configuration with Unix
cd releaseUnix
cmake -DCMAKE_BUILD_TYPE=Release ..
cmake --build .
cd ..