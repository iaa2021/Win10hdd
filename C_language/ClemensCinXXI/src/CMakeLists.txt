cmake_minimum_required( VERSION 3.5 )
project( ClemensXXI VERSION 1.2.5 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )
configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( p197 p197.c )
add_executable( p216 p216.c )
add_executable( p218 p218.c )
add_executable( p219 p219.c )

set(targets p197 p216 p218 p219) 

foreach( target ${targets} )
set_target_properties( ${target} PROPERTIES
C_STANDARD 17
C_STANDARD_REQUIRED ON
)

target_include_directories( ${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
 PRIVATE . ) 

target_link_libraries( ${target} m )

endforeach()


#We select the proper language in this long list.

#sudo nano /etc/locale.gen

#Then we generate a new language  with

#sudo locale-gen

