// GGHASH:V9TDfZKHyI0Cd79SU51sXUxlZuUAymgzNI5ZGUp6mTyQ0000072f
#ifndef _GENERIC_STATFS_H
#define _GENERIC_STATFS_H 
#include <linux/types.h>
#ifndef __statfs_word
#if __BITS_PER_LONG == 64
#define __statfs_word __kernel_long_t
#else
#define __statfs_word __u32
#endif
#endif
#ifndef ARCH_PACK_STATFS64
#define ARCH_PACK_STATFS64 
#endif
#ifndef ARCH_PACK_COMPAT_STATFS64
#define ARCH_PACK_COMPAT_STATFS64 
#endif
#endif
