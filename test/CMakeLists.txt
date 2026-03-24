cmake_minimum_required(VERSION 3.22)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(my_allocator_test
  my_allocator_test.cpp
)

target_link_libraries(my_allocator_test
  PRIVATE
  my-memory-allocator
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(my_allocator_test)
