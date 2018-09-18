// GGHASH:V11xL06r1fV5ShTLfP2VpikT.j4MpdUac76aCTCs1glw0000059e
#ifndef _LINUX_TYPES_H
#define _LINUX_TYPES_H 
#include <asm/types.h>
#ifndef __ASSEMBLY__
#include <linux/posix_types.h>
#ifdef __CHECKER__
#define __bitwise__ __attribute__((bitwise))
#else
#define __bitwise__ 
#endif
#define __bitwise __bitwise__
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#endif
#endif
