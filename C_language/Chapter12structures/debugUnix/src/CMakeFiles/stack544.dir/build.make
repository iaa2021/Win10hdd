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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix

# Include any dependencies generated for this target.
include src/CMakeFiles/stack544.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/stack544.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/stack544.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/stack544.dir/flags.make

src/CMakeFiles/stack544.dir/stack544.c.o: src/CMakeFiles/stack544.dir/flags.make
src/CMakeFiles/stack544.dir/stack544.c.o: /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/src/stack544.c
src/CMakeFiles/stack544.dir/stack544.c.o: src/CMakeFiles/stack544.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/stack544.dir/stack544.c.o"
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/CMakeFiles/stack544.dir/stack544.c.o -MF CMakeFiles/stack544.dir/stack544.c.o.d -o CMakeFiles/stack544.dir/stack544.c.o -c /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/src/stack544.c

src/CMakeFiles/stack544.dir/stack544.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/stack544.dir/stack544.c.i"
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/src/stack544.c > CMakeFiles/stack544.dir/stack544.c.i

src/CMakeFiles/stack544.dir/stack544.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/stack544.dir/stack544.c.s"
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/src/stack544.c -o CMakeFiles/stack544.dir/stack544.c.s

# Object files for target stack544
stack544_OBJECTS = \
"CMakeFiles/stack544.dir/stack544.c.o"

# External object files for target stack544
stack544_EXTERNAL_OBJECTS =

src/stack544: src/CMakeFiles/stack544.dir/stack544.c.o
src/stack544: src/CMakeFiles/stack544.dir/build.make
src/stack544: src/CMakeFiles/stack544.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable stack544"
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack544.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/stack544.dir/build: src/stack544
.PHONY : src/CMakeFiles/stack544.dir/build

src/CMakeFiles/stack544.dir/clean:
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/src && $(CMAKE_COMMAND) -P CMakeFiles/stack544.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/stack544.dir/clean

src/CMakeFiles/stack544.dir/depend:
	cd /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/src /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/src /home/iaa/Desktop/gitStore/Win10hdd/C_language/Chapter12structures/debugUnix/src/CMakeFiles/stack544.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/stack544.dir/depend
