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
CMAKE_SOURCE_DIR = "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BOOK__70.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BOOK__70.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BOOK__70.dir/flags.make

CMakeFiles/BOOK__70.dir/main.cpp.o: CMakeFiles/BOOK__70.dir/flags.make
CMakeFiles/BOOK__70.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BOOK__70.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BOOK__70.dir/main.cpp.o -c "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/main.cpp"

CMakeFiles/BOOK__70.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BOOK__70.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/main.cpp" > CMakeFiles/BOOK__70.dir/main.cpp.i

CMakeFiles/BOOK__70.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BOOK__70.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/main.cpp" -o CMakeFiles/BOOK__70.dir/main.cpp.s

CMakeFiles/BOOK__70.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/BOOK__70.dir/main.cpp.o.requires

CMakeFiles/BOOK__70.dir/main.cpp.o.provides: CMakeFiles/BOOK__70.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/BOOK__70.dir/build.make CMakeFiles/BOOK__70.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/BOOK__70.dir/main.cpp.o.provides

CMakeFiles/BOOK__70.dir/main.cpp.o.provides.build: CMakeFiles/BOOK__70.dir/main.cpp.o


# Object files for target BOOK__70
BOOK__70_OBJECTS = \
"CMakeFiles/BOOK__70.dir/main.cpp.o"

# External object files for target BOOK__70
BOOK__70_EXTERNAL_OBJECTS =

BOOK__70: CMakeFiles/BOOK__70.dir/main.cpp.o
BOOK__70: CMakeFiles/BOOK__70.dir/build.make
BOOK__70: CMakeFiles/BOOK__70.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BOOK__70"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BOOK__70.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BOOK__70.dir/build: BOOK__70

.PHONY : CMakeFiles/BOOK__70.dir/build

CMakeFiles/BOOK__70.dir/requires: CMakeFiles/BOOK__70.dir/main.cpp.o.requires

.PHONY : CMakeFiles/BOOK__70.dir/requires

CMakeFiles/BOOK__70.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BOOK__70.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BOOK__70.dir/clean

CMakeFiles/BOOK__70.dir/depend:
	cd "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/cmake-build-debug" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/cmake-build-debug" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/BOOK #70/cmake-build-debug/CMakeFiles/BOOK__70.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BOOK__70.dir/depend
