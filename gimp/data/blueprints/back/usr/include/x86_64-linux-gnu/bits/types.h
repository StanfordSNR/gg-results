// GGHASH:VIWUEDRq7i4xcbN3aYSRCWX443xYPTy5VnNznWbdpR3Q00001f36
#ifndef _BITS_TYPES_H
#define _BITS_TYPES_H 1
#include <features.h>
#include <bits/wordsize.h>
#if __WORDSIZE == 64
#else
#endif
#if __WORDSIZE == 64
#else
#endif
#if __WORDSIZE == 64
#else
#endif
#define __S16_TYPE short int
#define __U16_TYPE unsigned short int
#define __S32_TYPE int
#define __U32_TYPE unsigned int
#define __SLONGWORD_TYPE long int
#define __ULONGWORD_TYPE unsigned long int
#if __WORDSIZE == 32
#define __SQUAD_TYPE __quad_t
#define __UQUAD_TYPE __u_quad_t
#define __SWORD_TYPE int
#define __UWORD_TYPE unsigned int
#define __SLONG32_TYPE long int
#define __ULONG32_TYPE unsigned long int
#define __S64_TYPE __quad_t
#define __U64_TYPE __u_quad_t
#define __STD_TYPE __extension__ typedef
#elif __WORDSIZE == 64
#define __SQUAD_TYPE long int
#define __UQUAD_TYPE unsigned long int
#define __SWORD_TYPE long int
#define __UWORD_TYPE unsigned long int
#define __SLONG32_TYPE int
#define __ULONG32_TYPE unsigned int
#define __S64_TYPE long int
#define __U64_TYPE unsigned long int
#define __STD_TYPE typedef
#else
# error
#endif
#include <bits/typesizes.h>
#undef __STD_TYPE
#endif
