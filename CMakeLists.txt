cmake_minimum_required(VERSION 3.22)
project(my-memory-allocator CXX)

add_library(${PROJECT_NAME} 
  src/mymalloc.cpp
  src/memory_header.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)

add_subdirectory(sample)
