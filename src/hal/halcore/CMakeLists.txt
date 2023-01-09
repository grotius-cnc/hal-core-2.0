set(PROJECT "halcore") # The name of the file excluding .c or .h
project(${PROJECT} CXX)

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(BIN_DIR "${SRC_DIR}/../../../bin")
set(LIB_DIR "${SRC_DIR}/../../../lib")
# If user decides to create a build dir use the path.
set(BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}")

include_directories(${SRC_DIR}/../)
include_directories(${SRC_DIR}/../..) # config.h
include_directories(${SRC_DIR}/../../rtapi) # rtapi.h
include_directories(${SRC_DIR}/../utils)
#include_directories("/usr/include/c++/10/atomic")

# For no lib prefix.
# set(CMAKE_SHARED_LIBRARY_PREFIX "")
add_definitions(-DULAPI)
ADD_LIBRARY(${PROJECT} SHARED
    ${SRC_DIR}/../utils/halcmd.c
    ${SRC_DIR}/../utils/halcmd_commands.c
    ${SRC_DIR}/../utils/halcmd_main.c
    ${SRC_DIR}/../utils/halcmd_completion.c
    ${SRC_DIR}/../hal_lib.c
    ${SRC_DIR}/../../rtapi/uspace_ulapi.c
)
target_link_libraries(${PROJECT_NAME} PRIVATE -lreadline -pthread -lrt)

# make install
install(TARGETS ${PROJECT} DESTINATION ${LIB_DIR})
