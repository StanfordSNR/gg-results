// GGHASH:V.6oo1gUBCliwC2tv9KXEGonunrKtz11U_FsBGjl0FOc0000565a
#ifndef LZMA_H_INTERNAL
# error Never include this file directly. Use <lzma.h> instead.
#endif
#define LZMA_BLOCK_HEADER_SIZE_MIN 8
#define LZMA_BLOCK_HEADER_SIZE_MAX 1024
#define lzma_block_header_size_decode(b) (((uint32_t)(b) + 1) * 4)
