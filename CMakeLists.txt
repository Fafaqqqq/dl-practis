cmake_minimum_required(VERSION 3.21)

set(target root)

project(${target})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(app)
add_subdirectory(lib)
