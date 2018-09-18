// GGHASH:VVf5JW1b7RxSsEA6woaWgzyryaxh1gUlbALWVcQjE20I00000506
#ifndef _BITS_SETJMP_H
#define _BITS_SETJMP_H 1
#if !defined _SETJMP_H && !defined _PTHREAD_H
# error "Never include <bits/setjmp.h> directly; use <setjmp.h> instead."
#endif
#include <bits/wordsize.h>
#ifndef _ASM
# if __WORDSIZE == 64
# elif defined __x86_64__
# else
# endif
#endif
#endif
