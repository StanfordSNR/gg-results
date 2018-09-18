// GGHASH:VlyK3cMW9BfcB_Xexlc2yfALQ7v_BOxCyjmMSCTVVxpk00003997
#ifndef LZMA_H_INTERNAL
# error Never include this file directly. Use <lzma.h> instead.
#endif
#define LZMA_FILTER_LZMA1 LZMA_VLI_C(0x4000000000000001)
#define LZMA_FILTER_LZMA2 LZMA_VLI_C(0x21)
#define LZMA_DICT_SIZE_MIN UINT32_C(4096)
#define LZMA_DICT_SIZE_DEFAULT (UINT32_C(1) << 23)
#define LZMA_LCLP_MIN 0
#define LZMA_LCLP_MAX 4
#define LZMA_LC_DEFAULT 3
#define LZMA_LP_DEFAULT 0
#define LZMA_PB_MIN 0
#define LZMA_PB_MAX 4
#define LZMA_PB_DEFAULT 2
