cmake_minimum_required(VERSION 3.21)

set(target mysharedlib)

project(${target})

file (GLOB_RECURSE headers
    inc/*.h
)

file(GLOB_RECURSE sources 
    src/*.h
    src/*.cpp
    src/*.c
)

set(CMAKE_CXX_STANDARD 17)

add_library(${target} SHARED ${sources})

set_target_properties(${target} PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

