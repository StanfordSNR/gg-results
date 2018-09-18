// GGHASH:VCDm9x68pEYL_mCKntkGWWfsmpJr15CZIV6ca9MyxIhM000002d9
#ifndef _BITS_SIGINFO_ARCH_H
#define _BITS_SIGINFO_ARCH_H 1
#if defined __x86_64__ && __WORDSIZE == 32
#define __SI_ALIGNMENT __attribute__ ((__aligned__ (8)))
#define __SI_CLOCK_T __sigchld_clock_t
#endif
#endif
