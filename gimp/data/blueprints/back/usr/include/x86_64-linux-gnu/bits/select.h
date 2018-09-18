// GGHASH:VX.V9u.ZS0FwpyPKvme2CuhmWrnFWYZe1EZH7arrtR8w00000839
#ifndef _SYS_SELECT_H
# error "Never use <bits/select.h> directly; include <sys/select.h> instead."
#endif
#include <bits/wordsize.h>
#if defined __GNUC__ && __GNUC__ >= 2
# if __WORDSIZE == 64
#define __FD_ZERO_STOS "stosq"
# else
#define __FD_ZERO_STOS "stosl"
# endif
#define __FD_ZERO(fdsp) do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " __FD_ZERO_STOS : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&__FDS_BITS (fdsp)[0]) : "memory"); } while (0)
#else
#define __FD_ZERO(set) do { unsigned int __i; fd_set *__arr = (set); for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i) __FDS_BITS (__arr)[__i] = 0; } while (0)
#endif
#define __FD_SET(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] |= __FD_MASK (d)))
#define __FD_CLR(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] &= ~__FD_MASK (d)))
#define __FD_ISSET(d,set) ((__FDS_BITS (set)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
