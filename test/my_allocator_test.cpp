#include <gtest/gtest.h>

#include "my-memory-allocator.hpp"

TEST(MyMallocTest, BasicAllocation) {
  void* ptr = mymalloc(64);
  EXPECT_NE(ptr, nullptr);
  myfree(ptr);
}
