#include <cstddef>

#ifndef MEMORY_HEADER_HEADER
#define MEMORY_HEADER_HEADER

struct MemoryHeader {
  size_t size;
  bool is_free;
  MemoryHeader* next;
};

#endif  // MEMORY_HEADER_HEADER
