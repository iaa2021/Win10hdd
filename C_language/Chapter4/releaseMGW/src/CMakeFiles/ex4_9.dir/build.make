# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW

# Include any dependencies generated for this target.
include src/CMakeFiles/ex4_9.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/ex4_9.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ex4_9.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ex4_9.dir/flags.make

src/CMakeFiles/ex4_9.dir/ex4_9.c.obj: src/CMakeFiles/ex4_9.dir/flags.make
src/CMakeFiles/ex4_9.dir/ex4_9.c.obj: src/CMakeFiles/ex4_9.dir/includes_C.rsp
src/CMakeFiles/ex4_9.dir/ex4_9.c.obj: ../src/ex4_9.c
src/CMakeFiles/ex4_9.dir/ex4_9.c.obj: src/CMakeFiles/ex4_9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/ex4_9.dir/ex4_9.c.obj"
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\src && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/CMakeFiles/ex4_9.dir/ex4_9.c.obj -MF CMakeFiles\ex4_9.dir\ex4_9.c.obj.d -o CMakeFiles\ex4_9.dir\ex4_9.c.obj -c C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\src\ex4_9.c

src/CMakeFiles/ex4_9.dir/ex4_9.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex4_9.dir/ex4_9.c.i"
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\src && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\src\ex4_9.c > CMakeFiles\ex4_9.dir\ex4_9.c.i

src/CMakeFiles/ex4_9.dir/ex4_9.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex4_9.dir/ex4_9.c.s"
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\src && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\src\ex4_9.c -o CMakeFiles\ex4_9.dir\ex4_9.c.s

# Object files for target ex4_9
ex4_9_OBJECTS = \
"CMakeFiles/ex4_9.dir/ex4_9.c.obj"

# External object files for target ex4_9
ex4_9_EXTERNAL_OBJECTS =

src/ex4_9.exe: src/CMakeFiles/ex4_9.dir/ex4_9.c.obj
src/ex4_9.exe: src/CMakeFiles/ex4_9.dir/build.make
src/ex4_9.exe: src/CMakeFiles/ex4_9.dir/linklibs.rsp
src/ex4_9.exe: src/CMakeFiles/ex4_9.dir/objects1.rsp
src/ex4_9.exe: src/CMakeFiles/ex4_9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex4_9.exe"
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex4_9.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ex4_9.dir/build: src/ex4_9.exe
.PHONY : src/CMakeFiles/ex4_9.dir/build

src/CMakeFiles/ex4_9.dir/clean:
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\src && $(CMAKE_COMMAND) -P CMakeFiles\ex4_9.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/ex4_9.dir/clean

src/CMakeFiles/ex4_9.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4 C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\src C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\src C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Chapter4\releaseMGW\src\CMakeFiles\ex4_9.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ex4_9.dir/depend

