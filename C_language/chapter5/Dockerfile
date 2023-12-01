#FROM gcc:latest

#WORKDIR /app

#COPY src /app/src
#COPY CMakeLists.txt /app

#RUN apt-get update && apt-get install -y cmake

#WORKDIR /app/build

#RUN cmake -DCMAKE_BUILD_TYPE=Debug .. && cmake --build .

#WORKDIR /app/build/src

#RUN ./ex5_26
#CMD [ "./ex5_26" ] #in this way only ex5_26 binary'll be invoked
#RUN ./ex5_26 this way one can invoke any binary in /app/build/src
# Use an official CMake image as the base image
FROM kitware/cmake
# Set the working directory inside the container
WORKDIR /app
# Copy the CMakeLists.txt and source code into the container
COPY CMakeLists.txt .
COPY /src app/src
WORKDIR /app/build
# Generate the Makefile using CMake
RUN cmake -DCMAKE_BUILD_TYPE=Release -G "Ninja" ..
RUN cmake --build . 
WORKDIR /app/build
RUN ./ex5_15