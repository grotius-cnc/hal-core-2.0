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
add_subdirectory(src/hal/components/motion)
add_subdirectory(src/hal/components/scurve)

# Ethercat lcec driver.
add_subdirectory(src/hal/components/ethercat)

# Mesa hardware driver.
add_subdirectory(src/hal/components/hm2_eth)

# C & C++ mixed modules.
add_subdirectory(src/hal/components/dofs)
add_subdirectory(src/hal/components/synchrodofs)

# Kdl kinematic needs orocos-kdl & eigen3.
add_subdirectory(src/hal/components/kinematic)

# Opencascade, kinematic, qt-creator example.
# Needs orocos-kdl, opencascade, qt-creator. Edit qt filepaths in the makefile.
add_subdirectory(src/hal/components/opencascade/cpp_interface)

























