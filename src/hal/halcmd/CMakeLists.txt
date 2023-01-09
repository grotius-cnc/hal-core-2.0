set(PROJECT "halcmd") # The name of the file excluding .c or .h
project(${PROJECT})

set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(BIN_DIR "${SRC_DIR}/../../../bin")
set(RT_DIR "${SRC_DIR}/../../../rtlib")
# If user decides to create a build dir use the path.
set(BUILD_DIR "${CMAKE_CURRENT_BINARY_DIR}")

include_directories(${SRC_DIR}/../)
include_directories(${SRC_DIR}/../..) # config.h
include_directories(${SRC_DIR}/../../rtapi) # rtapi.h
include_directories(${SRC_DIR}/../utils)
# include_directories("/usr/include/c++/10/atomic")

add_definitions(-DULAPI)

set(SOURCES
    ${SRC_DIR}/../utils/halcmd.c
    ${SRC_DIR}/../utils/halcmd_commands.c
    ${SRC_DIR}/../utils/halcmd_main.c
    ${SRC_DIR}/../utils/halcmd_completion.c
    ${SRC_DIR}/../hal_lib.c
    ${SRC_DIR}/../../rtapi/uspace_ulapi.c
    )
add_executable(${PROJECT_NAME} ${SOURCES})

# Link with libreadline.
target_link_libraries(${PROJECT_NAME} PRIVATE -lreadline)

# make install
install(TARGETS ${PROJECT} DESTINATION ${BIN_DIR})
