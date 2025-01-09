echo [*] build debug configuration with Unix
cd ../debugUnix
cmake -DCMAKE_BUILD_TYPE=Debug .. 
cmake --build .
cd ..
echo [*] build release configuration with Ninja
cd releaseNinja
cmake -DCMAKE_BUILD_TYPE=Release .. -G "Ninja" 
cmake --build .
cd ..