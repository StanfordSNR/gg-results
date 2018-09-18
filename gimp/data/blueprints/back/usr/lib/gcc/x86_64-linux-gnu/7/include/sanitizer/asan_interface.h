// GGHASH:V1VxxD0Uvoa1P3isV_kZjwz_KPhhI2tK6_zfweajm3Cw00001b6e
#ifndef SANITIZER_ASAN_INTERFACE_H
#define SANITIZER_ASAN_INTERFACE_H 
#include <sanitizer/common_interface_defs.h>
#ifdef __cplusplus
#endif
#if __has_feature(address_sanitizer) || defined(__SANITIZE_ADDRESS__)
#define ASAN_POISON_MEMORY_REGION(addr,size) __asan_poison_memory_region((addr), (size))
#define ASAN_UNPOISON_MEMORY_REGION(addr,size) __asan_unpoison_memory_region((addr), (size))
#else
#define ASAN_POISON_MEMORY_REGION(addr,size) ((void)(addr), (void)(size))
#define ASAN_UNPOISON_MEMORY_REGION(addr,size) ((void)(addr), (void)(size))
#endif
#ifdef __cplusplus
#endif
#endif
