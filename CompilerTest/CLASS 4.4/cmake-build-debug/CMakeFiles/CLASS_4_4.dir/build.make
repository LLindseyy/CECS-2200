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
CMAKE_SOURCE_DIR = "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CLASS_4_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CLASS_4_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CLASS_4_4.dir/flags.make

CMakeFiles/CLASS_4_4.dir/main.cpp.o: CMakeFiles/CLASS_4_4.dir/flags.make
CMakeFiles/CLASS_4_4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CLASS_4_4.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CLASS_4_4.dir/main.cpp.o -c "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/main.cpp"

CMakeFiles/CLASS_4_4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CLASS_4_4.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/main.cpp" > CMakeFiles/CLASS_4_4.dir/main.cpp.i

CMakeFiles/CLASS_4_4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CLASS_4_4.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/main.cpp" -o CMakeFiles/CLASS_4_4.dir/main.cpp.s

CMakeFiles/CLASS_4_4.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/CLASS_4_4.dir/main.cpp.o.requires

CMakeFiles/CLASS_4_4.dir/main.cpp.o.provides: CMakeFiles/CLASS_4_4.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CLASS_4_4.dir/build.make CMakeFiles/CLASS_4_4.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/CLASS_4_4.dir/main.cpp.o.provides

CMakeFiles/CLASS_4_4.dir/main.cpp.o.provides.build: CMakeFiles/CLASS_4_4.dir/main.cpp.o


# Object files for target CLASS_4_4
CLASS_4_4_OBJECTS = \
"CMakeFiles/CLASS_4_4.dir/main.cpp.o"

# External object files for target CLASS_4_4
CLASS_4_4_EXTERNAL_OBJECTS =

CLASS_4_4: CMakeFiles/CLASS_4_4.dir/main.cpp.o
CLASS_4_4: CMakeFiles/CLASS_4_4.dir/build.make
CLASS_4_4: CMakeFiles/CLASS_4_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CLASS_4_4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CLASS_4_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CLASS_4_4.dir/build: CLASS_4_4

.PHONY : CMakeFiles/CLASS_4_4.dir/build

CMakeFiles/CLASS_4_4.dir/requires: CMakeFiles/CLASS_4_4.dir/main.cpp.o.requires

.PHONY : CMakeFiles/CLASS_4_4.dir/requires

CMakeFiles/CLASS_4_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CLASS_4_4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CLASS_4_4.dir/clean

CMakeFiles/CLASS_4_4.dir/depend:
	cd "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/cmake-build-debug" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/cmake-build-debug" "/Users/goddesslindsey/Documents/GitHub/CECS-2200/CompilerTest/CLASS 4.4/cmake-build-debug/CMakeFiles/CLASS_4_4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CLASS_4_4.dir/depend
