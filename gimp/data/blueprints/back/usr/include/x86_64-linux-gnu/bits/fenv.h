// GGHASH:VIa.neJ1yhroRzIaCE2tz9YF09XmV0AMTDJOR8d_TPt8000011fe
#ifndef _FENV_H
# error "Never use <bits/fenv.h> directly; include <fenv.h> instead."
#endif
#define FE_INVALID 0x01
#define FE_DIVBYZERO 0x04
#define FE_OVERFLOW 0x08
#define FE_UNDERFLOW 0x10
#define FE_INEXACT 0x20
#define FE_ALL_EXCEPT (FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
#define FE_TONEAREST 0
#define FE_DOWNWARD 0x400
#define FE_UPWARD 0x800
#define FE_TOWARDZERO 0xc00
#ifdef __x86_64__
#endif
#define FE_DFL_ENV ((const fenv_t *) -1)
#ifdef __USE_GNU
#define FE_NOMASK_ENV ((const fenv_t *) -2)
#endif
#if __GLIBC_USE (IEC_60559_BFP_EXT)
#define FE_DFL_MODE ((const femode_t *) -1L)
#endif
#ifdef __USE_EXTERN_INLINES
#ifndef _LIBC
#endif
# ifdef __SSE_MATH__
# else
# endif
# ifdef __SSE_MATH__
# else
# endif
#endif
