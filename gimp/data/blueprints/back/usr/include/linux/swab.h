// GGHASH:VkYyi05PboV3TVhlCjUywcfGhfSU2PzSrN9zVF_ytXMY00001a37
#ifndef _LINUX_SWAB_H
#define _LINUX_SWAB_H 
#include <linux/types.h>
#include <asm/swab.h>
#define ___constant_swab16(x) ((__u16)( (((__u16)(x) & (__u16)0x00ffU) << 8) | (((__u16)(x) & (__u16)0xff00U) >> 8)))
#define ___constant_swab32(x) ((__u32)( (((__u32)(x) & (__u32)0x000000ffUL) << 24) | (((__u32)(x) & (__u32)0x0000ff00UL) << 8) | (((__u32)(x) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(x) & (__u32)0xff000000UL) >> 24)))
#define ___constant_swab64(x) ((__u64)( (((__u64)(x) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(x) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(x) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(x) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(x) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(x) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(x) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(x) & (__u64)0xff00000000000000ULL) >> 56)))
#define ___constant_swahw32(x) ((__u32)( (((__u32)(x) & (__u32)0x0000ffffUL) << 16) | (((__u32)(x) & (__u32)0xffff0000UL) >> 16)))
#define ___constant_swahb32(x) ((__u32)( (((__u32)(x) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(x) & (__u32)0xff00ff00UL) >> 8)))
#if defined (__arch_swab16)
#else
#endif
#if defined(__arch_swab32)
#else
#endif
#if defined (__arch_swab64)
#elif defined(__SWAB_64_THRU_32__)
#else
#endif
#ifdef __arch_swahw32
#else
#endif
#ifdef __arch_swahb32
#else
#endif
#ifdef __HAVE_BUILTIN_BSWAP16__
#define __swab16(x) (__u16)__builtin_bswap16((__u16)(x))
#else
#define __swab16(x) (__builtin_constant_p((__u16)(x)) ? ___constant_swab16(x) : __fswab16(x))
#endif
#ifdef __HAVE_BUILTIN_BSWAP32__
#define __swab32(x) (__u32)__builtin_bswap32((__u32)(x))
#else
#define __swab32(x) (__builtin_constant_p((__u32)(x)) ? ___constant_swab32(x) : __fswab32(x))
#endif
#ifdef __HAVE_BUILTIN_BSWAP64__
#define __swab64(x) (__u64)__builtin_bswap64((__u64)(x))
#else
#define __swab64(x) (__builtin_constant_p((__u64)(x)) ? ___constant_swab64(x) : __fswab64(x))
#endif
#define __swahw32(x) (__builtin_constant_p((__u32)(x)) ? ___constant_swahw32(x) : __fswahw32(x))
#define __swahb32(x) (__builtin_constant_p((__u32)(x)) ? ___constant_swahb32(x) : __fswahb32(x))
#ifdef __arch_swab16p
#else
#endif
#ifdef __arch_swab32p
#else
#endif
#ifdef __arch_swab64p
#else
#endif
#ifdef __arch_swahw32p
#else
#endif
#ifdef __arch_swahb32p
#else
#endif
#ifdef __arch_swab16s
#else
#endif
#ifdef __arch_swab32s
#else
#endif
#ifdef __arch_swab64s
#else
#endif
#ifdef __arch_swahw32s
#else
#endif
#ifdef __arch_swahb32s
#else
#endif
#endif
