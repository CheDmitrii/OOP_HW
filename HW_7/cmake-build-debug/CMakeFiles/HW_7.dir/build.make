# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/HW_7.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/HW_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW_7.dir/flags.make

CMakeFiles/HW_7.dir/main.cpp.o: CMakeFiles/HW_7.dir/flags.make
CMakeFiles/HW_7.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW_7.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW_7.dir/main.cpp.o -c "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/main.cpp"

CMakeFiles/HW_7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW_7.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/main.cpp" > CMakeFiles/HW_7.dir/main.cpp.i

CMakeFiles/HW_7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW_7.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/main.cpp" -o CMakeFiles/HW_7.dir/main.cpp.s

CMakeFiles/HW_7.dir/classes.cpp.o: CMakeFiles/HW_7.dir/flags.make
CMakeFiles/HW_7.dir/classes.cpp.o: ../classes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW_7.dir/classes.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW_7.dir/classes.cpp.o -c "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/classes.cpp"

CMakeFiles/HW_7.dir/classes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW_7.dir/classes.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/classes.cpp" > CMakeFiles/HW_7.dir/classes.cpp.i

CMakeFiles/HW_7.dir/classes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW_7.dir/classes.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/classes.cpp" -o CMakeFiles/HW_7.dir/classes.cpp.s

# Object files for target HW_7
HW_7_OBJECTS = \
"CMakeFiles/HW_7.dir/main.cpp.o" \
"CMakeFiles/HW_7.dir/classes.cpp.o"

# External object files for target HW_7
HW_7_EXTERNAL_OBJECTS =

HW_7: CMakeFiles/HW_7.dir/main.cpp.o
HW_7: CMakeFiles/HW_7.dir/classes.cpp.o
HW_7: CMakeFiles/HW_7.dir/build.make
HW_7: CMakeFiles/HW_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable HW_7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW_7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW_7.dir/build: HW_7
.PHONY : CMakeFiles/HW_7.dir/build

CMakeFiles/HW_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW_7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW_7.dir/clean

CMakeFiles/HW_7.dir/depend:
	cd "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7" "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7" "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/cmake-build-debug" "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/cmake-build-debug" "/Users/ekaterinacebykina/Desktop/labi_si++/HW_(oop)/HW_7/cmake-build-debug/CMakeFiles/HW_7.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/HW_7.dir/depend

