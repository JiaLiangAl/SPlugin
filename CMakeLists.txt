cmake_minimum_required(VERSION 2.8.0)

project(SPlugin CXX)

add_definitions(-DPLUGINCORE_EXPORTS)

add_definitions(-std=c++11)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})


add_subdirectory(source/core)
add_subdirectory(source/exemples)