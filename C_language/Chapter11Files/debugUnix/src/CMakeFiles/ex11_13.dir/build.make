# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/1336/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1336/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix

# Include any dependencies generated for this target.
include src/CMakeFiles/ex11_13.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/ex11_13.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ex11_13.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ex11_13.dir/flags.make

src/CMakeFiles/ex11_13.dir/ex11_13.c.o: src/CMakeFiles/ex11_13.dir/flags.make
src/CMakeFiles/ex11_13.dir/ex11_13.c.o: /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/src/ex11_13.c
src/CMakeFiles/ex11_13.dir/ex11_13.c.o: src/CMakeFiles/ex11_13.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/ex11_13.dir/ex11_13.c.o"
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/CMakeFiles/ex11_13.dir/ex11_13.c.o -MF CMakeFiles/ex11_13.dir/ex11_13.c.o.d -o CMakeFiles/ex11_13.dir/ex11_13.c.o -c /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/src/ex11_13.c

src/CMakeFiles/ex11_13.dir/ex11_13.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/ex11_13.dir/ex11_13.c.i"
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/src/ex11_13.c > CMakeFiles/ex11_13.dir/ex11_13.c.i

src/CMakeFiles/ex11_13.dir/ex11_13.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/ex11_13.dir/ex11_13.c.s"
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/src/ex11_13.c -o CMakeFiles/ex11_13.dir/ex11_13.c.s

# Object files for target ex11_13
ex11_13_OBJECTS = \
"CMakeFiles/ex11_13.dir/ex11_13.c.o"

# External object files for target ex11_13
ex11_13_EXTERNAL_OBJECTS =

src/ex11_13: src/CMakeFiles/ex11_13.dir/ex11_13.c.o
src/ex11_13: src/CMakeFiles/ex11_13.dir/build.make
src/ex11_13: src/CMakeFiles/ex11_13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex11_13"
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex11_13.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ex11_13.dir/build: src/ex11_13
.PHONY : src/CMakeFiles/ex11_13.dir/build

src/CMakeFiles/ex11_13.dir/clean:
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/src && $(CMAKE_COMMAND) -P CMakeFiles/ex11_13.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ex11_13.dir/clean

src/CMakeFiles/ex11_13.dir/depend:
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/src /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/src /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter11Files/debugUnix/src/CMakeFiles/ex11_13.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/ex11_13.dir/depend
