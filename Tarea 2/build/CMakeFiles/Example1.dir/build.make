# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/sagastume/opengl/Tarea 2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/sagastume/opengl/Tarea 2/build"

# Include any dependencies generated for this target.
include CMakeFiles/Example1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Example1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Example1.dir/flags.make

CMakeFiles/Example1.dir/Ejercicio1.cpp.o: CMakeFiles/Example1.dir/flags.make
CMakeFiles/Example1.dir/Ejercicio1.cpp.o: ../Ejercicio1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sagastume/opengl/Tarea 2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Example1.dir/Ejercicio1.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Example1.dir/Ejercicio1.cpp.o -c "/home/sagastume/opengl/Tarea 2/Ejercicio1.cpp"

CMakeFiles/Example1.dir/Ejercicio1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Example1.dir/Ejercicio1.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sagastume/opengl/Tarea 2/Ejercicio1.cpp" > CMakeFiles/Example1.dir/Ejercicio1.cpp.i

CMakeFiles/Example1.dir/Ejercicio1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Example1.dir/Ejercicio1.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sagastume/opengl/Tarea 2/Ejercicio1.cpp" -o CMakeFiles/Example1.dir/Ejercicio1.cpp.s

CMakeFiles/Example1.dir/Ejercicio1.cpp.o.requires:

.PHONY : CMakeFiles/Example1.dir/Ejercicio1.cpp.o.requires

CMakeFiles/Example1.dir/Ejercicio1.cpp.o.provides: CMakeFiles/Example1.dir/Ejercicio1.cpp.o.requires
	$(MAKE) -f CMakeFiles/Example1.dir/build.make CMakeFiles/Example1.dir/Ejercicio1.cpp.o.provides.build
.PHONY : CMakeFiles/Example1.dir/Ejercicio1.cpp.o.provides

CMakeFiles/Example1.dir/Ejercicio1.cpp.o.provides.build: CMakeFiles/Example1.dir/Ejercicio1.cpp.o


# Object files for target Example1
Example1_OBJECTS = \
"CMakeFiles/Example1.dir/Ejercicio1.cpp.o"

# External object files for target Example1
Example1_EXTERNAL_OBJECTS =

Example1: CMakeFiles/Example1.dir/Ejercicio1.cpp.o
Example1: CMakeFiles/Example1.dir/build.make
Example1: /usr/lib/x86_64-linux-gnu/libGLU.so
Example1: /usr/lib/x86_64-linux-gnu/libGL.so
Example1: /usr/lib/x86_64-linux-gnu/libglut.so
Example1: /usr/lib/x86_64-linux-gnu/libXmu.so
Example1: /usr/lib/x86_64-linux-gnu/libXi.so
Example1: CMakeFiles/Example1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/sagastume/opengl/Tarea 2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Example1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Example1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Example1.dir/build: Example1

.PHONY : CMakeFiles/Example1.dir/build

CMakeFiles/Example1.dir/requires: CMakeFiles/Example1.dir/Ejercicio1.cpp.o.requires

.PHONY : CMakeFiles/Example1.dir/requires

CMakeFiles/Example1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Example1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Example1.dir/clean

CMakeFiles/Example1.dir/depend:
	cd "/home/sagastume/opengl/Tarea 2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/sagastume/opengl/Tarea 2" "/home/sagastume/opengl/Tarea 2" "/home/sagastume/opengl/Tarea 2/build" "/home/sagastume/opengl/Tarea 2/build" "/home/sagastume/opengl/Tarea 2/build/CMakeFiles/Example1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Example1.dir/depend

