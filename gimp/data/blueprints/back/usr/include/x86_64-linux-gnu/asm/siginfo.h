// GGHASH:V6hqfryWhU4fN90xFHhpxyopUyex8U0tJ5dWC56Uku.0000001ee
#ifndef _ASM_X86_SIGINFO_H
#define _ASM_X86_SIGINFO_H 
#ifdef __x86_64__
# ifdef __ILP32__
#define __ARCH_SI_CLOCK_T __kernel_si_clock_t
#define __ARCH_SI_ATTRIBUTES __attribute__((aligned(8)))
# else
#define __ARCH_SI_PREAMBLE_SIZE (4 * sizeof(int))
# endif
#endif
#include <asm-generic/siginfo.h>
#endif
