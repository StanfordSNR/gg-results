// GGHASH:Vxbb1nRDivDZttu2As5kdTclXOn0gqRmqg.WoK4KZ9t800001620
#if !defined _BYTESWAP_H && !defined _NETINET_IN_H && !defined _ENDIAN_H
# error "Never use <bits/byteswap.h> directly; include <byteswap.h> instead."
#endif
#ifndef _BITS_BYTESWAP_H
#define _BITS_BYTESWAP_H 1
#include <features.h>
#include <bits/types.h>
#include <bits/wordsize.h>
#define __bswap_constant_16(x) ((unsigned short int) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#include <bits/byteswap-16.h>
#define __bswap_constant_32(x) ((((x) & 0xff000000) >> 24) | (((x) & 0x00ff0000) >> 8) | (((x) & 0x0000ff00) << 8) | (((x) & 0x000000ff) << 24))
#ifdef __GNUC__
# if __GNUC_PREREQ (4, 3)
# elif __GNUC__ >= 2
# if __WORDSIZE == 64 || (defined __i486__ || defined __pentium__ || defined __pentiumpro__ || defined __pentium4__ || defined __k8__ || defined __athlon__ || defined __k6__ || defined __nocona__ || defined __core2__ || defined __geode__ || defined __amdfam10__)
#define __bswap_32(x) (__extension__ ({ unsigned int __v, __x = (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_32 (__x); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))
# else
#define __bswap_32(x) (__extension__ ({ unsigned int __v, __x = (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_32 (__x); else __asm__ ("rorw $8, %w0;" "rorl $16, %0;" "rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))
# endif
# else
#define __bswap_32(x) (__extension__ ({ unsigned int __x = (x); __bswap_constant_32 (__x); }))
# endif
#else
#endif
#if __GNUC_PREREQ (2, 0)
#define __bswap_constant_64(x) (__extension__ ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56)))
# if __GNUC_PREREQ (4, 3)
# elif __WORDSIZE == 64
#define __bswap_64(x) (__extension__ ({ __uint64_t __v, __x = (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_64 (__x); else __asm__ ("bswap %q0" : "=r" (__v) : "0" (__x)); __v; }))
# else
#define __bswap_64(x) (__extension__ ({ union { __extension__ __uint64_t __ll; unsigned int __l[2]; } __w, __r; if (__builtin_constant_p (x)) __r.__ll = __bswap_constant_64 (x); else { __w.__ll = (x); __r.__l[0] = __bswap_32 (__w.__l[1]); __r.__l[1] = __bswap_32 (__w.__l[0]); } __r.__ll; }))
# endif
#else
#define __bswap_constant_64(x) ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56))
#endif
#endif
