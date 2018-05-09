cmake_minimum_required(VERSION 3.5)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 5_最长回文串.cpp 6_z字形变换.cpp 7_反转整数.cpp)
add_executable(leetcode ${SOURCE_FILES})