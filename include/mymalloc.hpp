#include "memory_header.hpp"

#ifndef MYMALLOC_HEADER
#define MYMALLOC_HEADER

extern bool first_call;
extern const size_t kLargeChunkSize;
extern void* LargeChunk;

void* mymalloc(size_t size);

#endif  // MYMALLOC_HEADER
