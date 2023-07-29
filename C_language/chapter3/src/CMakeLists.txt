cmake_minimum_required( VERSION 3.5 )

project( samples VERSION 3.1.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( ex3_17 ex3_17.c )
add_executable( ex3_39 ex3_39.c )
add_executable( ex3_40 ex3_40.c )

set( targets ex3_17 ex3_39 ex3_40 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . ) 
endforeach()