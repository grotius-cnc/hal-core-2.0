cmake_minimum_required(VERSION 3.0)
# Component name.
set(PROJECT "rtapi_app") # The name of the file excluding .c or .h
project(${PROJECT} CXX)

# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(HAL_DIR "${SRC_DIR}/../hal")
set(LIB_DIR "${SRC_DIR}/../../lib")
set(RT_DIR "${SRC_DIR}/../../rtlib")
set(BIN_DIR "${SRC_DIR}/../../bin")
set(CONFIG_DIR "${SRC_DIR}/../")
# If user decides to create a build dir use the path.
set(BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}")

# Set includepaths for header files etc.
include_directories(${SRC_DIR})
include_directories(${HAL_DIR})
include_directories(${LIB_DIR})
include_directories(${CONFIG_DIR})

SET(GCC_COVERAGE_COMPILE_FLAGS "-DSIM -UULAPI -DRTAPI -pthread")
SET(GCC_COVERAGE_LINK_FLAGS    "-DSIM -UULAPI -DRTAPI -pthread")

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

add_definitions(-DRTAPI)
set(SOURCES
    #"${SRC_DIR}/../module_helper/module_helper.c"
    "${SRC_DIR}/uspace_rtapi_app.cc"
    "${SRC_DIR}/uspace_rtapi_parport.cc"
    "${SRC_DIR}/uspace_rtapi_string.c"
    "${SRC_DIR}/rtapi_pci.cc"
    )
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE -pthread -lrt -ludev -ldl)

# make install
install(TARGETS ${PROJECT} DESTINATION ${BIN_DIR})

