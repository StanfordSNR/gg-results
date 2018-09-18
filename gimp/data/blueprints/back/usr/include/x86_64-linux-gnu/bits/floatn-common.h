// GGHASH:VrvamK2K1oiWzTuD16THoy.zP1zIXb1yz_z8ZT5DHpos000024cb
#ifndef _BITS_FLOATN_COMMON_H
#define _BITS_FLOATN_COMMON_H 
#include <features.h>
#include <bits/long-double.h>
#define __HAVE_FLOAT16 0
#define __HAVE_FLOAT32 1
#define __HAVE_FLOAT64 1
#define __HAVE_FLOAT32X 1
#define __HAVE_FLOAT128X 0
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __HAVE_DISTINCT_FLOAT32 0
#define __HAVE_DISTINCT_FLOAT64 0
#define __HAVE_DISTINCT_FLOAT32X 0
#define __HAVE_DISTINCT_FLOAT64X 0
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X
#if __GNUC_PREREQ (7, 0) && !defined __cplusplus
#define __HAVE_FLOATN_NOT_TYPEDEF 1
#else
#define __HAVE_FLOATN_NOT_TYPEDEF 0
#endif
#ifndef __ASSEMBLER__
# if __HAVE_FLOAT16
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#define __f16(x) ((_Float16) x ##f)
# else
#define __f16(x) x ##f16
# endif
# endif
# if __HAVE_FLOAT32
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#define __f32(x) x ##f
# else
#define __f32(x) x ##f32
# endif
# endif
# if __HAVE_FLOAT64
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# ifdef __NO_LONG_DOUBLE_MATH
#define __f64(x) x ##l
# else
#define __f64(x) x
# endif
# else
#define __f64(x) x ##f64
# endif
# endif
# if __HAVE_FLOAT32X
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#define __f32x(x) x
# else
#define __f32x(x) x ##f32x
# endif
# endif
# if __HAVE_FLOAT64X
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# if __HAVE_FLOAT64X_LONG_DOUBLE
#define __f64x(x) x ##l
# else
#define __f64x(x) __f128 (x)
# endif
# else
#define __f64x(x) x ##f64x
# endif
# endif
# if __HAVE_FLOAT128X
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# error "_Float128X supported but no constant suffix"
# else
#define __f128x(x) x ##f128x
# endif
# endif
# if __HAVE_FLOAT16
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#define __CFLOAT16 __cfloat16
# else
#define __CFLOAT16 _Complex _Float16
# endif
# endif
# if __HAVE_FLOAT32
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#define __CFLOAT32 _Complex float
# else
#define __CFLOAT32 _Complex _Float32
# endif
# endif
# if __HAVE_FLOAT64
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# ifdef __NO_LONG_DOUBLE_MATH
#define __CFLOAT64 _Complex long double
# else
#define __CFLOAT64 _Complex double
# endif
# else
#define __CFLOAT64 _Complex _Float64
# endif
# endif
# if __HAVE_FLOAT32X
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#define __CFLOAT32X _Complex double
# else
#define __CFLOAT32X _Complex _Float32x
# endif
# endif
# if __HAVE_FLOAT64X
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# if __HAVE_FLOAT64X_LONG_DOUBLE
#define __CFLOAT64X _Complex long double
# else
#define __CFLOAT64X __CFLOAT128
# endif
# else
#define __CFLOAT64X _Complex _Float64x
# endif
# endif
# if __HAVE_FLOAT128X
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# error "_Float128X supported but no complex type"
# else
#define __CFLOAT128X _Complex _Float128x
# endif
# endif
# if __HAVE_FLOAT16
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf16() ((_Float16) __builtin_huge_val ())
#define __builtin_inff16() ((_Float16) __builtin_inf ())
#define __builtin_nanf16(x) ((_Float16) __builtin_nan (x))
#define __builtin_nansf16(x) ((_Float16) __builtin_nans (x))
# endif
# endif
# if __HAVE_FLOAT32
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf32() (__builtin_huge_valf ())
#define __builtin_inff32() (__builtin_inff ())
#define __builtin_nanf32(x) (__builtin_nanf (x))
#define __builtin_nansf32(x) (__builtin_nansf (x))
# endif
# endif
# if __HAVE_FLOAT64
# ifdef __NO_LONG_DOUBLE_MATH
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf64() (__builtin_huge_vall ())
#define __builtin_inff64() (__builtin_infl ())
#define __builtin_nanf64(x) (__builtin_nanl (x))
#define __builtin_nansf64(x) (__builtin_nansl (x))
# endif
# else
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf64() (__builtin_huge_val ())
#define __builtin_inff64() (__builtin_inf ())
#define __builtin_nanf64(x) (__builtin_nan (x))
#define __builtin_nansf64(x) (__builtin_nans (x))
# endif
# endif
# endif
# if __HAVE_FLOAT32X
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf32x() (__builtin_huge_val ())
#define __builtin_inff32x() (__builtin_inf ())
#define __builtin_nanf32x(x) (__builtin_nan (x))
#define __builtin_nansf32x(x) (__builtin_nans (x))
# endif
# endif
# if __HAVE_FLOAT64X
# if __HAVE_FLOAT64X_LONG_DOUBLE
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf64x() (__builtin_huge_vall ())
#define __builtin_inff64x() (__builtin_infl ())
#define __builtin_nanf64x(x) (__builtin_nanl (x))
#define __builtin_nansf64x(x) (__builtin_nansl (x))
# endif
# else
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf64x() (__builtin_huge_valf128 ())
#define __builtin_inff64x() (__builtin_inff128 ())
#define __builtin_nanf64x(x) (__builtin_nanf128 (x))
#define __builtin_nansf64x(x) (__builtin_nansf128 (x))
# endif
# endif
# endif
# if __HAVE_FLOAT128X
# if !__GNUC_PREREQ (7, 0) || defined __cplusplus
# error "_Float128x supported but no type"
# endif
# if !__GNUC_PREREQ (7, 0)
#define __builtin_huge_valf128x() ((_Float128x) __builtin_huge_val ())
#define __builtin_inff128x() ((_Float128x) __builtin_inf ())
#define __builtin_nanf128x(x) ((_Float128x) __builtin_nan (x))
#define __builtin_nansf128x(x) ((_Float128x) __builtin_nans (x))
# endif
# endif
#endif
#endif
