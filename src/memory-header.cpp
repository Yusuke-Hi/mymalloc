#include "memory-header.hpp"

void SetMemoryHeader(MemoryHeader* memory_header, size_t size, bool is_free,
                     MemoryHeader* next) {
  memory_header->size = size;
  memory_header->is_free = is_free;
  memory_header->next = next;
}
