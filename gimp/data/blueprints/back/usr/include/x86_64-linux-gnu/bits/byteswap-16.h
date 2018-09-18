// GGHASH:Vr3Uqnm4xkF06Kget7mye5bXAxUp2i8kdy18KOqkCK4E000006c3
#ifndef _BITS_BYTESWAP_H
# error "Never use <bits/byteswap-16.h> directly; include <byteswap.h> instead."
#endif
#ifdef __GNUC__
# if __GNUC__ >= 2
#define __bswap_16(x) (__extension__ ({ unsigned short int __v, __x = (unsigned short int) (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_16 (__x); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))
# else
#define __bswap_16(x) (__extension__ ({ unsigned short int __x = (unsigned short int) (x); __bswap_constant_16 (__x); }))
# endif
#else
#endif
