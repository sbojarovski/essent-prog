cmake_minimum_required(VERSION 3.10)
project(06_01_dutch_flag)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../../generic)
add_executable(06_01_dutch_flag main.cpp count_sort.h)