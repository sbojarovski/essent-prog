cmake_minimum_required(VERSION 3.10)
project(generic)

set(CMAKE_CXX_STANDARD 11)

add_executable(generic main.cpp binary_tree.h range.h vector_io.h vector_utils.h)