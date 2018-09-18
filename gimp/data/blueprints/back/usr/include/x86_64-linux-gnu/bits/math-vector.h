// GGHASH:VFZV6Eo6XyfndyhD88Eeg1vTcEL3Lj.bm9jsmDbg3aaw00000903
#ifndef _MATH_H
# error "Never include <bits/math-vector.h> directly; include <math.h> instead."
#endif
#include <bits/libm-simd-decl-stubs.h>
#if defined __x86_64__ && defined __FAST_MATH__
# if defined _OPENMP && _OPENMP >= 201307
#define __DECL_SIMD_x86_64 _Pragma ("omp declare simd notinbranch")
# elif __GNUC_PREREQ (6,0)
#define __DECL_SIMD_x86_64 __attribute__ ((__simd__ ("notinbranch")))
# endif
# ifdef __DECL_SIMD_x86_64
#undef __DECL_SIMD_cos
#define __DECL_SIMD_cos __DECL_SIMD_x86_64
#undef __DECL_SIMD_cosf
#define __DECL_SIMD_cosf __DECL_SIMD_x86_64
#undef __DECL_SIMD_sin
#define __DECL_SIMD_sin __DECL_SIMD_x86_64
#undef __DECL_SIMD_sinf
#define __DECL_SIMD_sinf __DECL_SIMD_x86_64
#undef __DECL_SIMD_sincos
#define __DECL_SIMD_sincos __DECL_SIMD_x86_64
#undef __DECL_SIMD_sincosf
#define __DECL_SIMD_sincosf __DECL_SIMD_x86_64
#undef __DECL_SIMD_log
#define __DECL_SIMD_log __DECL_SIMD_x86_64
#undef __DECL_SIMD_logf
#define __DECL_SIMD_logf __DECL_SIMD_x86_64
#undef __DECL_SIMD_exp
#define __DECL_SIMD_exp __DECL_SIMD_x86_64
#undef __DECL_SIMD_expf
#define __DECL_SIMD_expf __DECL_SIMD_x86_64
#undef __DECL_SIMD_pow
#define __DECL_SIMD_pow __DECL_SIMD_x86_64
#undef __DECL_SIMD_powf
#define __DECL_SIMD_powf __DECL_SIMD_x86_64
# endif
#endif
