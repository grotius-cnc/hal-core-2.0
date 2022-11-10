# Note:
# The hal components linked to c++ shared libraries
# like Opencascade, Ruckig motion, Kdl-kinematics, etc.
# are not included in this build. To include them takes some addition time,
# where a nice github clone recursive setup has to be made first.

# To build :
#   mkdir build
#   cd build
#   cmake ..
#   make
#   make install

# Possible error when loading a rtlib, cannot load shared library, library not found.
# Do a ldconfig to update where your ~/lib directory can be found. Example:
#   sudo ldconfig /opt/hal-core/lib

cmake_minimum_required(VERSION 3.5)
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}")

project(Skynet LANGUAGES C)

# Compile halcore.so
add_subdirectory(src/hal/halcore)

# Conpile module_helper
add_subdirectory(src/module_helper)

# Conpile halcommand, halcmd
add_subdirectory(src/hal/halcmd)

# Conpile hal_lib.so
add_subdirectory(src/hal/hallib)

# Conpile rtapi
add_subdirectory(src/rtapi/)

# Compile rt hal modules.
add_subdirectory(src/hal/components/parport)
add_subdirectory(src/hal/components/stepgen)
add_subdirectory(src/hal/components/test)
add_subdirectory(src/hal/components/threads)
add_subdirectory(src/hal/components/hostmot2)

# Ethercat lcec driver.
add_subdirectory(src/hal/components/ethercat)

# Mesa hardware driver.
add_subdirectory(src/hal/components/hm2_eth)

# C & C++ mixed modules.
add_subdirectory(src/hal/components/dofs)
add_subdirectory(src/hal/components/kinematic)
add_subdirectory(src/hal/components/synchrodofs)

# Install the ethercat bus (optional for hal-core)
# wget https://github.com/grotius-cnc/Linux-Pro/releases/download/1.0.0/ethercat-master.deb
# dpkg -i ethercat-master.deb

add_subdirectory(src/hal/components/opencascade)
add_subdirectory(src/hal/components/opencascade/cpp_interface)

# Configure. This creates a config.h file in the ~/src dir wich is used to compile fixed
# filepath's into the source. Wich an sich is a bad idea. This results in a fixed
# directory software.
# execute_process(COMMAND bash -c "${SRC_DIR}/configure")


























