cmake_minimum_required( VERSION 3.5 )

project( samples VERSION 4.1.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )
configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( ex4_3 ex4_3.c )
add_executable( ex4_9 ex4_9.c )
add_executable( ex4_15 ex4_15.c )
add_executable( ex4_16 ex4_16.c )
add_executable( ex4_19 ex4_19.c )
add_executable( ex4_26 ex4_26.c )
add_executable( ex4_27 ex4_27.c )
add_executable( ex4_31 ex4_31.c )
add_executable( ex4_32 ex4_32.c )
add_executable( ex4_33 ex4_33.c )

set( targets ex4_3 ex4_9 ex4_15 ex4_16 ex4_19 ex4_26 ex4_27 ex4_31 ex4_32 ex4_33 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
CXX_STANDARD 11
CXX_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . ) 
endforeach()