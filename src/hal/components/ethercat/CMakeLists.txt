cmake_minimum_required(VERSION 3.0)
# Component name.
set(PROJECT "lcec") # The name of the file excluding .c or .h
set(RT_CORE "halcore") # Link to halcore or for Lcnc use linuxcnchal
project(${PROJECT} C CXX ASM) # Asm is optional.

# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(RTAPI_DIR "${SRC_DIR}/../../../rtapi")
set(HAL_DIR "${SRC_DIR}/../../../hal")
set(LIB_DIR "${SRC_DIR}/../../../../lib")
set(RT_DIR "${SRC_DIR}/../../../../rtlib")
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

# No "lib" before filename.
set(CMAKE_SHARED_LIBRARY_PREFIX "")

ADD_LIBRARY(${PROJECT} SHARED
    ${SRC_DIR}/src/lcec_main.c
    ${SRC_DIR}/src/lcec_class_enc.c
    ${SRC_DIR}/src/lcec_generic.c
    ${SRC_DIR}/src/lcec_ax5200.c
    ${SRC_DIR}/src/lcec_el1xxx.c
    ${SRC_DIR}/src/lcec_el1252.c
    ${SRC_DIR}/src/lcec_el1859.c
    ${SRC_DIR}/src/lcec_el2xxx.c
    ${SRC_DIR}/src/lcec_el2202.c
    ${SRC_DIR}/src/lcec_el31x2.c
    ${SRC_DIR}/src/lcec_el31x4.c
    ${SRC_DIR}/src/lcec_el3255.c
    ${SRC_DIR}/src/lcec_el40x1.c
    ${SRC_DIR}/src/lcec_el40x2.c
    ${SRC_DIR}/src/lcec_el40x8.c
    ${SRC_DIR}/src/lcec_el41x2.c
    ${SRC_DIR}/src/lcec_el41x4.c
    ${SRC_DIR}/src/lcec_el5101.c
    ${SRC_DIR}/src/lcec_el5151.c
    ${SRC_DIR}/src/lcec_el5152.c
    ${SRC_DIR}/src/lcec_el2521.c
    ${SRC_DIR}/src/lcec_el6900.c
    ${SRC_DIR}/src/lcec_el1918_logic.c
    ${SRC_DIR}/src/lcec_el1904.c
    ${SRC_DIR}/src/lcec_el2904.c
    ${SRC_DIR}/src/lcec_el7041_1000.c
    ${SRC_DIR}/src/lcec_el70x1.c
    ${SRC_DIR}/src/lcec_el7211.c
    ${SRC_DIR}/src/lcec_el7342.c
    ${SRC_DIR}/src/lcec_el7411.c
    ${SRC_DIR}/src/lcec_el95xx.c
    ${SRC_DIR}/src/lcec_em7004.c
    ${SRC_DIR}/src/lcec_stmds5k.c
    ${SRC_DIR}/src/lcec_deasda.c
    ${SRC_DIR}/src/lcec_omrg5.c
    ${SRC_DIR}/src/lcec_ph3lm2rm.c
    )

# Link to other libraries
target_include_directories(${PROJECT_NAME} PRIVATE "${SRC_DIR}/build/src/hal/${RT_CORE}")
target_link_libraries(${PROJECT_NAME} PRIVATE pthread rt ${RT_CORE})

# make install
install(TARGETS ${PROJECT} DESTINATION ${RT_DIR})

# Component name.
set(PROJECT "lcec_conf") # The name of the file excluding .c or .h
set(RT_CORE "halcore") # Link to halcore or for Lcnc use linuxcnchal
project(${PROJECT} C CXX ASM) # Asm is optional.

# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(RTAPI_DIR "${SRC_DIR}/../../../rtapi")
set(HAL_DIR "${SRC_DIR}/../../../hal")
set(LIB_DIR "${SRC_DIR}/../../../../lib")
set(RT_DIR "${SRC_DIR}/../../../../rtlib")
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

# No "lib" before filename.
set(CMAKE_SHARED_LIBRARY_PREFIX "")

ADD_LIBRARY(${PROJECT} SHARED
    ${SRC_DIR}/src/lcec_conf.c
    ${SRC_DIR}/src/lcec_conf_util.c
    ${SRC_DIR}/src/lcec_conf_icmds.c
    )

# Link to other libraries
target_include_directories(${PROJECT_NAME} PRIVATE "${SRC_DIR}/build/src/hal/${RT_CORE}")
target_link_libraries(${PROJECT_NAME} PRIVATE pthread rt ${RT_CORE} expat)

# make install
install(TARGETS ${PROJECT} DESTINATION ${RT_DIR})

