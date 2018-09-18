// GGHASH:VjItmq2KgntQuh5PILtv0oYukNiiR8e2RAmkz4abIzt800000a49
#ifndef __ASM_GENERIC_STAT_H
#define __ASM_GENERIC_STAT_H 
#include <asm/bitsperlong.h>
#define STAT_HAVE_NSEC 1
#if __BITS_PER_LONG != 64 || defined(__ARCH_WANT_STAT64)
#endif
#endif
