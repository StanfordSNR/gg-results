// GGHASH:VQfL96GmlXF2gyNSDSKqQzxFKT3Z2.S4zht0ACUmsmro00005dc0
#ifndef LZMA_H_INTERNAL
# error Never include this file directly. Use <lzma.h> instead.
#endif
#define LZMA_PRESET_DEFAULT UINT32_C(6)
#define LZMA_PRESET_LEVEL_MASK UINT32_C(0x1F)
#define LZMA_PRESET_EXTREME (UINT32_C(1) << 31)
#define LZMA_TELL_NO_CHECK UINT32_C(0x01)
#define LZMA_TELL_UNSUPPORTED_CHECK UINT32_C(0x02)
#define LZMA_TELL_ANY_CHECK UINT32_C(0x04)
#define LZMA_IGNORE_CHECK UINT32_C(0x10)
#define LZMA_CONCATENATED UINT32_C(0x08)