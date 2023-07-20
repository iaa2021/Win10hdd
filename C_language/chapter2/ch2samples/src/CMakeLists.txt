cmake_minimum_required( VERSION 3.5 )

project( samples VERSION 1.2.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )

add_executable( p55 p55.c )
add_executable( p70 p70.c )
add_executable( ex2_19 ex2_19.c )
add_executable( ex2_20 ex2_20.c )
set( targets p55 p70 ex2_19 ex2_20 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . ) 
endforeach()