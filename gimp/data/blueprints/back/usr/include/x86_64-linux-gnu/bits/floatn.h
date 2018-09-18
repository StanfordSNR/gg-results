// GGHASH:VahDW.xGf59IQV_4_oxp0zWctWw5pIULbqZj3AsjfcxY00001147
#ifndef _BITS_FLOATN_H
#define _BITS_FLOATN_H 
#include <features.h>
#if (defined __x86_64__ ? __GNUC_PREREQ (4, 3) : (defined __GNU__ ? __GNUC_PREREQ (4, 5) : __GNUC_PREREQ (4, 4))) && !defined(__CUDACC__) && !defined(__ICC)
#define __HAVE_FLOAT128 1
#else
#define __HAVE_FLOAT128 0
#endif
#if __HAVE_FLOAT128
#define __HAVE_DISTINCT_FLOAT128 1
#else
#define __HAVE_DISTINCT_FLOAT128 0
#endif
#define __HAVE_FLOAT64X 1
#define __HAVE_FLOAT64X_LONG_DOUBLE 1
#ifndef __ASSEMBLER__
# if __HAVE_FLOAT128
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#define __f128(x) x ##q
# else
#define __f128(x) x ##f128
# endif
# endif
# if __HAVE_FLOAT128
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#define __CFLOAT128 __cfloat128
# else
#define __CFLOAT128 _Complex _Float128
# endif
# endif
# if __HAVE_FLOAT128
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf128() ((_Float128) __builtin_huge_val ())
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_copysignf128 __builtin_copysignq
#define __builtin_fabsf128 __builtin_fabsq
#define __builtin_inff128() ((_Float128) __builtin_inf ())
#define __builtin_nanf128(x) ((_Float128) __builtin_nan (x))
#define __builtin_nansf128(x) ((_Float128) __builtin_nans (x))
# endif
# if !__GNUC_PREREQ (6, 0)
#define __builtin_signbitf128 __signbitf128
# endif
# endif
#endif
#include <bits/floatn-common.h>
#endif
