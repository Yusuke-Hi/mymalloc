#include "my-memory-allocator.hpp"

void myfree(void* payload) {
  MemoryHeader* memory_header = reinterpret_cast<MemoryHeader*>(
      static_cast<char*>(payload) - sizeof(MemoryHeader));
  memory_header->is_free = true;
}
