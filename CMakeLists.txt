cmake_minimum_required(VERSION 3.9)
project(renderer C)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})
ADD_SUBDIRECTORY(src)