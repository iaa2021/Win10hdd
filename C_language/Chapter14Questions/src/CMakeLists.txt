cmake_minimum_required(VERSION 3.5)
project(chapter14 VERSION 14.1.5)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
configure_file(config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h)

add_executable(p605 p605.c)
add_executable(p606 p606.c)
add_executable(p610 p610.c)
add_executable(p612 p612.c)
add_executable(p614 p614.c)
add_executable(p617 p617.c)
add_executable(ex14_3 ex14_3.c)
add_executable(ex14_5 ex14_5.c)
add_executable(ex14_6 ex14_6.c)
add_executable(ex14_7 ex14_7.c)
add_executable(ex14_8 ex14_8.c)
add_executable(ex14_9 ex14_9.c)

set(targets p605 p606 p610 p612 p614 p617 ex14_3 ex14_5 ex14_6 ex14_7 ex14_8)

foreach(target ${targets})

set_target_properties(${target} PROPERTIES
    C_STANDARD 17
    C_STANDARD_REQUIRED ON
)
target_include_directories(${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
PRIVATE . )

target_link_libraries(${target} m)

endforeach()