// GGHASH:V6RuKF1yrvjubHKnMLqs1iNEiwV7rK4aAshzqeFBS9Zc000001f6
#ifndef _ASM_GENERIC_SWAB_H
#define _ASM_GENERIC_SWAB_H 
#include <asm/bitsperlong.h>
#if __BITS_PER_LONG == 32
#if defined(__GNUC__) && !defined(__STRICT_ANSI__) || defined(__KERNEL__)
#define __SWAB_64_THRU_32__ 
#endif
#endif
#endif
