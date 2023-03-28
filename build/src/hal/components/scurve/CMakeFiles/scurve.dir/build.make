# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/hal-core-2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/hal-core-2.0/build

# Include any dependencies generated for this target.
include src/hal/components/scurve/CMakeFiles/scurve.dir/depend.make

# Include the progress variables for this target.
include src/hal/components/scurve/CMakeFiles/scurve.dir/progress.make

# Include the compile flags for this target's objects.
include src/hal/components/scurve/CMakeFiles/scurve.dir/flags.make

src/hal/components/scurve/CMakeFiles/scurve.dir/sc_engine.c.o: src/hal/components/scurve/CMakeFiles/scurve.dir/flags.make
src/hal/components/scurve/CMakeFiles/scurve.dir/sc_engine.c.o: ../src/hal/components/scurve/sc_engine.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/hal-core-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/hal/components/scurve/CMakeFiles/scurve.dir/sc_engine.c.o"
	cd /home/user/hal-core-2.0/build/src/hal/components/scurve && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/scurve.dir/sc_engine.c.o -c /home/user/hal-core-2.0/src/hal/components/scurve/sc_engine.c

src/hal/components/scurve/CMakeFiles/scurve.dir/sc_engine.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/scurve.dir/sc_engine.c.i"
	cd /home/user/hal-core-2.0/build/src/hal/components/scurve && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/hal-core-2.0/src/hal/components/scurve/sc_engine.c > CMakeFiles/scurve.dir/sc_engine.c.i

src/hal/components/scurve/CMakeFiles/scurve.dir/sc_engine.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/scurve.dir/sc_engine.c.s"
	cd /home/user/hal-core-2.0/build/src/hal/components/scurve && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/hal-core-2.0/src/hal/components/scurve/sc_engine.c -o CMakeFiles/scurve.dir/sc_engine.c.s

src/hal/components/scurve/CMakeFiles/scurve.dir/scurve.c.o: src/hal/components/scurve/CMakeFiles/scurve.dir/flags.make
src/hal/components/scurve/CMakeFiles/scurve.dir/scurve.c.o: ../src/hal/components/scurve/scurve.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/hal-core-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/hal/components/scurve/CMakeFiles/scurve.dir/scurve.c.o"
	cd /home/user/hal-core-2.0/build/src/hal/components/scurve && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/scurve.dir/scurve.c.o -c /home/user/hal-core-2.0/src/hal/components/scurve/scurve.c

src/hal/components/scurve/CMakeFiles/scurve.dir/scurve.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/scurve.dir/scurve.c.i"
	cd /home/user/hal-core-2.0/build/src/hal/components/scurve && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/user/hal-core-2.0/src/hal/components/scurve/scurve.c > CMakeFiles/scurve.dir/scurve.c.i

src/hal/components/scurve/CMakeFiles/scurve.dir/scurve.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/scurve.dir/scurve.c.s"
	cd /home/user/hal-core-2.0/build/src/hal/components/scurve && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/user/hal-core-2.0/src/hal/components/scurve/scurve.c -o CMakeFiles/scurve.dir/scurve.c.s

# Object files for target scurve
scurve_OBJECTS = \
"CMakeFiles/scurve.dir/sc_engine.c.o" \
"CMakeFiles/scurve.dir/scurve.c.o"

# External object files for target scurve
scurve_EXTERNAL_OBJECTS =

src/hal/components/scurve/scurve.so: src/hal/components/scurve/CMakeFiles/scurve.dir/sc_engine.c.o
src/hal/components/scurve/scurve.so: src/hal/components/scurve/CMakeFiles/scurve.dir/scurve.c.o
src/hal/components/scurve/scurve.so: src/hal/components/scurve/CMakeFiles/scurve.dir/build.make
src/hal/components/scurve/scurve.so: src/hal/halcore/libhalcore.so
src/hal/components/scurve/scurve.so: src/hal/components/scurve/CMakeFiles/scurve.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/hal-core-2.0/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C shared library scurve.so"
	cd /home/user/hal-core-2.0/build/src/hal/components/scurve && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scurve.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/hal/components/scurve/CMakeFiles/scurve.dir/build: src/hal/components/scurve/scurve.so

.PHONY : src/hal/components/scurve/CMakeFiles/scurve.dir/build

src/hal/components/scurve/CMakeFiles/scurve.dir/clean:
	cd /home/user/hal-core-2.0/build/src/hal/components/scurve && $(CMAKE_COMMAND) -P CMakeFiles/scurve.dir/cmake_clean.cmake
.PHONY : src/hal/components/scurve/CMakeFiles/scurve.dir/clean

src/hal/components/scurve/CMakeFiles/scurve.dir/depend:
	cd /home/user/hal-core-2.0/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/hal-core-2.0 /home/user/hal-core-2.0/src/hal/components/scurve /home/user/hal-core-2.0/build /home/user/hal-core-2.0/build/src/hal/components/scurve /home/user/hal-core-2.0/build/src/hal/components/scurve/CMakeFiles/scurve.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/hal/components/scurve/CMakeFiles/scurve.dir/depend
