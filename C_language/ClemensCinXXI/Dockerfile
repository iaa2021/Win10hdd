FROM gcc:latest

WORKDIR /app

COPY src /app/src
COPY CMakeLists.txt /app

RUN apt-get update && apt-get install -y cmake

WORKDIR /app/build

RUN cmake -DCMAKE_BUILD_TYPE=Release .. && cmake --build .

WORKDIR /app/build/src

RUN ./clemens152
#CMD [ "./ex5_26" ] #in this way only ex5_26 binary'll be invoked
#RUN ./ex5_26 this way one can invoke any binary in /app/build/src