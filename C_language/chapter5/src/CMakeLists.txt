cmake_minimum_required( VERSION 3.5 )

project( chapter5 VERSION 5.1.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )
configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( crebs crebs.c )
add_executable( multiCrebs multiCrebs.c )
add_executable( ex5_17 ex5_17.c )
add_executable( ex5_23 ex5_23.c )
add_executable( ex5_26 ex5_26.c )
add_executable( ex5_28 ex5_28.c )

set( targets crebs multiCrebs ex5_17 ex5_23 ex5_26 ex5_28 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
C_STANDARD 17
C_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} PRIVATE . ) 
endforeach()