// GGHASH:VYpDby0Ker.CFPoORo1sT0ztHaUeNPM0oGRO4lvE4ANs0000b148
#ifndef _MATH_H
#define _MATH_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#include <bits/libc-header-start.h>
#if defined log && defined __GNUC__
# warning A macro called log was already defined when <math.h> was included.
# warning This will cause compilation problems.
#endif
#include <bits/types.h>
#include <bits/math-vector.h>
#include <bits/floatn.h>
#if __GNUC_PREREQ (3, 3)
#define HUGE_VAL (__builtin_huge_val ())
#else
#define HUGE_VAL 1e10000
#endif
#ifdef __USE_ISOC99
# if __GNUC_PREREQ (3, 3)
#define HUGE_VALF (__builtin_huge_valf ())
#define HUGE_VALL (__builtin_huge_vall ())
# else
#define HUGE_VALF 1e10000f
#define HUGE_VALL 1e10000L
# endif
#endif
#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define HUGE_VAL_F16 (__builtin_huge_valf16 ())
#endif
#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define HUGE_VAL_F32 (__builtin_huge_valf32 ())
#endif
#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define HUGE_VAL_F64 (__builtin_huge_valf64 ())
#endif
#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define HUGE_VAL_F128 (__builtin_huge_valf128 ())
#endif
#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define HUGE_VAL_F32X (__builtin_huge_valf32x ())
#endif
#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define HUGE_VAL_F64X (__builtin_huge_valf64x ())
#endif
#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define HUGE_VAL_F128X (__builtin_huge_valf128x ())
#endif
#ifdef __USE_ISOC99
# if __GNUC_PREREQ (3, 3)
#define INFINITY (__builtin_inff ())
# else
#define INFINITY HUGE_VALF
# endif
# if __GNUC_PREREQ (3, 3)
#define NAN (__builtin_nanf (""))
# else
#define NAN (0.0f / 0.0f)
# endif
#endif
#if __GLIBC_USE (IEC_60559_BFP_EXT)
# if __GNUC_PREREQ (3, 3)
#define SNANF (__builtin_nansf (""))
#define SNAN (__builtin_nans (""))
#define SNANL (__builtin_nansl (""))
# endif
#endif
#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define SNANF16 (__builtin_nansf16 (""))
#endif
#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define SNANF32 (__builtin_nansf32 (""))
#endif
#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define SNANF64 (__builtin_nansf64 (""))
#endif
#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define SNANF128 (__builtin_nansf128 (""))
#endif
#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define SNANF32X (__builtin_nansf32x (""))
#endif
#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define SNANF64X (__builtin_nansf64x (""))
#endif
#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define SNANF128X (__builtin_nansf128x (""))
#endif
#include <bits/flt-eval-method.h>
#ifdef __USE_ISOC99
# if __GLIBC_FLT_EVAL_METHOD == 0 || __GLIBC_FLT_EVAL_METHOD == 16
# elif __GLIBC_FLT_EVAL_METHOD == 1
# elif __GLIBC_FLT_EVAL_METHOD == 2
# elif __GLIBC_FLT_EVAL_METHOD == 32
# elif __GLIBC_FLT_EVAL_METHOD == 33
# elif __GLIBC_FLT_EVAL_METHOD == 64
# elif __GLIBC_FLT_EVAL_METHOD == 65
# elif __GLIBC_FLT_EVAL_METHOD == 128
# elif __GLIBC_FLT_EVAL_METHOD == 129
# else
# error "Unknown __GLIBC_FLT_EVAL_METHOD"
# endif
#endif
#include <bits/fp-logb.h>
#ifdef __USE_ISOC99
# if __FP_LOGB0_IS_MIN
#define FP_ILOGB0 (-2147483647 - 1)
# else
#define FP_ILOGB0 (-2147483647)
# endif
# if __FP_LOGBNAN_IS_MIN
#define FP_ILOGBNAN (-2147483647 - 1)
# else
#define FP_ILOGBNAN 2147483647
# endif
#endif
#if __GLIBC_USE (IEC_60559_BFP_EXT)
# if __WORDSIZE == 32
#define __FP_LONG_MAX 0x7fffffffL
# else
#define __FP_LONG_MAX 0x7fffffffffffffffL
# endif
# if __FP_LOGB0_IS_MIN
#define FP_LLOGB0 (-__FP_LONG_MAX - 1)
# else
#define FP_LLOGB0 (-__FP_LONG_MAX)
# endif
# if __FP_LOGBNAN_IS_MIN
#define FP_LLOGBNAN (-__FP_LONG_MAX - 1)
# else
#define FP_LLOGBNAN __FP_LONG_MAX
# endif
#endif
#include <bits/fp-fast.h>
#if __GLIBC_USE (IEC_60559_BFP_EXT)
#define FP_INT_UPWARD 0
#define FP_INT_DOWNWARD 1
#define FP_INT_TOWARDZERO 2
#define FP_INT_TONEARESTFROMZERO 3
#define FP_INT_TONEAREST 4
#endif
#define __SIMD_DECL(function) __CONCAT (__DECL_SIMD_, function)
#define __MATHCALL_VEC(function,suffix,args) __SIMD_DECL (__MATH_PRECNAME (function, suffix)) __MATHCALL (function, suffix, args)
#define __MATHDECL_VEC(type,function,suffix,args) __SIMD_DECL (__MATH_PRECNAME (function, suffix)) __MATHDECL(type, function,suffix, args)
#define __MATHCALL(function,suffix,args) __MATHDECL (_Mdouble_,function,suffix, args)
#define __MATHDECL(type,function,suffix,args) __MATHDECL_1(type, function,suffix, args); __MATHDECL_1(type, __CONCAT(__,function),suffix, args)
#define __MATHCALLX(function,suffix,args,attrib) __MATHDECLX (_Mdouble_,function,suffix, args, attrib)
#define __MATHDECLX(type,function,suffix,args,attrib) __MATHDECL_1(type, function,suffix, args) __attribute__ (attrib); __MATHDECL_1(type, __CONCAT(__,function),suffix, args) __attribute__ (attrib)
#define __MATHDECL_1(type,function,suffix,args) extern type __MATH_PRECNAME(function,suffix) args __THROW
#define _Mdouble_ double
#define __MATH_PRECNAME(name,r) __CONCAT(name,r)
#define __MATH_DECLARING_DOUBLE 1
#define __MATH_DECLARING_FLOATN 0
#include <bits/mathcalls-helper-functions.h>
#include <bits/mathcalls.h>
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#ifdef __USE_ISOC99
#define _Mdouble_ float
#define __MATH_PRECNAME(name,r) name ##f ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 0
# include <bits/mathcalls-helper-functions.h>
# include <bits/mathcalls.h>
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
# if !(defined __NO_LONG_DOUBLE_MATH && defined _LIBC) || defined __LDBL_COMPAT || defined _LIBC_TEST
# ifdef __LDBL_COMPAT
# ifdef __USE_ISOC99
# ifdef __REDIRECT_NTH
# endif
# endif
#undef __MATHDECL_1
#define __MATHDECL_2(type,function,suffix,args,alias) extern type __REDIRECT_NTH(__MATH_PRECNAME(function,suffix), args, alias)
#define __MATHDECL_1(type,function,suffix,args) __MATHDECL_2(type, function,suffix, args, __CONCAT(function,suffix))
# endif
#define _Mdouble_ long double
#define __MATH_PRECNAME(name,r) name ##l ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 0
#define __MATH_DECLARE_LDOUBLE 1
# include <bits/mathcalls-helper-functions.h>
# include <bits/mathcalls.h>
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
# endif
#endif
#if __HAVE_DISTINCT_FLOAT16 || (__HAVE_FLOAT16 && !defined _LIBC)
#define _Mdouble_ _Float16
#define __MATH_PRECNAME(name,r) name ##f16 ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
# if __HAVE_DISTINCT_FLOAT16
# include <bits/mathcalls-helper-functions.h>
# endif
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
# include <bits/mathcalls.h>
# endif
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#endif
#if __HAVE_DISTINCT_FLOAT32 || (__HAVE_FLOAT32 && !defined _LIBC)
#define _Mdouble_ _Float32
#define __MATH_PRECNAME(name,r) name ##f32 ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
# if __HAVE_DISTINCT_FLOAT32
# include <bits/mathcalls-helper-functions.h>
# endif
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
# include <bits/mathcalls.h>
# endif
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#endif
#if __HAVE_DISTINCT_FLOAT64 || (__HAVE_FLOAT64 && !defined _LIBC)
#define _Mdouble_ _Float64
#define __MATH_PRECNAME(name,r) name ##f64 ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
# if __HAVE_DISTINCT_FLOAT64
# include <bits/mathcalls-helper-functions.h>
# endif
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
# include <bits/mathcalls.h>
# endif
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#endif
#if __HAVE_DISTINCT_FLOAT128 || (__HAVE_FLOAT128 && !defined _LIBC)
#define _Mdouble_ _Float128
#define __MATH_PRECNAME(name,r) name ##f128 ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
# if __HAVE_DISTINCT_FLOAT128
# include <bits/mathcalls-helper-functions.h>
# endif
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
# include <bits/mathcalls.h>
# endif
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#endif
#if __HAVE_DISTINCT_FLOAT32X || (__HAVE_FLOAT32X && !defined _LIBC)
#define _Mdouble_ _Float32x
#define __MATH_PRECNAME(name,r) name ##f32x ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
# if __HAVE_DISTINCT_FLOAT32X
# include <bits/mathcalls-helper-functions.h>
# endif
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
# include <bits/mathcalls.h>
# endif
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#endif
#if __HAVE_DISTINCT_FLOAT64X || (__HAVE_FLOAT64X && !defined _LIBC)
#define _Mdouble_ _Float64x
#define __MATH_PRECNAME(name,r) name ##f64x ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
# if __HAVE_DISTINCT_FLOAT64X
# include <bits/mathcalls-helper-functions.h>
# endif
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
# include <bits/mathcalls.h>
# endif
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#endif
#if __HAVE_DISTINCT_FLOAT128X || (__HAVE_FLOAT128X && !defined _LIBC)
#define _Mdouble_ _Float128x
#define __MATH_PRECNAME(name,r) name ##f128x ##r
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
# if __HAVE_DISTINCT_FLOAT128X
# include <bits/mathcalls-helper-functions.h>
# endif
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
# include <bits/mathcalls.h>
# endif
#undef _Mdouble_
#undef __MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#endif
#undef __MATHDECL_1
#undef __MATHDECL
#undef __MATHCALL
#if defined __USE_MISC || defined __USE_XOPEN
#endif
#if (__HAVE_DISTINCT_FLOAT16 || __HAVE_DISTINCT_FLOAT32 || __HAVE_DISTINCT_FLOAT64 || __HAVE_DISTINCT_FLOAT32X || __HAVE_DISTINCT_FLOAT64X || __HAVE_DISTINCT_FLOAT128X)
# error "Unsupported _FloatN or _FloatNx types for <math.h>."
#endif
#ifdef __NO_LONG_DOUBLE_MATH
# if __HAVE_DISTINCT_FLOAT128
# error "Distinct _Float128 without distinct long double not supported."
# endif
#define __MATH_TG(TG_ARG,FUNC,ARGS) (sizeof (TG_ARG) == sizeof (float) ? FUNC ## f ARGS : FUNC ARGS)
#elif __HAVE_DISTINCT_FLOAT128
# if __HAVE_GENERIC_SELECTION
# if __HAVE_FLOATN_NOT_TYPEDEF && __HAVE_FLOAT32
#define __MATH_TG_F32(FUNC,ARGS) _Float32: FUNC ## f ARGS,
# else
#define __MATH_TG_F32(FUNC,ARGS) 
# endif
# if __HAVE_FLOATN_NOT_TYPEDEF && __HAVE_FLOAT64X
# if __HAVE_FLOAT64X_LONG_DOUBLE
#define __MATH_TG_F64X(FUNC,ARGS) _Float64x: FUNC ## l ARGS,
# else
#define __MATH_TG_F64X(FUNC,ARGS) _Float64x: FUNC ## f128 ARGS,
# endif
# else
#define __MATH_TG_F64X(FUNC,ARGS) 
# endif
#define __MATH_TG(TG_ARG,FUNC,ARGS) _Generic ((TG_ARG), float: FUNC ## f ARGS, __MATH_TG_F32 (FUNC, ARGS) default: FUNC ARGS, long double: FUNC ## l ARGS, __MATH_TG_F64X (FUNC, ARGS) _Float128: FUNC ## f128 ARGS)
# else
# if __HAVE_FLOATN_NOT_TYPEDEF
# error "Non-typedef _FloatN but no _Generic."
# endif
#define __MATH_TG(TG_ARG,FUNC,ARGS) __builtin_choose_expr (__builtin_types_compatible_p (__typeof (TG_ARG), float), FUNC ## f ARGS, __builtin_choose_expr (__builtin_types_compatible_p (__typeof (TG_ARG), double), FUNC ARGS, __builtin_choose_expr (__builtin_types_compatible_p (__typeof (TG_ARG), long double), FUNC ## l ARGS, FUNC ## f128 ARGS)))
# endif
#else
#define __MATH_TG(TG_ARG,FUNC,ARGS) (sizeof (TG_ARG) == sizeof (float) ? FUNC ## f ARGS : sizeof (TG_ARG) == sizeof (double) ? FUNC ARGS : FUNC ## l ARGS)
#endif
#ifdef __USE_ISOC99
#define FP_NAN 0
#define FP_INFINITE 1
#define FP_ZERO 2
#define FP_SUBNORMAL 3
#define FP_NORMAL 4
# if __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__ && (!defined __OPTIMIZE_SIZE__ || defined __cplusplus)
#define fpclassify(x) __builtin_fpclassify (FP_NAN, FP_INFINITE, FP_NORMAL, FP_SUBNORMAL, FP_ZERO, x)
# else
#define fpclassify(x) __MATH_TG ((x), __fpclassify, (x))
# endif
# if __GNUC_PREREQ (6,0)
#define signbit(x) __builtin_signbit (x)
# elif defined __cplusplus
#define signbit(x) __builtin_signbitl (x)
# elif __GNUC_PREREQ (4,0)
#define signbit(x) __MATH_TG ((x), __builtin_signbit, (x))
# else
#define signbit(x) __MATH_TG ((x), __signbit, (x))
# endif
# if __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__
#define isfinite(x) __builtin_isfinite (x)
# else
#define isfinite(x) __MATH_TG ((x), __finite, (x))
# endif
# if __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__
#define isnormal(x) __builtin_isnormal (x)
# else
#define isnormal(x) (fpclassify (x) == FP_NORMAL)
# endif
# if __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__
#define isnan(x) __builtin_isnan (x)
# else
#define isnan(x) __MATH_TG ((x), __isnan, (x))
# endif
# if __HAVE_DISTINCT_FLOAT128 && !__GNUC_PREREQ (7,0) && !defined __SUPPORT_SNAN__ && !defined __cplusplus
#define isinf(x) (__builtin_types_compatible_p (__typeof (x), _Float128) ? __isinff128 (x) : __builtin_isinf_sign (x))
# elif __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__
#define isinf(x) __builtin_isinf_sign (x)
# else
#define isinf(x) __MATH_TG ((x), __isinf, (x))
# endif
#define MATH_ERRNO 1
#define MATH_ERREXCEPT 2
# ifdef __FAST_MATH__
#define math_errhandling 0
# elif defined __NO_MATH_ERRNO__
#define math_errhandling (MATH_ERREXCEPT)
# else
#define math_errhandling (MATH_ERRNO | MATH_ERREXCEPT)
# endif
#endif
#if __GLIBC_USE (IEC_60559_BFP_EXT)
# include <bits/iscanonical.h>
# ifndef __cplusplus
#define issignaling(x) __MATH_TG ((x), __issignaling, (x))
# else
# ifdef __NO_LONG_DOUBLE_MATH
# else
# endif
# if __HAVE_DISTINCT_FLOAT128
# endif
# endif
#define issubnormal(x) (fpclassify (x) == FP_SUBNORMAL)
# ifndef __cplusplus
# ifdef __SUPPORT_SNAN__
#define iszero(x) (fpclassify (x) == FP_ZERO)
# else
#define iszero(x) (((__typeof (x)) (x)) == 0)
# endif
# else
# ifdef __SUPPORT_SNAN__
# ifdef __NO_LONG_DOUBLE_MATH
# else
# endif
# if __HAVE_DISTINCT_FLOAT128
# endif
# else
# endif
# endif
#endif
#ifdef __USE_XOPEN
#define MAXFLOAT 3.40282347e+38F
#endif
#if defined __USE_MISC || defined __USE_XOPEN
#define M_E 2.7182818284590452354
#define M_LOG2E 1.4426950408889634074
#define M_LOG10E 0.43429448190325182765
#define M_LN2 0.69314718055994530942
#define M_LN10 2.30258509299404568402
#define M_PI 3.14159265358979323846
#define M_PI_2 1.57079632679489661923
#define M_PI_4 0.78539816339744830962
#define M_1_PI 0.31830988618379067154
#define M_2_PI 0.63661977236758134308
#define M_2_SQRTPI 1.12837916709551257390
#define M_SQRT2 1.41421356237309504880
#define M_SQRT1_2 0.70710678118654752440
#endif
#ifdef __USE_GNU
#define M_El 2.718281828459045235360287471352662498L
#define M_LOG2El 1.442695040888963407359924681001892137L
#define M_LOG10El 0.434294481903251827651128918916605082L
#define M_LN2l 0.693147180559945309417232121458176568L
#define M_LN10l 2.302585092994045684017991454684364208L
#define M_PIl 3.141592653589793238462643383279502884L
#define M_PI_2l 1.570796326794896619231321691639751442L
#define M_PI_4l 0.785398163397448309615660845819875721L
#define M_1_PIl 0.318309886183790671537767526745028724L
#define M_2_PIl 0.636619772367581343075535053490057448L
#define M_2_SQRTPIl 1.128379167095512573896158903121545172L
#define M_SQRT2l 1.414213562373095048801688724209698079L
#define M_SQRT1_2l 0.707106781186547524400844362104849039L
#endif
#if __HAVE_FLOAT16 && defined __USE_GNU
#define M_Ef16 __f16 (2.718281828459045235360287471352662498)
#define M_LOG2Ef16 __f16 (1.442695040888963407359924681001892137)
#define M_LOG10Ef16 __f16 (0.434294481903251827651128918916605082)
#define M_LN2f16 __f16 (0.693147180559945309417232121458176568)
#define M_LN10f16 __f16 (2.302585092994045684017991454684364208)
#define M_PIf16 __f16 (3.141592653589793238462643383279502884)
#define M_PI_2f16 __f16 (1.570796326794896619231321691639751442)
#define M_PI_4f16 __f16 (0.785398163397448309615660845819875721)
#define M_1_PIf16 __f16 (0.318309886183790671537767526745028724)
#define M_2_PIf16 __f16 (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf16 __f16 (1.128379167095512573896158903121545172)
#define M_SQRT2f16 __f16 (1.414213562373095048801688724209698079)
#define M_SQRT1_2f16 __f16 (0.707106781186547524400844362104849039)
#endif
#if __HAVE_FLOAT32 && defined __USE_GNU
#define M_Ef32 __f32 (2.718281828459045235360287471352662498)
#define M_LOG2Ef32 __f32 (1.442695040888963407359924681001892137)
#define M_LOG10Ef32 __f32 (0.434294481903251827651128918916605082)
#define M_LN2f32 __f32 (0.693147180559945309417232121458176568)
#define M_LN10f32 __f32 (2.302585092994045684017991454684364208)
#define M_PIf32 __f32 (3.141592653589793238462643383279502884)
#define M_PI_2f32 __f32 (1.570796326794896619231321691639751442)
#define M_PI_4f32 __f32 (0.785398163397448309615660845819875721)
#define M_1_PIf32 __f32 (0.318309886183790671537767526745028724)
#define M_2_PIf32 __f32 (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf32 __f32 (1.128379167095512573896158903121545172)
#define M_SQRT2f32 __f32 (1.414213562373095048801688724209698079)
#define M_SQRT1_2f32 __f32 (0.707106781186547524400844362104849039)
#endif
#if __HAVE_FLOAT64 && defined __USE_GNU
#define M_Ef64 __f64 (2.718281828459045235360287471352662498)
#define M_LOG2Ef64 __f64 (1.442695040888963407359924681001892137)
#define M_LOG10Ef64 __f64 (0.434294481903251827651128918916605082)
#define M_LN2f64 __f64 (0.693147180559945309417232121458176568)
#define M_LN10f64 __f64 (2.302585092994045684017991454684364208)
#define M_PIf64 __f64 (3.141592653589793238462643383279502884)
#define M_PI_2f64 __f64 (1.570796326794896619231321691639751442)
#define M_PI_4f64 __f64 (0.785398163397448309615660845819875721)
#define M_1_PIf64 __f64 (0.318309886183790671537767526745028724)
#define M_2_PIf64 __f64 (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf64 __f64 (1.128379167095512573896158903121545172)
#define M_SQRT2f64 __f64 (1.414213562373095048801688724209698079)
#define M_SQRT1_2f64 __f64 (0.707106781186547524400844362104849039)
#endif
#if __HAVE_FLOAT128 && defined __USE_GNU
#define M_Ef128 __f128 (2.718281828459045235360287471352662498)
#define M_LOG2Ef128 __f128 (1.442695040888963407359924681001892137)
#define M_LOG10Ef128 __f128 (0.434294481903251827651128918916605082)
#define M_LN2f128 __f128 (0.693147180559945309417232121458176568)
#define M_LN10f128 __f128 (2.302585092994045684017991454684364208)
#define M_PIf128 __f128 (3.141592653589793238462643383279502884)
#define M_PI_2f128 __f128 (1.570796326794896619231321691639751442)
#define M_PI_4f128 __f128 (0.785398163397448309615660845819875721)
#define M_1_PIf128 __f128 (0.318309886183790671537767526745028724)
#define M_2_PIf128 __f128 (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf128 __f128 (1.128379167095512573896158903121545172)
#define M_SQRT2f128 __f128 (1.414213562373095048801688724209698079)
#define M_SQRT1_2f128 __f128 (0.707106781186547524400844362104849039)
#endif
#if __HAVE_FLOAT32X && defined __USE_GNU
#define M_Ef32x __f32x (2.718281828459045235360287471352662498)
#define M_LOG2Ef32x __f32x (1.442695040888963407359924681001892137)
#define M_LOG10Ef32x __f32x (0.434294481903251827651128918916605082)
#define M_LN2f32x __f32x (0.693147180559945309417232121458176568)
#define M_LN10f32x __f32x (2.302585092994045684017991454684364208)
#define M_PIf32x __f32x (3.141592653589793238462643383279502884)
#define M_PI_2f32x __f32x (1.570796326794896619231321691639751442)
#define M_PI_4f32x __f32x (0.785398163397448309615660845819875721)
#define M_1_PIf32x __f32x (0.318309886183790671537767526745028724)
#define M_2_PIf32x __f32x (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf32x __f32x (1.128379167095512573896158903121545172)
#define M_SQRT2f32x __f32x (1.414213562373095048801688724209698079)
#define M_SQRT1_2f32x __f32x (0.707106781186547524400844362104849039)
#endif
#if __HAVE_FLOAT64X && defined __USE_GNU
#define M_Ef64x __f64x (2.718281828459045235360287471352662498)
#define M_LOG2Ef64x __f64x (1.442695040888963407359924681001892137)
#define M_LOG10Ef64x __f64x (0.434294481903251827651128918916605082)
#define M_LN2f64x __f64x (0.693147180559945309417232121458176568)
#define M_LN10f64x __f64x (2.302585092994045684017991454684364208)
#define M_PIf64x __f64x (3.141592653589793238462643383279502884)
#define M_PI_2f64x __f64x (1.570796326794896619231321691639751442)
#define M_PI_4f64x __f64x (0.785398163397448309615660845819875721)
#define M_1_PIf64x __f64x (0.318309886183790671537767526745028724)
#define M_2_PIf64x __f64x (0.636619772367581343075535053490057448)
#define M_2_SQRTPIf64x __f64x (1.128379167095512573896158903121545172)
#define M_SQRT2f64x __f64x (1.414213562373095048801688724209698079)
#define M_SQRT1_2f64x __f64x (0.707106781186547524400844362104849039)
#endif
#if __HAVE_FLOAT128X && defined __USE_GNU
# error "M_* values needed for _Float128x"
#endif
#if defined __STRICT_ANSI__ && !defined __NO_MATH_INLINES
#define __NO_MATH_INLINES 1
#endif
#ifdef __USE_ISOC99
# if __GNUC_PREREQ (3, 1)
#define isgreater(x,y) __builtin_isgreater(x, y)
#define isgreaterequal(x,y) __builtin_isgreaterequal(x, y)
#define isless(x,y) __builtin_isless(x, y)
#define islessequal(x,y) __builtin_islessequal(x, y)
#define islessgreater(x,y) __builtin_islessgreater(x, y)
#define isunordered(x,y) __builtin_isunordered(x, y)
# else
#define isgreater(x,y) (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); !isunordered (__x, __y) && __x > __y; }))
#define isgreaterequal(x,y) (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); !isunordered (__x, __y) && __x >= __y; }))
#define isless(x,y) (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); !isunordered (__x, __y) && __x < __y; }))
#define islessequal(x,y) (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); !isunordered (__x, __y) && __x <= __y; }))
#define islessgreater(x,y) (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); !isunordered (__x, __y) && __x != __y; }))
#define isunordered(x,y) (__extension__ ({ __typeof__ (x) __u = (x); __typeof__ (y) __v = (y); __u != __v && (__u != __u || __v != __v); }))
# endif
#endif
#ifdef __USE_EXTERN_INLINES
# include <bits/mathinline.h>
#endif
#if defined __FINITE_MATH_ONLY__ && __FINITE_MATH_ONLY__ > 0
#define _Mdouble_ double
#define __MATH_DECLARING_DOUBLE 1
#define __MATH_DECLARING_FLOATN 0
#define __REDIRFROM_X(function,reentrant) function ## reentrant
#define __REDIRTO_X(function,reentrant) __ ## function ## reentrant ## _finite
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# ifdef __USE_ISOC99
#define _Mdouble_ float
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 0
#define __REDIRFROM_X(function,reentrant) function ## f ## reentrant
#define __REDIRTO_X(function,reentrant) __ ## function ## f ## reentrant ## _finite
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# ifdef __MATH_DECLARE_LDOUBLE
#define _Mdouble_ long double
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 0
#define __REDIRFROM_X(function,reentrant) function ## l ## reentrant
# ifdef __NO_LONG_DOUBLE_MATH
#define __REDIRTO_X(function,reentrant) __ ## function ## reentrant ## _finite
# else
#define __REDIRTO_X(function,reentrant) __ ## function ## l ## reentrant ## _finite
# endif
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# endif
# endif
# if (__HAVE_DISTINCT_FLOAT16 || (__HAVE_FLOAT16 && !defined _LIBC)) && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define _Mdouble_ _Float16
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#define __REDIRFROM_X(function,reentrant) function ## f16 ## reentrant
# if __HAVE_DISTINCT_FLOAT16
#define __REDIRTO_X(function,reentrant) __ ## function ## f16 ## reentrant ## _finite
# else
# error "non-disinct _Float16"
# endif
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# endif
# if (__HAVE_DISTINCT_FLOAT32 || (__HAVE_FLOAT32 && !defined _LIBC)) && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define _Mdouble_ _Float32
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#define __REDIRFROM_X(function,reentrant) function ## f32 ## reentrant
# if __HAVE_DISTINCT_FLOAT32
#define __REDIRTO_X(function,reentrant) __ ## function ## f32 ## reentrant ## _finite
# else
#define __REDIRTO_X(function,reentrant) __ ## function ## f ## reentrant ## _finite
# endif
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# endif
# if (__HAVE_DISTINCT_FLOAT64 || (__HAVE_FLOAT64 && !defined _LIBC)) && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define _Mdouble_ _Float64
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#define __REDIRFROM_X(function,reentrant) function ## f64 ## reentrant
# if __HAVE_DISTINCT_FLOAT64
#define __REDIRTO_X(function,reentrant) __ ## function ## f64 ## reentrant ## _finite
# else
#define __REDIRTO_X(function,reentrant) __ ## function ## reentrant ## _finite
# endif
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# endif
# if (__HAVE_DISTINCT_FLOAT128 || (__HAVE_FLOAT128 && !defined _LIBC)) && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define _Mdouble_ _Float128
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#define __REDIRFROM_X(function,reentrant) function ## f128 ## reentrant
# if __HAVE_DISTINCT_FLOAT128
#define __REDIRTO_X(function,reentrant) __ ## function ## f128 ## reentrant ## _finite
# else
#define __REDIRTO_X(function,reentrant) __ ## function ## l ## reentrant ## _finite
# endif
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# endif
# if (__HAVE_DISTINCT_FLOAT32X || (__HAVE_FLOAT32X && !defined _LIBC)) && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define _Mdouble_ _Float32x
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#define __REDIRFROM_X(function,reentrant) function ## f32x ## reentrant
# if __HAVE_DISTINCT_FLOAT32X
#define __REDIRTO_X(function,reentrant) __ ## function ## f32x ## reentrant ## _finite
# else
#define __REDIRTO_X(function,reentrant) __ ## function ## reentrant ## _finite
# endif
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# endif
# if (__HAVE_DISTINCT_FLOAT64X || (__HAVE_FLOAT64X && !defined _LIBC)) && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define _Mdouble_ _Float64x
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#define __REDIRFROM_X(function,reentrant) function ## f64x ## reentrant
# if __HAVE_DISTINCT_FLOAT64X
#define __REDIRTO_X(function,reentrant) __ ## function ## f64x ## reentrant ## _finite
# elif __HAVE_FLOAT64X_LONG_DOUBLE
#define __REDIRTO_X(function,reentrant) __ ## function ## l ## reentrant ## _finite
# else
#define __REDIRTO_X(function,reentrant) __ ## function ## f128 ## reentrant ## _finite
# endif
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# endif
# if (__HAVE_DISTINCT_FLOAT128X || (__HAVE_FLOAT128X && !defined _LIBC)) && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define _Mdouble_ _Float128x
#define __MATH_DECLARING_DOUBLE 0
#define __MATH_DECLARING_FLOATN 1
#define __REDIRFROM_X(function,reentrant) function ## f128x ## reentrant
# if __HAVE_DISTINCT_FLOAT128X
#define __REDIRTO_X(function,reentrant) __ ## function ## f128x ## reentrant ## _finite
# else
# error "non-disinct _Float128x"
# endif
# include <bits/math-finite.h>
#undef _Mdouble_
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN
#undef __REDIRFROM_X
#undef __REDIRTO_X
# endif
#endif
#if __GLIBC_USE (IEC_60559_BFP_EXT)
# if __FLT_EVAL_METHOD__ == 2 || __FLT_EVAL_METHOD__ > 64
#define __MATH_EVAL_FMT2(x,y) ((x) + (y) + 0.0L)
# elif __FLT_EVAL_METHOD__ == 1 || __FLT_EVAL_METHOD__ > 32
#define __MATH_EVAL_FMT2(x,y) ((x) + (y) + 0.0)
# elif __FLT_EVAL_METHOD__ == 0 || __FLT_EVAL_METHOD__ == 32
#define __MATH_EVAL_FMT2(x,y) ((x) + (y) + 0.0f)
# else
#define __MATH_EVAL_FMT2(x,y) ((x) + (y))
# endif
# if !defined __cplusplus || (__cplusplus < 201103L && !defined __GNUC__)
#define iseqsig(x,y) __MATH_TG (__MATH_EVAL_FMT2 (x, y), __iseqsig, ((x), (y)))
# else
# ifndef __NO_LONG_DOUBLE_MATH
# else
# endif
# if __HAVE_DISTINCT_FLOAT128
# endif
# if __cplusplus >= 201103L
# else
# endif
# endif
#endif
#endif
