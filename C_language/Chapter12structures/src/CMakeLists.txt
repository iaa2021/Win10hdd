cmake_minimum_required( VERSION 3.5 )
project( chapter13 VERSION 13.1.3 )

configure_file( config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h )
configure_file( config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h )

add_executable( p533 p533.c )
add_executable( list list.c )
add_executable( clemens152 clemens152.c)
add_executable(stack544 stack544.c)
add_executable(queue554 queue554.c)
add_executable(tree tree.c)
add_executable(ex12_4 ex12_4.c)
add_executable(vlfunc vlfunc.c)
add_executable(ex12_6 ex12_6.c)
add_executable(ex12_9 ex12_9.c)
add_executable(ex12_10 ex12_10.c)
add_executable(ex12_15 ex12_15.c)
add_executable(ex12_17 ex12_17.c)
add_executable(ex12_19 ex12_19depth.c)
add_executable(ex12_20 ex12_20.c)
add_executable(ex12_22 ex12_22.c tree.h)
add_executable(ex12_23 ex12_23.c tree.h)
add_executable(ex12_24 ex12_24.c tree.h)

set(targets p533 list clemens152 stack544 queue554 tree ex12_4 vlfunc ex12_6 ex12_9 ex12_10
ex12_15 ex12_17 ex12_19 ex12_20 ex12_22 ex12_23 ex12_24) 

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

