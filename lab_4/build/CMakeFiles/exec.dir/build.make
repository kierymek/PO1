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
CMAKE_SOURCE_DIR = "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build"

# Include any dependencies generated for this target.
include CMakeFiles/exec.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exec.dir/flags.make

CMakeFiles/exec.dir/play.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/play.cpp.o: ../play.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exec.dir/play.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/play.cpp.o -c "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/play.cpp"

CMakeFiles/exec.dir/play.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/play.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/play.cpp" > CMakeFiles/exec.dir/play.cpp.i

CMakeFiles/exec.dir/play.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/play.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/play.cpp" -o CMakeFiles/exec.dir/play.cpp.s

CMakeFiles/exec.dir/play.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/play.cpp.o.requires

CMakeFiles/exec.dir/play.cpp.o.provides: CMakeFiles/exec.dir/play.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/play.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/play.cpp.o.provides

CMakeFiles/exec.dir/play.cpp.o.provides.build: CMakeFiles/exec.dir/play.cpp.o


CMakeFiles/exec.dir/src/board.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/board.cpp.o: ../src/board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/exec.dir/src/board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/board.cpp.o -c "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/board.cpp"

CMakeFiles/exec.dir/src/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/board.cpp" > CMakeFiles/exec.dir/src/board.cpp.i

CMakeFiles/exec.dir/src/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/board.cpp" -o CMakeFiles/exec.dir/src/board.cpp.s

CMakeFiles/exec.dir/src/board.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/src/board.cpp.o.requires

CMakeFiles/exec.dir/src/board.cpp.o.provides: CMakeFiles/exec.dir/src/board.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/src/board.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/src/board.cpp.o.provides

CMakeFiles/exec.dir/src/board.cpp.o.provides.build: CMakeFiles/exec.dir/src/board.cpp.o


CMakeFiles/exec.dir/src/game.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/game.cpp.o: ../src/game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/exec.dir/src/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/game.cpp.o -c "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/game.cpp"

CMakeFiles/exec.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/game.cpp" > CMakeFiles/exec.dir/src/game.cpp.i

CMakeFiles/exec.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/game.cpp" -o CMakeFiles/exec.dir/src/game.cpp.s

CMakeFiles/exec.dir/src/game.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/src/game.cpp.o.requires

CMakeFiles/exec.dir/src/game.cpp.o.provides: CMakeFiles/exec.dir/src/game.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/src/game.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/src/game.cpp.o.provides

CMakeFiles/exec.dir/src/game.cpp.o.provides.build: CMakeFiles/exec.dir/src/game.cpp.o


CMakeFiles/exec.dir/src/matrix.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/matrix.cpp.o: ../src/matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/exec.dir/src/matrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/matrix.cpp.o -c "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/matrix.cpp"

CMakeFiles/exec.dir/src/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/matrix.cpp" > CMakeFiles/exec.dir/src/matrix.cpp.i

CMakeFiles/exec.dir/src/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/matrix.cpp" -o CMakeFiles/exec.dir/src/matrix.cpp.s

CMakeFiles/exec.dir/src/matrix.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/src/matrix.cpp.o.requires

CMakeFiles/exec.dir/src/matrix.cpp.o.provides: CMakeFiles/exec.dir/src/matrix.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/src/matrix.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/src/matrix.cpp.o.provides

CMakeFiles/exec.dir/src/matrix.cpp.o.provides.build: CMakeFiles/exec.dir/src/matrix.cpp.o


CMakeFiles/exec.dir/src/sapper.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/sapper.cpp.o: ../src/sapper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/exec.dir/src/sapper.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/sapper.cpp.o -c "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/sapper.cpp"

CMakeFiles/exec.dir/src/sapper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/sapper.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/sapper.cpp" > CMakeFiles/exec.dir/src/sapper.cpp.i

CMakeFiles/exec.dir/src/sapper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/sapper.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/sapper.cpp" -o CMakeFiles/exec.dir/src/sapper.cpp.s

CMakeFiles/exec.dir/src/sapper.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/src/sapper.cpp.o.requires

CMakeFiles/exec.dir/src/sapper.cpp.o.provides: CMakeFiles/exec.dir/src/sapper.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/src/sapper.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/src/sapper.cpp.o.provides

CMakeFiles/exec.dir/src/sapper.cpp.o.provides.build: CMakeFiles/exec.dir/src/sapper.cpp.o


CMakeFiles/exec.dir/src/sapper_board.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/sapper_board.cpp.o: ../src/sapper_board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/exec.dir/src/sapper_board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/sapper_board.cpp.o -c "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/sapper_board.cpp"

CMakeFiles/exec.dir/src/sapper_board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/sapper_board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/sapper_board.cpp" > CMakeFiles/exec.dir/src/sapper_board.cpp.i

CMakeFiles/exec.dir/src/sapper_board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/sapper_board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/sapper_board.cpp" -o CMakeFiles/exec.dir/src/sapper_board.cpp.s

CMakeFiles/exec.dir/src/sapper_board.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/src/sapper_board.cpp.o.requires

CMakeFiles/exec.dir/src/sapper_board.cpp.o.provides: CMakeFiles/exec.dir/src/sapper_board.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/src/sapper_board.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/src/sapper_board.cpp.o.provides

CMakeFiles/exec.dir/src/sapper_board.cpp.o.provides.build: CMakeFiles/exec.dir/src/sapper_board.cpp.o


CMakeFiles/exec.dir/src/vector.cpp.o: CMakeFiles/exec.dir/flags.make
CMakeFiles/exec.dir/src/vector.cpp.o: ../src/vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/exec.dir/src/vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exec.dir/src/vector.cpp.o -c "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/vector.cpp"

CMakeFiles/exec.dir/src/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exec.dir/src/vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/vector.cpp" > CMakeFiles/exec.dir/src/vector.cpp.i

CMakeFiles/exec.dir/src/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exec.dir/src/vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/src/vector.cpp" -o CMakeFiles/exec.dir/src/vector.cpp.s

CMakeFiles/exec.dir/src/vector.cpp.o.requires:

.PHONY : CMakeFiles/exec.dir/src/vector.cpp.o.requires

CMakeFiles/exec.dir/src/vector.cpp.o.provides: CMakeFiles/exec.dir/src/vector.cpp.o.requires
	$(MAKE) -f CMakeFiles/exec.dir/build.make CMakeFiles/exec.dir/src/vector.cpp.o.provides.build
.PHONY : CMakeFiles/exec.dir/src/vector.cpp.o.provides

CMakeFiles/exec.dir/src/vector.cpp.o.provides.build: CMakeFiles/exec.dir/src/vector.cpp.o


# Object files for target exec
exec_OBJECTS = \
"CMakeFiles/exec.dir/play.cpp.o" \
"CMakeFiles/exec.dir/src/board.cpp.o" \
"CMakeFiles/exec.dir/src/game.cpp.o" \
"CMakeFiles/exec.dir/src/matrix.cpp.o" \
"CMakeFiles/exec.dir/src/sapper.cpp.o" \
"CMakeFiles/exec.dir/src/sapper_board.cpp.o" \
"CMakeFiles/exec.dir/src/vector.cpp.o"

# External object files for target exec
exec_EXTERNAL_OBJECTS =

exec: CMakeFiles/exec.dir/play.cpp.o
exec: CMakeFiles/exec.dir/src/board.cpp.o
exec: CMakeFiles/exec.dir/src/game.cpp.o
exec: CMakeFiles/exec.dir/src/matrix.cpp.o
exec: CMakeFiles/exec.dir/src/sapper.cpp.o
exec: CMakeFiles/exec.dir/src/sapper_board.cpp.o
exec: CMakeFiles/exec.dir/src/vector.cpp.o
exec: CMakeFiles/exec.dir/build.make
exec: CMakeFiles/exec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable exec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exec.dir/build: exec

.PHONY : CMakeFiles/exec.dir/build

CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/play.cpp.o.requires
CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/src/board.cpp.o.requires
CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/src/game.cpp.o.requires
CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/src/matrix.cpp.o.requires
CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/src/sapper.cpp.o.requires
CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/src/sapper_board.cpp.o.requires
CMakeFiles/exec.dir/requires: CMakeFiles/exec.dir/src/vector.cpp.o.requires

.PHONY : CMakeFiles/exec.dir/requires

CMakeFiles/exec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exec.dir/clean

CMakeFiles/exec.dir/depend:
	cd "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4" "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4" "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build" "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build" "/mnt/c/Users/Adrian Góral/Desktop/programowanie/KOTKO/lab_4/build/CMakeFiles/exec.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/exec.dir/depend
