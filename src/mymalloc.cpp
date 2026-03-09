#include "mymalloc.hpp"

#include <errno.h>
#include <stdio.h>
#include <sys/mman.h>

bool first_call{true};
const size_t kLargeChunkSize{1024 * 1024};
void* LargeChunk{nullptr};

void* mymalloc(size_t size) {
  if (first_call) {
    LargeChunk = mmap(NULL, kLargeChunkSize, PROT_READ | PROT_WRITE,
                      MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (LargeChunk == MAP_FAILED) {
      perror("mmap");
      return nullptr;
    }
    first_call = false;
  }
}
