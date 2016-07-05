cmake_minimum_required(VERSION 3.3)
project(libipmi)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

include_directories(include)
add_subdirectory(src)
add_subdirectory(test)

set(SOURCE_FILES main.cpp)

add_library(ipmi ${SOURCE_FILES} $<TARGET_OBJECTS:commands>)