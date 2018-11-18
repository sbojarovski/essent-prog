cmake_minimum_required(VERSION 3.12)
project(06_06_stock_once)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/../../generic)

add_executable(06_06_stock_once main.cpp)