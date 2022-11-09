cmake_minimum_required(VERSION 2.6)
# Library name.
set(PROJECT "kinematic")
project(${PROJECT} CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(RT_DIR "${SRC_DIR}/../../../../../rtlib")

include_directories("/opt/hal-core-2.0/src/vendor/orocos_kinematics_dynamics/orocos_kdl/src")
include_directories("/usr/include/eigen3")
find_package (orocos_kdl 1.4.0 REQUIRED)
find_package (Eigen3 3.3 REQUIRED)

ADD_LIBRARY(kinematics SHARED
    ${SRC_DIR}/next.h
    ${SRC_DIR}/next.cpp
)
#target_include_directories(${PROJECT_NAME} PRIVATE "${VENDOR_DIR}/orocos_kinematics_dynamics/orocos_kdl/build/src")
#target_link_libraries(${PROJECT_NAME} PRIVATE orocos-kdl)

# make install
#install(TARGETS ${PROJECT} DESTINATION ${RT_DIR})
