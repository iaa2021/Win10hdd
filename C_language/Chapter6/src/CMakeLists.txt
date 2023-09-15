cmake_minimum_required( VERSION 3.5 )

project( chapter6 VERSION 6.1.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )
configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( p254 p254.c )
add_executable( ex6_18 ex6_18.c )
add_executable( p383 p383.c )
add_executable( ex8_1 ex8_1.c )
add_executable( ex8_15 ex8_15.c )
add_executable( ex8_16 ex8_16.c )
add_executable( ex8_19 ex8_19.c )
add_executable( ex8_34 ex8_34.c )

set( targets p254 ex6_18 p383 ex8_1 ex8_15 ex8_16 ex8_19 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
C_STANDARD 17
C_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
 PRIVATE . ) 
endforeach()