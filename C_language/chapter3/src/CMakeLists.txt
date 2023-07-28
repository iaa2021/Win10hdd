cmake_minimum_required( VERSION 3.5 )

project( samples VERSION 3.1.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( ex3_17 ex3_17.c )
add_executable( ex3_19 ex3_19.c )
add_executable( ex3_20 ex3_20.c )
add_executable( ex3_21 ex3_21.c )
add_executable( ex3_33 ex3_33.c )

set( targets ex3_17 ex3_19 ex3_20 ex3_21 ex3_33 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . ) 
endforeach()