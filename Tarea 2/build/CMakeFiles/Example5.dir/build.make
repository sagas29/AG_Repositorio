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
include CMakeFiles/Example5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Example5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Example5.dir/flags.make

CMakeFiles/Example5.dir/Ejercicio5.cpp.o: CMakeFiles/Example5.dir/flags.make
CMakeFiles/Example5.dir/Ejercicio5.cpp.o: ../Ejercicio5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/sagastume/opengl/Tarea 2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Example5.dir/Ejercicio5.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Example5.dir/Ejercicio5.cpp.o -c "/home/sagastume/opengl/Tarea 2/Ejercicio5.cpp"

CMakeFiles/Example5.dir/Ejercicio5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Example5.dir/Ejercicio5.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/sagastume/opengl/Tarea 2/Ejercicio5.cpp" > CMakeFiles/Example5.dir/Ejercicio5.cpp.i

CMakeFiles/Example5.dir/Ejercicio5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Example5.dir/Ejercicio5.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/sagastume/opengl/Tarea 2/Ejercicio5.cpp" -o CMakeFiles/Example5.dir/Ejercicio5.cpp.s

CMakeFiles/Example5.dir/Ejercicio5.cpp.o.requires:

.PHONY : CMakeFiles/Example5.dir/Ejercicio5.cpp.o.requires

CMakeFiles/Example5.dir/Ejercicio5.cpp.o.provides: CMakeFiles/Example5.dir/Ejercicio5.cpp.o.requires
	$(MAKE) -f CMakeFiles/Example5.dir/build.make CMakeFiles/Example5.dir/Ejercicio5.cpp.o.provides.build
.PHONY : CMakeFiles/Example5.dir/Ejercicio5.cpp.o.provides

CMakeFiles/Example5.dir/Ejercicio5.cpp.o.provides.build: CMakeFiles/Example5.dir/Ejercicio5.cpp.o


# Object files for target Example5
Example5_OBJECTS = \
"CMakeFiles/Example5.dir/Ejercicio5.cpp.o"

# External object files for target Example5
Example5_EXTERNAL_OBJECTS =

Example5: CMakeFiles/Example5.dir/Ejercicio5.cpp.o
Example5: CMakeFiles/Example5.dir/build.make
Example5: /usr/lib/x86_64-linux-gnu/libGLU.so
Example5: /usr/lib/x86_64-linux-gnu/libGL.so
Example5: /usr/lib/x86_64-linux-gnu/libglut.so
Example5: /usr/lib/x86_64-linux-gnu/libXmu.so
Example5: /usr/lib/x86_64-linux-gnu/libXi.so
Example5: CMakeFiles/Example5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/sagastume/opengl/Tarea 2/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Example5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Example5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Example5.dir/build: Example5

.PHONY : CMakeFiles/Example5.dir/build

CMakeFiles/Example5.dir/requires: CMakeFiles/Example5.dir/Ejercicio5.cpp.o.requires

.PHONY : CMakeFiles/Example5.dir/requires

CMakeFiles/Example5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Example5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Example5.dir/clean

CMakeFiles/Example5.dir/depend:
	cd "/home/sagastume/opengl/Tarea 2/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/sagastume/opengl/Tarea 2" "/home/sagastume/opengl/Tarea 2" "/home/sagastume/opengl/Tarea 2/build" "/home/sagastume/opengl/Tarea 2/build" "/home/sagastume/opengl/Tarea 2/build/CMakeFiles/Example5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Example5.dir/depend
