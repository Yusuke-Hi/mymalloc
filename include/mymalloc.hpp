#ifndef MYMALLOC_HEADER
#define MYMALLOC_HEADER

#include "memory_header.hpp"

// TODO: parameters.hなどに宣言
extern bool first_call;
extern const size_t kLargeChunkSize;
extern void* LargeChunk;
extern MemoryHeader* free_list;

void* mymalloc(size_t size);

#endif  // MYMALLOC_HEADER
