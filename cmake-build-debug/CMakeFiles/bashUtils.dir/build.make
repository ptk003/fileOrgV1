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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/paul_local/Documents/Programming/CLion/bashUtils

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bashUtils.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bashUtils.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bashUtils.dir/flags.make

CMakeFiles/bashUtils.dir/main.cpp.o: CMakeFiles/bashUtils.dir/flags.make
CMakeFiles/bashUtils.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bashUtils.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bashUtils.dir/main.cpp.o -c /Users/paul_local/Documents/Programming/CLion/bashUtils/main.cpp

CMakeFiles/bashUtils.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bashUtils.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/paul_local/Documents/Programming/CLion/bashUtils/main.cpp > CMakeFiles/bashUtils.dir/main.cpp.i

CMakeFiles/bashUtils.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bashUtils.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/paul_local/Documents/Programming/CLion/bashUtils/main.cpp -o CMakeFiles/bashUtils.dir/main.cpp.s

CMakeFiles/bashUtils.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/bashUtils.dir/main.cpp.o.requires

CMakeFiles/bashUtils.dir/main.cpp.o.provides: CMakeFiles/bashUtils.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/bashUtils.dir/build.make CMakeFiles/bashUtils.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/bashUtils.dir/main.cpp.o.provides

CMakeFiles/bashUtils.dir/main.cpp.o.provides.build: CMakeFiles/bashUtils.dir/main.cpp.o


CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o: CMakeFiles/bashUtils.dir/flags.make
CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o: ../AdvancedOutput.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o -c /Users/paul_local/Documents/Programming/CLion/bashUtils/AdvancedOutput.cpp

CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/paul_local/Documents/Programming/CLion/bashUtils/AdvancedOutput.cpp > CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.i

CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/paul_local/Documents/Programming/CLion/bashUtils/AdvancedOutput.cpp -o CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.s

CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o.requires:

.PHONY : CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o.requires

CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o.provides: CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o.requires
	$(MAKE) -f CMakeFiles/bashUtils.dir/build.make CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o.provides.build
.PHONY : CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o.provides

CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o.provides.build: CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o


CMakeFiles/bashUtils.dir/FSTools.cpp.o: CMakeFiles/bashUtils.dir/flags.make
CMakeFiles/bashUtils.dir/FSTools.cpp.o: ../FSTools.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/bashUtils.dir/FSTools.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bashUtils.dir/FSTools.cpp.o -c /Users/paul_local/Documents/Programming/CLion/bashUtils/FSTools.cpp

CMakeFiles/bashUtils.dir/FSTools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bashUtils.dir/FSTools.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/paul_local/Documents/Programming/CLion/bashUtils/FSTools.cpp > CMakeFiles/bashUtils.dir/FSTools.cpp.i

CMakeFiles/bashUtils.dir/FSTools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bashUtils.dir/FSTools.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/paul_local/Documents/Programming/CLion/bashUtils/FSTools.cpp -o CMakeFiles/bashUtils.dir/FSTools.cpp.s

CMakeFiles/bashUtils.dir/FSTools.cpp.o.requires:

.PHONY : CMakeFiles/bashUtils.dir/FSTools.cpp.o.requires

CMakeFiles/bashUtils.dir/FSTools.cpp.o.provides: CMakeFiles/bashUtils.dir/FSTools.cpp.o.requires
	$(MAKE) -f CMakeFiles/bashUtils.dir/build.make CMakeFiles/bashUtils.dir/FSTools.cpp.o.provides.build
.PHONY : CMakeFiles/bashUtils.dir/FSTools.cpp.o.provides

CMakeFiles/bashUtils.dir/FSTools.cpp.o.provides.build: CMakeFiles/bashUtils.dir/FSTools.cpp.o


CMakeFiles/bashUtils.dir/TermInfo.cpp.o: CMakeFiles/bashUtils.dir/flags.make
CMakeFiles/bashUtils.dir/TermInfo.cpp.o: ../TermInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/bashUtils.dir/TermInfo.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bashUtils.dir/TermInfo.cpp.o -c /Users/paul_local/Documents/Programming/CLion/bashUtils/TermInfo.cpp

CMakeFiles/bashUtils.dir/TermInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bashUtils.dir/TermInfo.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/paul_local/Documents/Programming/CLion/bashUtils/TermInfo.cpp > CMakeFiles/bashUtils.dir/TermInfo.cpp.i

CMakeFiles/bashUtils.dir/TermInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bashUtils.dir/TermInfo.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/paul_local/Documents/Programming/CLion/bashUtils/TermInfo.cpp -o CMakeFiles/bashUtils.dir/TermInfo.cpp.s

CMakeFiles/bashUtils.dir/TermInfo.cpp.o.requires:

.PHONY : CMakeFiles/bashUtils.dir/TermInfo.cpp.o.requires

CMakeFiles/bashUtils.dir/TermInfo.cpp.o.provides: CMakeFiles/bashUtils.dir/TermInfo.cpp.o.requires
	$(MAKE) -f CMakeFiles/bashUtils.dir/build.make CMakeFiles/bashUtils.dir/TermInfo.cpp.o.provides.build
.PHONY : CMakeFiles/bashUtils.dir/TermInfo.cpp.o.provides

CMakeFiles/bashUtils.dir/TermInfo.cpp.o.provides.build: CMakeFiles/bashUtils.dir/TermInfo.cpp.o


# Object files for target bashUtils
bashUtils_OBJECTS = \
"CMakeFiles/bashUtils.dir/main.cpp.o" \
"CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o" \
"CMakeFiles/bashUtils.dir/FSTools.cpp.o" \
"CMakeFiles/bashUtils.dir/TermInfo.cpp.o"

# External object files for target bashUtils
bashUtils_EXTERNAL_OBJECTS =

bashUtils: CMakeFiles/bashUtils.dir/main.cpp.o
bashUtils: CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o
bashUtils: CMakeFiles/bashUtils.dir/FSTools.cpp.o
bashUtils: CMakeFiles/bashUtils.dir/TermInfo.cpp.o
bashUtils: CMakeFiles/bashUtils.dir/build.make
bashUtils: CMakeFiles/bashUtils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable bashUtils"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bashUtils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bashUtils.dir/build: bashUtils

.PHONY : CMakeFiles/bashUtils.dir/build

CMakeFiles/bashUtils.dir/requires: CMakeFiles/bashUtils.dir/main.cpp.o.requires
CMakeFiles/bashUtils.dir/requires: CMakeFiles/bashUtils.dir/AdvancedOutput.cpp.o.requires
CMakeFiles/bashUtils.dir/requires: CMakeFiles/bashUtils.dir/FSTools.cpp.o.requires
CMakeFiles/bashUtils.dir/requires: CMakeFiles/bashUtils.dir/TermInfo.cpp.o.requires

.PHONY : CMakeFiles/bashUtils.dir/requires

CMakeFiles/bashUtils.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bashUtils.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bashUtils.dir/clean

CMakeFiles/bashUtils.dir/depend:
	cd /Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/paul_local/Documents/Programming/CLion/bashUtils /Users/paul_local/Documents/Programming/CLion/bashUtils /Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug /Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug /Users/paul_local/Documents/Programming/CLion/bashUtils/cmake-build-debug/CMakeFiles/bashUtils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bashUtils.dir/depend
