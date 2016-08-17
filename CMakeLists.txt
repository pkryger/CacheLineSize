cmake_minimum_required(VERSION 3.1.0)

project(CacheLineSize)

add_library(CacheLineSize CacheLineSize.c)
add_executable(CMakeHelper CMakeHelper.c)
target_link_libraries(CMakeHelper CacheLineSize)
