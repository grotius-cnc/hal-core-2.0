cmake_minimum_required(VERSION 3.0)
# Component name.
set(PROJECT "hal_kinematic") # The name of the file excluding .c or .h
set(RTLINK "halcore") # Link to halcore or for Lcnc use linuxcnchal
set(CPPLINK "kinematic") # Cplusplus library to link halmodule with.
project(${PROJECT} C ASM) # Asm is optional.

# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(RTAPI_DIR "${SRC_DIR}/../../../rtapi")
set(HAL_DIR "${SRC_DIR}/../../../hal")
set(LIB_DIR "${SRC_DIR}/../../../../lib")
set(RT_DIR "${SRC_DIR}/../../../../rtlib")
# If user decides to create a build dir use the path.
set(BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}")
set(CPP_DIR "${SRC_DIR}/cpp_interface")

# Set includepaths for header files etc.
include_directories(${SRC_DIR})
include_directories(${RTAPI_DIR})
include_directories(${HAL_DIR})
include_directories(${LIB_DIR})
include_directories(${CPP_DIR})

# Compile flags.
SET(GCC_COVERAGE_COMPILE_FLAGS "-I. -I${RTAPI_DIR} -I${HAL_DIR} \
    -DUSPACE -fno-fast-math -fno-unsafe-math-optimizations -DRTAPI -D_GNU_SOURCE
    -Drealtime -D__MODULE__ -DSIM -fPIC -I/opt/hal-core-2.0/build/src/hal/components/kinematic/cpp_interface -lkinematic ")
add_definitions(-DRTAPI -DUSPACE -DRTAPI -D_GNU_SOURCE -D__MODULE__ )

# No "lib" before filename.
set(CMAKE_SHARED_LIBRARY_PREFIX "")

ADD_LIBRARY(${PROJECT} SHARED
    ${SRC_DIR}/halmodule.h
    ${SRC_DIR}/halmodule.c
)

# Compile link with libhalcore.so or linuxcnchal.so
#target_include_directories(${PROJECT_NAME} PRIVATE "${BUILD_DIR}/src/hal/${RTLINK}")
#target_include_directories(${PROJECT_NAME} PRIVATE "/opt/hal-core-2.0/build/src/hal/components/kinematic/cpp_interface")
#target_link_libraries(${PROJECT_NAME} PRIVATE pthread rt ${RTLINK} kinematic)

# make install
install(TARGETS ${PROJECT} DESTINATION ${RT_DIR})
