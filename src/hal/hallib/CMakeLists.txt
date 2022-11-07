cmake_minimum_required(VERSION 3.0)
# Component name.
set(PROJECT "hal_lib") # The name of the file excluding .c or .h
project(${PROJECT} C ASM) # Asm is optional.

# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(RTAPI_DIR "${SRC_DIR}/../../rtapi")
set(HAL_DIR "${SRC_DIR}/../")
set(LIB_DIR "${SRC_DIR}/../../../lib")
set(BIN_DIR "${SRC_DIR}/../../../bin")
set(RT_DIR "${SRC_DIR}/../../../rtlib")
# If user decides to create a build dir use the path.
set(BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}")

# Set includepaths for header files etc.
include_directories(${SRC_DIR})
include_directories(${RTAPI_DIR})
include_directories(${HAL_DIR})
include_directories(${LIB_DIR})

# Compile with cmake.
set(CMAKE_SHARED_LIBRARY_PREFIX "")
add_definitions(-DRTAPI)
ADD_LIBRARY(${PROJECT} SHARED
    ${SRC_DIR}/../hal_lib.c
)

# make install
install(TARGETS ${PROJECT} DESTINATION ${RT_DIR})
