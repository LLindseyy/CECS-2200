# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/23Sebi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/23Sebi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/23Sebi.dir/flags.make

CMakeFiles/23Sebi.dir/main.cpp.o: CMakeFiles/23Sebi.dir/flags.make
CMakeFiles/23Sebi.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/23Sebi.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/23Sebi.dir/main.cpp.o -c /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/main.cpp

CMakeFiles/23Sebi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/23Sebi.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/main.cpp > CMakeFiles/23Sebi.dir/main.cpp.i

CMakeFiles/23Sebi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/23Sebi.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/main.cpp -o CMakeFiles/23Sebi.dir/main.cpp.s

CMakeFiles/23Sebi.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/23Sebi.dir/main.cpp.o.requires

CMakeFiles/23Sebi.dir/main.cpp.o.provides: CMakeFiles/23Sebi.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/23Sebi.dir/build.make CMakeFiles/23Sebi.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/23Sebi.dir/main.cpp.o.provides

CMakeFiles/23Sebi.dir/main.cpp.o.provides.build: CMakeFiles/23Sebi.dir/main.cpp.o


# Object files for target 23Sebi
23Sebi_OBJECTS = \
"CMakeFiles/23Sebi.dir/main.cpp.o"

# External object files for target 23Sebi
23Sebi_EXTERNAL_OBJECTS =

23Sebi: CMakeFiles/23Sebi.dir/main.cpp.o
23Sebi: CMakeFiles/23Sebi.dir/build.make
23Sebi: CMakeFiles/23Sebi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 23Sebi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/23Sebi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/23Sebi.dir/build: 23Sebi

.PHONY : CMakeFiles/23Sebi.dir/build

CMakeFiles/23Sebi.dir/requires: CMakeFiles/23Sebi.dir/main.cpp.o.requires

.PHONY : CMakeFiles/23Sebi.dir/requires

CMakeFiles/23Sebi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/23Sebi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/23Sebi.dir/clean

CMakeFiles/23Sebi.dir/depend:
	cd /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/cmake-build-debug /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/cmake-build-debug /Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/23Sebi/cmake-build-debug/CMakeFiles/23Sebi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/23Sebi.dir/depend
