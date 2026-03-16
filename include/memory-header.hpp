#ifndef MEMORY_HEADER_HEADER
#define MEMORY_HEADER_HEADER

#include <cstddef>

struct MemoryHeader {
  size_t size;
  bool is_free;
  MemoryHeader* next;
};

void SetMemoryHeader(MemoryHeader* memory_header, size_t size, bool is_free,
                     MemoryHeader* next);

#endif  // MEMORY_HEADER_HEADER
