cmake_minimum_required(VERSION 2.6)
# Library name.
set(PROJECT "ruckig")
project(${PROJECT} CXX)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
# Set variables.
set(SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
set(RT_DIR "${SRC_DIR}/../../../../../rtlib")
  #find_package(Qt5Default)

include_directories(libruckig)

ADD_LIBRARY(${PROJECT} SHARED
    ${SRC_DIR}/cpp_interface.h
    ${SRC_DIR}/cpp_interface.cpp
    ${SRC_DIR}/libruckig/brake.hpp
    ${SRC_DIR}/libruckig/brake.cpp
    ${SRC_DIR}/libruckig/position-step1.cpp
    ${SRC_DIR}/libruckig/position-step2.cpp
    ${SRC_DIR}/libruckig/velocity-step1.cpp
    ${SRC_DIR}/libruckig/velocity-step2.cpp
)

# make install
install(TARGETS ${PROJECT} DESTINATION ${RT_DIR})
