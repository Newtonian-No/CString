# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /usr/local/cmake/bin/cmake

# The command to remove a file.
RM = /usr/local/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ryz/Documents/Code/Cstring

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ryz/Documents/Code/Cstring/build

# Include any dependencies generated for this target.
include src/CMakeFiles/MyLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/MyLib.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/MyLib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/MyLib.dir/flags.make

src/CMakeFiles/MyLib.dir/lib/Cstring.cpp.o: src/CMakeFiles/MyLib.dir/flags.make
src/CMakeFiles/MyLib.dir/lib/Cstring.cpp.o: /home/ryz/Documents/Code/Cstring/src/lib/Cstring.cpp
src/CMakeFiles/MyLib.dir/lib/Cstring.cpp.o: src/CMakeFiles/MyLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/ryz/Documents/Code/Cstring/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/MyLib.dir/lib/Cstring.cpp.o"
	cd /home/ryz/Documents/Code/Cstring/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/MyLib.dir/lib/Cstring.cpp.o -MF CMakeFiles/MyLib.dir/lib/Cstring.cpp.o.d -o CMakeFiles/MyLib.dir/lib/Cstring.cpp.o -c /home/ryz/Documents/Code/Cstring/src/lib/Cstring.cpp

src/CMakeFiles/MyLib.dir/lib/Cstring.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyLib.dir/lib/Cstring.cpp.i"
	cd /home/ryz/Documents/Code/Cstring/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ryz/Documents/Code/Cstring/src/lib/Cstring.cpp > CMakeFiles/MyLib.dir/lib/Cstring.cpp.i

src/CMakeFiles/MyLib.dir/lib/Cstring.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyLib.dir/lib/Cstring.cpp.s"
	cd /home/ryz/Documents/Code/Cstring/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ryz/Documents/Code/Cstring/src/lib/Cstring.cpp -o CMakeFiles/MyLib.dir/lib/Cstring.cpp.s

# Object files for target MyLib
MyLib_OBJECTS = \
"CMakeFiles/MyLib.dir/lib/Cstring.cpp.o"

# External object files for target MyLib
MyLib_EXTERNAL_OBJECTS =

src/libMyLib.a: src/CMakeFiles/MyLib.dir/lib/Cstring.cpp.o
src/libMyLib.a: src/CMakeFiles/MyLib.dir/build.make
src/libMyLib.a: src/CMakeFiles/MyLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/ryz/Documents/Code/Cstring/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMyLib.a"
	cd /home/ryz/Documents/Code/Cstring/build/src && $(CMAKE_COMMAND) -P CMakeFiles/MyLib.dir/cmake_clean_target.cmake
	cd /home/ryz/Documents/Code/Cstring/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/MyLib.dir/build: src/libMyLib.a
.PHONY : src/CMakeFiles/MyLib.dir/build

src/CMakeFiles/MyLib.dir/clean:
	cd /home/ryz/Documents/Code/Cstring/build/src && $(CMAKE_COMMAND) -P CMakeFiles/MyLib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/MyLib.dir/clean

src/CMakeFiles/MyLib.dir/depend:
	cd /home/ryz/Documents/Code/Cstring/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ryz/Documents/Code/Cstring /home/ryz/Documents/Code/Cstring/src /home/ryz/Documents/Code/Cstring/build /home/ryz/Documents/Code/Cstring/build/src /home/ryz/Documents/Code/Cstring/build/src/CMakeFiles/MyLib.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/MyLib.dir/depend

