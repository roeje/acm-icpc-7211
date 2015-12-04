cmake_minimum_required(VERSION 3.3)
project(icpc7211)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES icpc7211.cpp)
add_executable(icpc7211 ${SOURCE_FILES} icpc7211.cpp)