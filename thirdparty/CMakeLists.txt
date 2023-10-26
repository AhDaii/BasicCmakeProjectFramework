# CMake 最低版本要求
cmake_minimum_required(VERSION 3.12)

# 设置 Google Test 的源代码路径
set(GTEST_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/googletest)

# 添加 Google Test 子目录
add_subdirectory(${GTEST_SOURCE_DIR})

# 添加 Google Test 的头文件路径
include_directories(${GTEST_SOURCE_DIR}/include)

# 将 Google Test 库设置为全局变量，以便其他目标可以使用
set_property(GLOBAL PROPERTY GTEST_LIBRARIES gtest gtest_main)
