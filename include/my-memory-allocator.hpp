#ifndef MY_MEMORY_ALLOCATOR_HEADER
#define MY_MEMORY_ALLOCATOR_HEADER

#include "memory-header.hpp"

extern bool first_call;
extern const size_t kLargeChunkSize;
extern void* LargeChunk;
extern MemoryHeader* free_list;

void* mymalloc(size_t size);
void myfree(void* payload);

#endif  // MY_MEMORY_ALLOCATOR_HEADER
