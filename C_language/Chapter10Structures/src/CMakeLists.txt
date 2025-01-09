cmake_minimum_required( VERSION 3.5 )

project( chapter10 VERSION 10.1.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )
configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( ex10_3 ex10_3.c )
add_executable( ex10_6 ex10_6.c )
add_executable( ex10_10 ex10_10.c )
add_executable( ex10_13 ex10_13.c )
add_executable( ex10_17 ex10_17.c )

set( targets ex10_3 ex10_6 ex10_10 ex10_13 ex10_17 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
C_STANDARD 17
C_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
 PRIVATE . ) 
endforeach()