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
CMAKE_SOURCE_DIR = C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW

# Include any dependencies generated for this target.
include src/CMakeFiles/1122.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/1122.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/1122.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/1122.dir/flags.make

src/CMakeFiles/1122.dir/1122.cpp.obj: src/CMakeFiles/1122.dir/flags.make
src/CMakeFiles/1122.dir/1122.cpp.obj: src/CMakeFiles/1122.dir/includes_CXX.rsp
src/CMakeFiles/1122.dir/1122.cpp.obj: ../src/1122.cpp
src/CMakeFiles/1122.dir/1122.cpp.obj: src/CMakeFiles/1122.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/1122.dir/1122.cpp.obj"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/1122.dir/1122.cpp.obj -MF CMakeFiles\1122.dir\1122.cpp.obj.d -o CMakeFiles\1122.dir\1122.cpp.obj -c C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\src\1122.cpp

src/CMakeFiles/1122.dir/1122.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1122.dir/1122.cpp.i"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\src\1122.cpp > CMakeFiles\1122.dir\1122.cpp.i

src/CMakeFiles/1122.dir/1122.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1122.dir/1122.cpp.s"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\src\1122.cpp -o CMakeFiles\1122.dir\1122.cpp.s

# Object files for target 1122
1122_OBJECTS = \
"CMakeFiles/1122.dir/1122.cpp.obj"

# External object files for target 1122
1122_EXTERNAL_OBJECTS =

src/1122.exe: src/CMakeFiles/1122.dir/1122.cpp.obj
src/1122.exe: src/CMakeFiles/1122.dir/build.make
src/1122.exe: lib/libmyLib.a
src/1122.exe: src/CMakeFiles/1122.dir/linklibs.rsp
src/1122.exe: src/CMakeFiles/1122.dir/objects1.rsp
src/1122.exe: src/CMakeFiles/1122.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1122.exe"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1122.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/1122.dir/build: src/1122.exe
.PHONY : src/CMakeFiles/1122.dir/build

src/CMakeFiles/1122.dir/clean:
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\src && $(CMAKE_COMMAND) -P CMakeFiles\1122.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/1122.dir/clean

src/CMakeFiles/1122.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\src C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\src C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter20\p1119tree\buildMGW\src\CMakeFiles\1122.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/1122.dir/depend

