cmake_minimum_required( VERSION 3.5 )
project( chapter11 VERSION 11.1.4 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )
configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( p502 p502.c )
add_executable( read read.c )
add_executable( inquery inquery.c )
add_executable( create create.c)
add_executable( arbWrite arbWrite.c )
add_executable( arbRead arbRead.c )
add_executable( choice choice.c )
add_executable( some some.c )
add_executable( ex11_3 ex11_3.c )
add_executable( ex11_7trans ex11_7trans.c)
add_executable( ex11_10 ex11_10.c )
add_executable( ex11_11 ex11_11.c )
add_executable( pr11_11 pr11_11.c )
add_executable( ex11_13 ex11_13.c )

set( targets p502 read inquery create arbWrite arbRead choice some ex11_3
ex11_7trans ex11_10 ex11_11 pr11_11 ex11_13 )

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
C_STANDARD 17
C_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
 PRIVATE . ) 

target_link_libraries( ${target} m )

endforeach()
