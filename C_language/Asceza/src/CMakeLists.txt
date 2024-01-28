cmake_minimum_required(VERSION 3.5)
project(asceza1 VERSION 1.2.3)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
configure_file(config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h)

set(RAYLIB_DIR "/usr")

find_package(raylib REQUIRED PATHS ${RAYLIB_DIR}/lib/cmake)

add_executable(first first.c)
add_executable(timer timer.c)
add_executable(clock clock.c)

set(targets first timer clock)

foreach(target ${targets})

set_target_properties(${target} PROPERTIES
    C_STANDARD 17
    C_STANDARD_REQUIRED ON
)
target_include_directories(${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
PRIVATE . )

target_link_libraries(${target} PRIVATE m PRIVATE raylib)

endforeach()