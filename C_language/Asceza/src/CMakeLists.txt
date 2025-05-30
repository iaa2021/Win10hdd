cmake_minimum_required(VERSION 3.11)
project(asceza1 VERSION 1.2.3)

include_directories(/usr/local/include)

configure_file(config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h)
configure_file(config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h)

add_executable(first first.c)
add_executable(timer timer.c)
add_executable(clock clock.c)
add_executable(core1 core1.c)
add_executable(core2 core2.c)
add_executable(wClock wClock.c)

if(WIN32)
# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Dependencies
set(RAYLIB_VERSION 4.5.0)
find_package(raylib ${RAYLIB_VERSION} QUIET) # QUIET or REQUIRED
if (NOT raylib_FOUND) # If there's none, fetch and build raylib
  include(FetchContent)
  FetchContent_Declare(
    raylib
    DOWNLOAD_EXTRACT_TIMESTAMP OFF
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
  )
  FetchContent_GetProperties(raylib)
  if (NOT raylib_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_Populate(raylib)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
    add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
  endif()
endif()

# Web Configurations
if (${PLATFORM} STREQUAL "Web")
    # Tell Emscripten to build an example.html file.
    set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".html")
endif()

# Checks if OSX and links appropriate frameworks (Only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()
elseif(UNIX)

#set(RAYLIB_DIR "/usr")
set(RAYLIB_DIR "/home/iaa")

find_package(raylib REQUIRED PATHS ${RAYLIB_DIR}/raylib/cmake)
#find_package(raylib 5.0.0 REQUIRED)

endif()

set(targets first timer clock core1 core2)

foreach(target ${targets})

set_target_properties(${target} PROPERTIES
    C_STANDARD 17
    C_STANDARD_REQUIRED ON
)
target_include_directories(${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR} 
PRIVATE . PUBLIC ~/raylib PUBLIC /usr/local/lib)

target_link_libraries(${target} PUBLIC m raylib -L/usr/local/lib -lraylib)

endforeach()