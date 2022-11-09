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
CMAKE_SOURCE_DIR = /opt/hal-core-2.0/src/hal/components/kinematic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/hal-core-2.0/src/hal/components/kinematic/build

# Include any dependencies generated for this target.
include CMakeFiles/hal_kinematic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hal_kinematic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hal_kinematic.dir/flags.make

CMakeFiles/hal_kinematic.dir/halmodule.c.o: CMakeFiles/hal_kinematic.dir/flags.make
CMakeFiles/hal_kinematic.dir/halmodule.c.o: ../halmodule.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/hal-core-2.0/src/hal/components/kinematic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/hal_kinematic.dir/halmodule.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/hal_kinematic.dir/halmodule.c.o -c /opt/hal-core-2.0/src/hal/components/kinematic/halmodule.c

CMakeFiles/hal_kinematic.dir/halmodule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/hal_kinematic.dir/halmodule.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/hal-core-2.0/src/hal/components/kinematic/halmodule.c > CMakeFiles/hal_kinematic.dir/halmodule.c.i

CMakeFiles/hal_kinematic.dir/halmodule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/hal_kinematic.dir/halmodule.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/hal-core-2.0/src/hal/components/kinematic/halmodule.c -o CMakeFiles/hal_kinematic.dir/halmodule.c.s

# Object files for target hal_kinematic
hal_kinematic_OBJECTS = \
"CMakeFiles/hal_kinematic.dir/halmodule.c.o"

# External object files for target hal_kinematic
hal_kinematic_EXTERNAL_OBJECTS =

hal_kinematic.so: CMakeFiles/hal_kinematic.dir/halmodule.c.o
hal_kinematic.so: CMakeFiles/hal_kinematic.dir/build.make
hal_kinematic.so: CMakeFiles/hal_kinematic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/hal-core-2.0/src/hal/components/kinematic/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library hal_kinematic.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hal_kinematic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hal_kinematic.dir/build: hal_kinematic.so

.PHONY : CMakeFiles/hal_kinematic.dir/build

CMakeFiles/hal_kinematic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hal_kinematic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hal_kinematic.dir/clean

CMakeFiles/hal_kinematic.dir/depend:
	cd /opt/hal-core-2.0/src/hal/components/kinematic/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/hal-core-2.0/src/hal/components/kinematic /opt/hal-core-2.0/src/hal/components/kinematic /opt/hal-core-2.0/src/hal/components/kinematic/build /opt/hal-core-2.0/src/hal/components/kinematic/build /opt/hal-core-2.0/src/hal/components/kinematic/build/CMakeFiles/hal_kinematic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hal_kinematic.dir/depend
