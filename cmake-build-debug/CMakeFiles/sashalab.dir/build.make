# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nikitatiskov/CLionProjects/sashalab

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nikitatiskov/CLionProjects/sashalab/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sashalab.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sashalab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sashalab.dir/flags.make

CMakeFiles/sashalab.dir/main.cpp.o: CMakeFiles/sashalab.dir/flags.make
CMakeFiles/sashalab.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikitatiskov/CLionProjects/sashalab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sashalab.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sashalab.dir/main.cpp.o -c /Users/nikitatiskov/CLionProjects/sashalab/main.cpp

CMakeFiles/sashalab.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sashalab.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikitatiskov/CLionProjects/sashalab/main.cpp > CMakeFiles/sashalab.dir/main.cpp.i

CMakeFiles/sashalab.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sashalab.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikitatiskov/CLionProjects/sashalab/main.cpp -o CMakeFiles/sashalab.dir/main.cpp.s

CMakeFiles/sashalab.dir/functions.cpp.o: CMakeFiles/sashalab.dir/flags.make
CMakeFiles/sashalab.dir/functions.cpp.o: ../functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikitatiskov/CLionProjects/sashalab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sashalab.dir/functions.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sashalab.dir/functions.cpp.o -c /Users/nikitatiskov/CLionProjects/sashalab/functions.cpp

CMakeFiles/sashalab.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sashalab.dir/functions.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nikitatiskov/CLionProjects/sashalab/functions.cpp > CMakeFiles/sashalab.dir/functions.cpp.i

CMakeFiles/sashalab.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sashalab.dir/functions.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nikitatiskov/CLionProjects/sashalab/functions.cpp -o CMakeFiles/sashalab.dir/functions.cpp.s

# Object files for target sashalab
sashalab_OBJECTS = \
"CMakeFiles/sashalab.dir/main.cpp.o" \
"CMakeFiles/sashalab.dir/functions.cpp.o"

# External object files for target sashalab
sashalab_EXTERNAL_OBJECTS =

sashalab: CMakeFiles/sashalab.dir/main.cpp.o
sashalab: CMakeFiles/sashalab.dir/functions.cpp.o
sashalab: CMakeFiles/sashalab.dir/build.make
sashalab: CMakeFiles/sashalab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nikitatiskov/CLionProjects/sashalab/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sashalab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sashalab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sashalab.dir/build: sashalab

.PHONY : CMakeFiles/sashalab.dir/build

CMakeFiles/sashalab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sashalab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sashalab.dir/clean

CMakeFiles/sashalab.dir/depend:
	cd /Users/nikitatiskov/CLionProjects/sashalab/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nikitatiskov/CLionProjects/sashalab /Users/nikitatiskov/CLionProjects/sashalab /Users/nikitatiskov/CLionProjects/sashalab/cmake-build-debug /Users/nikitatiskov/CLionProjects/sashalab/cmake-build-debug /Users/nikitatiskov/CLionProjects/sashalab/cmake-build-debug/CMakeFiles/sashalab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sashalab.dir/depend

