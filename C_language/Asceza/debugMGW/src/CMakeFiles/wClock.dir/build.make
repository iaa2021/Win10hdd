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
CMAKE_SOURCE_DIR = C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW

# Include any dependencies generated for this target.
include src/CMakeFiles/wClock.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/wClock.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/wClock.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/wClock.dir/flags.make

src/CMakeFiles/wClock.dir/wClock.c.obj: src/CMakeFiles/wClock.dir/flags.make
src/CMakeFiles/wClock.dir/wClock.c.obj: src/CMakeFiles/wClock.dir/includes_C.rsp
src/CMakeFiles/wClock.dir/wClock.c.obj: ../src/wClock.c
src/CMakeFiles/wClock.dir/wClock.c.obj: src/CMakeFiles/wClock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/wClock.dir/wClock.c.obj"
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\src && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT src/CMakeFiles/wClock.dir/wClock.c.obj -MF CMakeFiles\wClock.dir\wClock.c.obj.d -o CMakeFiles\wClock.dir\wClock.c.obj -c C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\src\wClock.c

src/CMakeFiles/wClock.dir/wClock.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/wClock.dir/wClock.c.i"
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\src && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\src\wClock.c > CMakeFiles\wClock.dir\wClock.c.i

src/CMakeFiles/wClock.dir/wClock.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/wClock.dir/wClock.c.s"
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\src && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\src\wClock.c -o CMakeFiles\wClock.dir\wClock.c.s

# Object files for target wClock
wClock_OBJECTS = \
"CMakeFiles/wClock.dir/wClock.c.obj"

# External object files for target wClock
wClock_EXTERNAL_OBJECTS =

src/wClock.exe: src/CMakeFiles/wClock.dir/wClock.c.obj
src/wClock.exe: src/CMakeFiles/wClock.dir/build.make
src/wClock.exe: src/CMakeFiles/wClock.dir/linklibs.rsp
src/wClock.exe: src/CMakeFiles/wClock.dir/objects1.rsp
src/wClock.exe: src/CMakeFiles/wClock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable wClock.exe"
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\wClock.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/wClock.dir/build: src/wClock.exe
.PHONY : src/CMakeFiles/wClock.dir/build

src/CMakeFiles/wClock.dir/clean:
	cd /d C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\src && $(CMAKE_COMMAND) -P CMakeFiles\wClock.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/wClock.dir/clean

src/CMakeFiles/wClock.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\src C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\src C:\Users\ivano\Desktop\gitStore\Win10hdd\C_language\Asceza\debugMGW\src\CMakeFiles\wClock.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/wClock.dir/depend

