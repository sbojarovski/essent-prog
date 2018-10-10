cmake_minimum_required(VERSION 3.10)
project(07_01_interconvert)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../../generic)
add_executable(07_01_interconvert main.cpp)