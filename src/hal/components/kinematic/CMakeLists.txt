cmake_minimum_required(VERSION 3.0)
# Component name.
set(PROJECT "hal_kinematic") # The name of the file excluding .c or .h
set(RT_CORE "halcore") # Link to halcore or for Lcnc use linuxcnchal
project(${PROJECT} C CXX ASM) # Asm is optional.

# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(RTAPI_DIR "${SRC_DIR}/../../../rtapi")
set(HAL_DIR "${SRC_DIR}/../../../hal")
set(LIB_DIR "${SRC_DIR}/../../../../lib")
set(RT_DIR "${SRC_DIR}/../../../../rtlib")
set(VENDOR_DIR "${SRC_DIR}/../../../vendor")
# If user decides to create a build dir use the path.
set(BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}")

# Set includepaths for header files etc.
include_directories(${SRC_DIR})
include_directories(${RTAPI_DIR})
include_directories(${HAL_DIR})
include_directories(${LIB_DIR})

# Compile flags.
SET(GCC_COVERAGE_COMPILE_FLAGS "
    -DUSPACE -fno-fast-math -fno-unsafe-math-optimizations -DRTAPI -D_GNU_SOURCE \
    -Drealtime -D__MODULE__ -DSIM -fPIC -Os pthread rt")
add_definitions(-DRTAPI -DUSPACE -DRTAPI -D_GNU_SOURCE -D__MODULE__ )

include_directories("/usr/include/eigen3")
find_package (Eigen3 3.3 REQUIRED)

include_directories("${VENDOR_DIR}/orocos_kinematics_dynamics/orocos_kdl/src")
add_library(kdl SHARED IMPORTED)
set_target_properties(kdl PROPERTIES IMPORTED_LOCATION ${VENDOR_DIR}/orocos_kinematics_dynamics/orocos_kdl/build/src/liborocos-kdl.so)

# No "lib" before filename.
set(CMAKE_SHARED_LIBRARY_PREFIX "")

ADD_LIBRARY(${PROJECT} SHARED
    ${SRC_DIR}/halmodule.h
    ${SRC_DIR}/halmodule.c
    ${SRC_DIR}/cpp_interface/cpp_interface.h
    ${SRC_DIR}/cpp_interface/cpp_interface.cpp
    )

# Link to other libraries
target_include_directories(${PROJECT_NAME} PRIVATE "${SRC_DIR}/build/src/hal/${RT_CORE}")
target_link_libraries(${PROJECT_NAME} PRIVATE pthread rt ${RT_CORE} orocos-kdl)

# make install
install(TARGETS ${PROJECT} DESTINATION ${RT_DIR})

