# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/dpeleshko/Qt/Tools/CMake/bin/cmake

# The command to remove a file.
RM = /home/dpeleshko/Qt/Tools/CMake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/user_parametric_manipulator_using

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/build-user_parametric_manipulator_using-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/user_parametric_manipulator_using.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/user_parametric_manipulator_using.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/user_parametric_manipulator_using.dir/flags.make

CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.o: CMakeFiles/user_parametric_manipulator_using.dir/flags.make
CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.o: /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/user_parametric_manipulator_using/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/build-user_parametric_manipulator_using-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.o -c /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/user_parametric_manipulator_using/main.cpp

CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/user_parametric_manipulator_using/main.cpp > CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.i

CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/user_parametric_manipulator_using/main.cpp -o CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.s

# Object files for target user_parametric_manipulator_using
user_parametric_manipulator_using_OBJECTS = \
"CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.o"

# External object files for target user_parametric_manipulator_using
user_parametric_manipulator_using_EXTERNAL_OBJECTS =

user_parametric_manipulator_using: CMakeFiles/user_parametric_manipulator_using.dir/main.cpp.o
user_parametric_manipulator_using: CMakeFiles/user_parametric_manipulator_using.dir/build.make
user_parametric_manipulator_using: CMakeFiles/user_parametric_manipulator_using.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/build-user_parametric_manipulator_using-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable user_parametric_manipulator_using"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/user_parametric_manipulator_using.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/user_parametric_manipulator_using.dir/build: user_parametric_manipulator_using

.PHONY : CMakeFiles/user_parametric_manipulator_using.dir/build

CMakeFiles/user_parametric_manipulator_using.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/user_parametric_manipulator_using.dir/cmake_clean.cmake
.PHONY : CMakeFiles/user_parametric_manipulator_using.dir/clean

CMakeFiles/user_parametric_manipulator_using.dir/depend:
	cd /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/build-user_parametric_manipulator_using-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/user_parametric_manipulator_using /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/user_parametric_manipulator_using /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/build-user_parametric_manipulator_using-Desktop-Debug /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/build-user_parametric_manipulator_using-Desktop-Debug /home/dpeleshko/work/C-C++/qt/io_stream/user_parametric_manipulator_using/build-user_parametric_manipulator_using-Desktop-Debug/CMakeFiles/user_parametric_manipulator_using.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/user_parametric_manipulator_using.dir/depend

