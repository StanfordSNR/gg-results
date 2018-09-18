// GGHASH:VQINH_TsrLCseUPgZY785OouBfdHAZuG6fplwXqPVQ_M00001993
#ifndef LZMA_H_INTERNAL
# error Never include this file directly. Use <lzma.h> instead.
#endif
#define LZMA_VLI_MAX (UINT64_MAX / 2)
#define LZMA_VLI_UNKNOWN UINT64_MAX
#define LZMA_VLI_BYTES_MAX 9
#define LZMA_VLI_C(n) UINT64_C(n)
#define lzma_vli_is_valid(vli) ((vli) <= LZMA_VLI_MAX || (vli) == LZMA_VLI_UNKNOWN)
