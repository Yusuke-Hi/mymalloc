#include "my-memory-allocator.hpp"

void myfree(void* payload) {
  MemoryHeader* memory_header = GetMemoryHeader(payload);
  memory_header->is_free = true;
}
