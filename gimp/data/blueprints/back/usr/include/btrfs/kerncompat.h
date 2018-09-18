// GGHASH:Vod.pbzkICJs8kS73DIUnL7Wiva309J1uE6BoBFlevlU000028b3
#ifndef __KERNCOMPAT_H__
#define __KERNCOMPAT_H__ 
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <endian.h>
#include <byteswap.h>
#include <assert.h>
#include <stddef.h>
#include <linux/types.h>
#include <stdint.h>
#include <features.h>
#ifndef __GLIBC__
#ifndef BTRFS_DISABLE_BACKTRACE
#define BTRFS_DISABLE_BACKTRACE 
#endif
#define __always_inline __inline __attribute__ ((__always_inline__))
#endif
#ifndef BTRFS_DISABLE_BACKTRACE
#include <execinfo.h>
#endif
#define ptr_to_u64(x) ((u64)(uintptr_t)x)
#define u64_to_ptr(x) ((void *)(uintptr_t)x)
#ifndef READ
#define READ 0
#define WRITE 1
#define READA 2
#endif
#define gfp_t int
#define get_cpu_var(p) (p)
#define __get_cpu_var(p) (p)
#define BITS_PER_BYTE 8
#define BITS_PER_LONG (__SIZEOF_LONG__ * BITS_PER_BYTE)
#define __GFP_BITS_SHIFT 20
#define __GFP_BITS_MASK ((int)((1 << __GFP_BITS_SHIFT) - 1))
#define GFP_KERNEL 0
#define GFP_NOFS 0
#define __read_mostly 
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
#ifndef ULONG_MAX
#define ULONG_MAX (~0UL)
#endif
#define __token_glue(a,b,c) ___token_glue(a,b,c)
#define ___token_glue(a,b,c) a ## b ## c
#ifdef DEBUG_BUILD_CHECKS
#define BUILD_ASSERT(x) extern int __token_glue(compile_time_assert_,__LINE__,__COUNTER__)[1-2*!(x)] __attribute__((unused))
#else
#define BUILD_ASSERT(x) 
#endif
#ifndef BTRFS_DISABLE_BACKTRACE
#define MAX_BACKTRACE 16
#endif
#ifndef BTRFS_DISABLE_BACKTRACE
#endif
#ifndef BTRFS_DISABLE_BACKTRACE
#endif
#ifdef __CHECKER__
#define __force __attribute__((force))
#define __bitwise__ __attribute__((bitwise))
#else
#define __force 
#define __bitwise__ 
#endif
#ifndef __CHECKER__
#define __KERNEL__ 
#include <asm/types.h>
#undef __KERNEL__
#else
#endif
#define mutex_init(m) do { (m)->lock = 1; } while (0)
#define cond_resched() do { } while (0)
#define preempt_enable() do { } while (0)
#define preempt_disable() do { } while (0)
#define BITOP_MASK(nr) (1UL << ((nr) % BITS_PER_LONG))
#define BITOP_WORD(nr) ((nr) / BITS_PER_LONG)
#ifndef __attribute_const__
#define __attribute_const__ __attribute__((__const__))
#endif
#define MAX_ERRNO 4095
#define IS_ERR_VALUE(x) ((x) >= (unsigned long)-MAX_ERRNO)
#define __round_mask(x,y) ((__typeof__(x))((y)-1))
#define round_up(x,y) ((((x)-1) | __round_mask(x, y))+1)
#define round_down(x,y) ((x) & ~__round_mask(x, y))
#define printk(fmt,args...) fprintf(stderr, fmt, ##args)
#define KERN_CRIT ""
#define KERN_ERR ""
#define kmalloc(x,y) malloc(x)
#define kzalloc(x,y) calloc(1, x)
#define kstrdup(x,y) strdup(x)
#define kfree(x) free(x)
#define vmalloc(x) malloc(x)
#define vfree(x) free(x)
#ifndef BTRFS_DISABLE_BACKTRACE
#ifndef BTRFS_DISABLE_BACKTRACE
#endif
#define ASSERT(c) assert_trace(#c, __FILE__, __func__, __LINE__, (long)(c))
#else
#define ASSERT(c) assert(c)
#endif
#define BUG_ON(c) bugon_trace(#c, __FILE__, __func__, __LINE__, (long)(c))
#define BUG() BUG_ON(1)
#define WARN_ON(c) warning_trace(#c, __FILE__, __func__, __LINE__, (long)(c))
#define container_of(ptr,type,member) ({ const typeof( ((type *)0)->member ) *__mptr = (ptr); (type *)( (char *)__mptr - offsetof(type,member) );})
#ifndef __bitwise
#ifdef __CHECKER__
#define __bitwise __bitwise__
#else
#define __bitwise 
#endif
#endif
#define IS_ALIGNED(x,a) (((x) & ((typeof(x))(a) - 1)) == 0)
#define le8_to_cpu(v) (v)
#define cpu_to_le8(v) (v)
#define __le8 u8
#if __BYTE_ORDER == __BIG_ENDIAN
#define cpu_to_le64(x) ((__force __le64)(u64)(bswap_64(x)))
#define le64_to_cpu(x) ((__force u64)(__le64)(bswap_64(x)))
#define cpu_to_le32(x) ((__force __le32)(u32)(bswap_32(x)))
#define le32_to_cpu(x) ((__force u32)(__le32)(bswap_32(x)))
#define cpu_to_le16(x) ((__force __le16)(u16)(bswap_16(x)))
#define le16_to_cpu(x) ((__force u16)(__le16)(bswap_16(x)))
#else
#define cpu_to_le64(x) ((__force __le64)(u64)(x))
#define le64_to_cpu(x) ((__force u64)(__le64)(x))
#define cpu_to_le32(x) ((__force __le32)(u32)(x))
#define le32_to_cpu(x) ((__force u32)(__le32)(x))
#define cpu_to_le16(x) ((__force __le16)(u16)(x))
#define le16_to_cpu(x) ((__force u16)(__le16)(x))
#endif
#define get_unaligned_le8(p) (*((u8 *)(p)))
#define get_unaligned_8(p) (*((u8 *)(p)))
#define put_unaligned_le8(val,p) ((*((u8 *)(p))) = (val))
#define put_unaligned_8(val,p) ((*((u8 *)(p))) = (val))
#define get_unaligned_le16(p) le16_to_cpu(((const struct __una_u16 *)(p))->x)
#define get_unaligned_16(p) (((const struct __una_u16 *)(p))->x)
#define put_unaligned_le16(val,p) (((struct __una_u16 *)(p))->x = cpu_to_le16(val))
#define put_unaligned_16(val,p) (((struct __una_u16 *)(p))->x = (val))
#define get_unaligned_le32(p) le32_to_cpu(((const struct __una_u32 *)(p))->x)
#define get_unaligned_32(p) (((const struct __una_u32 *)(p))->x)
#define put_unaligned_le32(val,p) (((struct __una_u32 *)(p))->x = cpu_to_le32(val))
#define put_unaligned_32(val,p) (((struct __una_u32 *)(p))->x = (val))
#define get_unaligned_le64(p) le64_to_cpu(((const struct __una_u64 *)(p))->x)
#define get_unaligned_64(p) (((const struct __una_u64 *)(p))->x)
#define put_unaligned_le64(val,p) (((struct __una_u64 *)(p))->x = cpu_to_le64(val))
#define put_unaligned_64(val,p) (((struct __una_u64 *)(p))->x = (val))
#ifndef true
#define true 1
#define false 0
#endif
#ifndef noinline
#define noinline 
#endif
#endif
