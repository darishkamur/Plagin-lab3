cmake_minimum_required(VERSION 3.10)
project(triangle_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(triangle_project
    src/main.cpp
    src/triangle.cpp
)

add_executable(triangle_tests
    tests/triangle_test.cpp
    src/triangle.cpp
)
