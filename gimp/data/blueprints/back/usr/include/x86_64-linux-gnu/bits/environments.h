// GGHASH:VfE_hZQqdTfJ1Arg8_0KKz7c2XhMdt5owZ04JMu4WWsY00000ece
#ifndef _UNISTD_H
# error "Never include this file directly.  Use <unistd.h> instead"
#endif
#include <bits/wordsize.h>
#if __WORDSIZE == 64
#define _POSIX_V7_LPBIG_OFFBIG -1
#define _POSIX_V6_LPBIG_OFFBIG -1
#define _XBS5_LPBIG_OFFBIG -1
#define _POSIX_V7_LP64_OFF64 1
#define _POSIX_V6_LP64_OFF64 1
#define _XBS5_LP64_OFF64 1
#else
#define _POSIX_V7_ILP32_OFFBIG 1
#define _POSIX_V6_ILP32_OFFBIG 1
#define _XBS5_ILP32_OFFBIG 1
# ifndef __x86_64__
#define _POSIX_V7_ILP32_OFF32 1
#define _POSIX_V6_ILP32_OFF32 1
#define _XBS5_ILP32_OFF32 1
# endif
#endif
#define __ILP32_OFF32_CFLAGS "-m32"
#define __ILP32_OFF32_LDFLAGS "-m32"
#if defined __x86_64__ && defined __ILP32__
#define __ILP32_OFFBIG_CFLAGS "-mx32"
#define __ILP32_OFFBIG_LDFLAGS "-mx32"
#else
#define __ILP32_OFFBIG_CFLAGS "-m32 -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64"
#define __ILP32_OFFBIG_LDFLAGS "-m32"
#endif
#define __LP64_OFF64_CFLAGS "-m64"
#define __LP64_OFF64_LDFLAGS "-m64"
