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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/build

# Include any dependencies generated for this target.
include CMakeFiles/exec.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exec.dir/flags.make

CMakeFiles/exec.dir/main.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exec.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/main.cpp.o -c /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/main.cpp

CMakeFiles/exec.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/main.cpp > CMakeFiles/exec.dir/main.cpp.i

CMakeFiles/exec.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/main.cpp -o CMakeFiles/exec.dir/main.cpp.s

CMakeFiles/exec.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/main.cpp.o.requires

CMakeFiles/exec.dir/main.cpp.o.provides: CMakeFiles/exec.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/main.cpp.o.provides

CMakeFiles/exec.dir/main.cpp.o.provides.build: CMakeFiles/exec.dir/main.cpp.o


CMakeFiles/exec.dir/src/wire.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/wire.cpp.o: ../src/wire.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/exec.dir/src/wire.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/wire.cpp.o -c /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/src/wire.cpp

CMakeFiles/exec.dir/src/wire.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/wire.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/src/wire.cpp > CMakeFiles/exec.dir/src/wire.cpp.i

CMakeFiles/exec.dir/src/wire.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/wire.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/src/wire.cpp -o CMakeFiles/exec.dir/src/wire.cpp.s

CMakeFiles/exec.dir/src/wire.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/src/wire.cpp.o.requires

CMakeFiles/exec.dir/src/wire.cpp.o.provides: CMakeFiles/exec.dir/src/wire.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/src/wire.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/src/wire.cpp.o.provides

CMakeFiles/exec.dir/src/wire.cpp.o.provides.build: CMakeFiles/exec.dir/src/wire.cpp.o


# Object files for target exec
exec_OBJECTS = \
"CMakeFiles/exec.dir/main.cpp.o" \
"CMakeFiles/exec.dir/src/wire.cpp.o"

# External object files for target exec
exec_EXTERNAL_OBJECTS =

exec: CMakeFiles/exec.dir/main.cpp.o
exec: CMakeFiles/exec.dir/src/wire.cpp.o
exec: CMakeFiles/exec.dir/build.make
exec: CMakeFiles/exec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable exec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exec.dir/build: exec

.PHONY : CMakeFiles/exec.dir/build

CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/main.cpp.o.requires
CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/src/wire.cpp.o.requires

.PHONY : CMakeFiles/exec.dir/requires

CMakeFiles/exec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exec.dir/clean

CMakeFiles/exec.dir/depend:
	cd /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1 /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1 /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/build /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/build /mnt/c/Users/Góral/Desktop/programowanie/kotko/lab_1/build/CMakeFiles/exec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exec.dir/depend

