cmake_minimum_required(VERSION 3.8)
project(05_01_parity_word)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        05_primitive_types/parity_word/main.cpp)

add_executable(05_01 ${SOURCE_FILES})