# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.24.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.24.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/build"

# Include any dependencies generated for this target.
include CMakeFiles/January4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/January4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/January4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/January4.dir/flags.make

CMakeFiles/January4.dir/EthanOH/January4.cpp.o: CMakeFiles/January4.dir/flags.make
CMakeFiles/January4.dir/EthanOH/January4.cpp.o: /Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge\ 2023/winter_2023_24week_code/EthanOH/January4.cpp
CMakeFiles/January4.dir/EthanOH/January4.cpp.o: CMakeFiles/January4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/January4.dir/EthanOH/January4.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/January4.dir/EthanOH/January4.cpp.o -MF CMakeFiles/January4.dir/EthanOH/January4.cpp.o.d -o CMakeFiles/January4.dir/EthanOH/January4.cpp.o -c "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/EthanOH/January4.cpp"

CMakeFiles/January4.dir/EthanOH/January4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/January4.dir/EthanOH/January4.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/EthanOH/January4.cpp" > CMakeFiles/January4.dir/EthanOH/January4.cpp.i

CMakeFiles/January4.dir/EthanOH/January4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/January4.dir/EthanOH/January4.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/EthanOH/January4.cpp" -o CMakeFiles/January4.dir/EthanOH/January4.cpp.s

# Object files for target January4
January4_OBJECTS = \
"CMakeFiles/January4.dir/EthanOH/January4.cpp.o"

# External object files for target January4
January4_EXTERNAL_OBJECTS =

January4: CMakeFiles/January4.dir/EthanOH/January4.cpp.o
January4: CMakeFiles/January4.dir/build.make
January4: CMakeFiles/January4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable January4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/January4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/January4.dir/build: January4
.PHONY : CMakeFiles/January4.dir/build

CMakeFiles/January4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/January4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/January4.dir/clean

CMakeFiles/January4.dir/depend:
	cd "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code" "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code" "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/build" "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/build" "/Users/ethanshafranmoltz/Documents/NYU/Bridge/Bridge 2023/winter_2023_24week_code/build/CMakeFiles/January4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/January4.dir/depend
