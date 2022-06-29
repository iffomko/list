cmake_minimum_required(VERSION 3.21)
project(list)

set(CMAKE_CXX_STANDARD 14)

add_executable(list main.cpp list/list.cpp list/list.h vector/vector.cpp vector/vector.h list/node.cpp list/node.h)
