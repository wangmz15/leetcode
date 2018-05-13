cmake_minimum_required(VERSION 3.5)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 5_最长回文串.cpp 6_z字形变换.cpp 7_反转整数.cpp "8_字符串转整数 (atoi).cpp" 9_回文数.cpp 10_正则表达式匹配.cpp 54_螺旋矩阵.cpp 733_图像渲染.cpp 105_从前序与中序遍历序列构造二叉树.cpp)
add_executable(leetcode ${SOURCE_FILES})