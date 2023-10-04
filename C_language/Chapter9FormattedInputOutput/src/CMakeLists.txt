cmake_minimum_required( VERSION 3.5 )

project( chapter9 VERSION 9.1.2 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )
configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( p427 p427.c )
add_executable( ex9_4 ex9_4.c )
add_executable( ex9_8 ex9_8.c )
add_executable( ex9_12 ex9_12.c )
add_executable( p465 p465.c )

set( targets p427 ex9_4 ex9_8 ex9_12 p465 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
C_STANDARD 17
C_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
 PRIVATE . ) 
endforeach()