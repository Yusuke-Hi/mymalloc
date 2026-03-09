cmake_minimum_required(VERSION 3.22)
project(mymalloc_sample)

add_executable(${PROJECT_NAME}
  main.cpp
)

target_link_libraries(${PROJECT_NAME} 
  mymalloc
)
