// GGHASH:VgrvydFv.uYYzl.9J68OjWctd2igFbzd1JDZvJwxVrIA00007b01
#ifndef _TGMATH_H
#define _TGMATH_H 1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION 
#include <bits/libc-header-start.h>
#include <bits/floatn.h>
#include <math.h>
#include <complex.h>
#define __HAVE_BUILTIN_TGMATH __GNUC_PREREQ (8, 0)
#if __GNUC_PREREQ (2, 7)
# if __HAVE_BUILTIN_TGMATH
# if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define __TG_F16_ARG(X) X ## f16,
# else
#define __TG_F16_ARG(X) 
# endif
# if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define __TG_F32_ARG(X) X ## f32,
# else
#define __TG_F32_ARG(X) 
# endif
# if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define __TG_F64_ARG(X) X ## f64,
# else
#define __TG_F64_ARG(X) 
# endif
# if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define __TG_F128_ARG(X) X ## f128,
# else
#define __TG_F128_ARG(X) 
# endif
# if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define __TG_F32X_ARG(X) X ## f32x,
# else
#define __TG_F32X_ARG(X) 
# endif
# if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define __TG_F64X_ARG(X) X ## f64x,
# else
#define __TG_F64X_ARG(X) 
# endif
# if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
#define __TG_F128X_ARG(X) X ## f128x,
# else
#define __TG_F128X_ARG(X) 
# endif
#define __TGMATH_FUNCS(X) X ## f, X, X ## l, __TG_F16_ARG (X) __TG_F32_ARG (X) __TG_F64_ARG (X) __TG_F128_ARG (X) __TG_F32X_ARG (X) __TG_F64X_ARG (X) __TG_F128X_ARG (X)
#define __TGMATH_RCFUNCS(F,C) __TGMATH_FUNCS (F) __TGMATH_FUNCS (C)
#define __TGMATH_1(F,X) __builtin_tgmath (__TGMATH_FUNCS (F) (X))
#define __TGMATH_2(F,X,Y) __builtin_tgmath (__TGMATH_FUNCS (F) (X), (Y))
#define __TGMATH_2STD(F,X,Y) __builtin_tgmath (F ## f, F, F ## l, (X), (Y))
#define __TGMATH_3(F,X,Y,Z) __builtin_tgmath (__TGMATH_FUNCS (F) (X), (Y), (Z))
#define __TGMATH_1C(F,C,X) __builtin_tgmath (__TGMATH_RCFUNCS (F, C) (X))
#define __TGMATH_2C(F,C,X,Y) __builtin_tgmath (__TGMATH_RCFUNCS (F, C) (X), (Y))
# else
# ifdef __NO_LONG_DOUBLE_MATH
#define __tgml(fct) fct
# else
#define __tgml(fct) fct ## l
# endif
# if __GNUC_PREREQ (3, 1)
#define __floating_type(type) (__builtin_classify_type (__real__ ((type) 0)) == 8)
#define __real_integer_type(type) (__builtin_classify_type ((type) 0) == 1)
#define __complex_integer_type(type) (__builtin_classify_type ((type) 0) == 9 && __builtin_classify_type (__real__ ((type) 0)) == 1)
# else
#define __floating_type(type) (((type) 1.25) != 1)
#define __real_integer_type(type) (((type) (1.25 + _Complex_I)) == 1)
#define __complex_integer_type(type) (((type) (1.25 + _Complex_I)) == (1 + _Complex_I))
# endif
#define __expr_is_real(E) (__builtin_classify_type (E) != 9)
#define __tgmath_real_type_sub(T,E) __typeof__ (*(0 ? (__typeof__ (0 ? (double *) 0 : (void *) (E))) 0 : (__typeof__ (0 ? (T *) 0 : (void *) (!(E)))) 0))
#define __tgmath_real_type(expr) __tgmath_real_type_sub (__typeof__ ((__typeof__ (+(expr))) 0), __floating_type (__typeof__ (+(expr))))
#define __tgmath_complex_type_sub(T,E1,E2,E3) __typeof__ (*(0 ? (__typeof__ (0 ? (T *) 0 : (void *) (!(E1)))) 0 : (__typeof__ (0 ? (__typeof__ (0 ? (double *) 0 : (void *) (!(E2)))) 0 : (__typeof__ (0 ? (_Complex double *) 0 : (void *) (!(E3)))) 0)) 0))
#define __tgmath_complex_type(expr) __tgmath_complex_type_sub (__typeof__ ((__typeof__ (+(expr))) 0), __floating_type (__typeof__ (+(expr))), __real_integer_type (__typeof__ (+(expr))), __complex_integer_type (__typeof__ (+(expr))))
# if (__HAVE_DISTINCT_FLOAT16 || __HAVE_DISTINCT_FLOAT32 || __HAVE_DISTINCT_FLOAT64 || __HAVE_DISTINCT_FLOAT32X || __HAVE_DISTINCT_FLOAT64X || __HAVE_DISTINCT_FLOAT128X)
# error "Unsupported _FloatN or _FloatNx types for <tgmath.h>."
# endif
# if __HAVE_DISTINCT_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# if (!__HAVE_FLOAT64X || __HAVE_FLOAT64X_LONG_DOUBLE || !__HAVE_FLOATN_NOT_TYPEDEF)
#define __TGMATH_F128(arg_comb,fct,arg_call) __builtin_types_compatible_p (__typeof (+(arg_comb)), _Float128) ? fct ## f128 arg_call :
#define __TGMATH_CF128(arg_comb,fct,cfct,arg_call) __builtin_types_compatible_p (__typeof (+__real__ (arg_comb)), _Float128) ? (__expr_is_real (arg_comb) ? fct ## f128 arg_call : cfct ## f128 arg_call) :
# else
#define __TGMATH_F128(arg_comb,fct,arg_call) (__builtin_types_compatible_p (__typeof (+(arg_comb)), _Float128) || __builtin_types_compatible_p (__typeof (+(arg_comb)), _Float64x)) ? fct ## f128 arg_call :
#define __TGMATH_CF128(arg_comb,fct,cfct,arg_call) (__builtin_types_compatible_p (__typeof (+__real__ (arg_comb)), _Float128) || __builtin_types_compatible_p (__typeof (+__real__ (arg_comb)), _Float64x)) ? (__expr_is_real (arg_comb) ? fct ## f128 arg_call : cfct ## f128 arg_call) :
# endif
# else
#define __TGMATH_F128(arg_comb,fct,arg_call) 
#define __TGMATH_CF128(arg_comb,fct,cfct,arg_call) 
# endif
# endif
# if __HAVE_BUILTIN_TGMATH
#define __TGMATH_UNARY_REAL_ONLY(Val,Fct) __TGMATH_1 (Fct, (Val))
#define __TGMATH_UNARY_REAL_RET_ONLY(Val,Fct) __TGMATH_1 (Fct, (Val))
#define __TGMATH_BINARY_FIRST_REAL_ONLY(Val1,Val2,Fct) __TGMATH_2 (Fct, (Val1), (Val2))
#define __TGMATH_BINARY_FIRST_REAL_STD_ONLY(Val1,Val2,Fct) __TGMATH_2STD (Fct, (Val1), (Val2))
#define __TGMATH_BINARY_REAL_ONLY(Val1,Val2,Fct) __TGMATH_2 (Fct, (Val1), (Val2))
#define __TGMATH_BINARY_REAL_STD_ONLY(Val1,Val2,Fct) __TGMATH_2STD (Fct, (Val1), (Val2))
#define __TGMATH_BINARY_REAL_RET_ONLY(Val1,Val2,Fct) __TGMATH_2 (Fct, (Val1), (Val2))
#define __TGMATH_TERNARY_FIRST_SECOND_REAL_ONLY(Val1,Val2,Val3,Fct) __TGMATH_3 (Fct, (Val1), (Val2), (Val3))
#define __TGMATH_TERNARY_REAL_ONLY(Val1,Val2,Val3,Fct) __TGMATH_3 (Fct, (Val1), (Val2), (Val3))
#define __TGMATH_TERNARY_FIRST_REAL_RET_ONLY(Val1,Val2,Val3,Fct) __TGMATH_3 (Fct, (Val1), (Val2), (Val3))
#define __TGMATH_UNARY_REAL_IMAG(Val,Fct,Cfct) __TGMATH_1C (Fct, Cfct, (Val))
#define __TGMATH_UNARY_IMAG(Val,Cfct) __TGMATH_1 (Cfct, (Val))
#define __TGMATH_UNARY_REAL_IMAG_RET_REAL(Val,Fct,Cfct) __TGMATH_1C (Fct, Cfct, (Val))
#define __TGMATH_UNARY_REAL_IMAG_RET_REAL_SAME(Val,Cfct) __TGMATH_1 (Cfct, (Val))
#define __TGMATH_BINARY_REAL_IMAG(Val1,Val2,Fct,Cfct) __TGMATH_2C (Fct, Cfct, (Val1), (Val2))
# else
#define __TGMATH_UNARY_REAL_ONLY(Val,Fct) (__extension__ ((sizeof (+(Val)) == sizeof (double) || __builtin_classify_type (Val) != 8) ? (__tgmath_real_type (Val)) Fct (Val) : (sizeof (+(Val)) == sizeof (float)) ? (__tgmath_real_type (Val)) Fct ##f (Val) : __TGMATH_F128 ((Val), (__tgmath_real_type (Val)) Fct, (Val)) (__tgmath_real_type (Val)) __tgml(Fct) (Val)))
#define __TGMATH_UNARY_REAL_RET_ONLY(Val,Fct) (__extension__ ((sizeof (+(Val)) == sizeof (double) || __builtin_classify_type (Val) != 8) ? Fct (Val) : (sizeof (+(Val)) == sizeof (float)) ? Fct ##f (Val) : __TGMATH_F128 ((Val), Fct, (Val)) __tgml(Fct) (Val)))
#define __TGMATH_BINARY_FIRST_REAL_ONLY(Val1,Val2,Fct) (__extension__ ((sizeof (+(Val1)) == sizeof (double) || __builtin_classify_type (Val1) != 8) ? (__tgmath_real_type (Val1)) Fct (Val1, Val2) : (sizeof (+(Val1)) == sizeof (float)) ? (__tgmath_real_type (Val1)) Fct ##f (Val1, Val2) : __TGMATH_F128 ((Val1), (__tgmath_real_type (Val1)) Fct, (Val1, Val2)) (__tgmath_real_type (Val1)) __tgml(Fct) (Val1, Val2)))
#define __TGMATH_BINARY_FIRST_REAL_STD_ONLY(Val1,Val2,Fct) (__extension__ ((sizeof (+(Val1)) == sizeof (double) || __builtin_classify_type (Val1) != 8) ? (__tgmath_real_type (Val1)) Fct (Val1, Val2) : (sizeof (+(Val1)) == sizeof (float)) ? (__tgmath_real_type (Val1)) Fct ##f (Val1, Val2) : (__tgmath_real_type (Val1)) __tgml(Fct) (Val1, Val2)))
#define __TGMATH_BINARY_REAL_ONLY(Val1,Val2,Fct) (__extension__ ((sizeof ((Val1) + (Val2)) > sizeof (double) && __builtin_classify_type ((Val1) + (Val2)) == 8) ? __TGMATH_F128 ((Val1) + (Val2), (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) Fct, (Val1, Val2)) (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) __tgml(Fct) (Val1, Val2) : (sizeof (+(Val1)) == sizeof (double) || sizeof (+(Val2)) == sizeof (double) || __builtin_classify_type (Val1) != 8 || __builtin_classify_type (Val2) != 8) ? (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) Fct (Val1, Val2) : (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) Fct ##f (Val1, Val2)))
#define __TGMATH_BINARY_REAL_STD_ONLY(Val1,Val2,Fct) (__extension__ ((sizeof ((Val1) + (Val2)) > sizeof (double) && __builtin_classify_type ((Val1) + (Val2)) == 8) ? (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) __tgml(Fct) (Val1, Val2) : (sizeof (+(Val1)) == sizeof (double) || sizeof (+(Val2)) == sizeof (double) || __builtin_classify_type (Val1) != 8 || __builtin_classify_type (Val2) != 8) ? (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) Fct (Val1, Val2) : (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) Fct ##f (Val1, Val2)))
#define __TGMATH_BINARY_REAL_RET_ONLY(Val1,Val2,Fct) (__extension__ ((sizeof ((Val1) + (Val2)) > sizeof (double) && __builtin_classify_type ((Val1) + (Val2)) == 8) ? __TGMATH_F128 ((Val1) + (Val2), Fct, (Val1, Val2)) __tgml(Fct) (Val1, Val2) : (sizeof (+(Val1)) == sizeof (double) || sizeof (+(Val2)) == sizeof (double) || __builtin_classify_type (Val1) != 8 || __builtin_classify_type (Val2) != 8) ? Fct (Val1, Val2) : Fct ##f (Val1, Val2)))
#define __TGMATH_TERNARY_FIRST_SECOND_REAL_ONLY(Val1,Val2,Val3,Fct) (__extension__ ((sizeof ((Val1) + (Val2)) > sizeof (double) && __builtin_classify_type ((Val1) + (Val2)) == 8) ? __TGMATH_F128 ((Val1) + (Val2), (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) Fct, (Val1, Val2, Val3)) (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) __tgml(Fct) (Val1, Val2, Val3) : (sizeof (+(Val1)) == sizeof (double) || sizeof (+(Val2)) == sizeof (double) || __builtin_classify_type (Val1) != 8 || __builtin_classify_type (Val2) != 8) ? (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) Fct (Val1, Val2, Val3) : (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0)) Fct ##f (Val1, Val2, Val3)))
#define __TGMATH_TERNARY_REAL_ONLY(Val1,Val2,Val3,Fct) (__extension__ ((sizeof ((Val1) + (Val2) + (Val3)) > sizeof (double) && __builtin_classify_type ((Val1) + (Val2) + (Val3)) == 8) ? __TGMATH_F128 ((Val1) + (Val2) + (Val3), (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0 + (__tgmath_real_type (Val3)) 0)) Fct, (Val1, Val2, Val3)) (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0 + (__tgmath_real_type (Val3)) 0)) __tgml(Fct) (Val1, Val2, Val3) : (sizeof (+(Val1)) == sizeof (double) || sizeof (+(Val2)) == sizeof (double) || sizeof (+(Val3)) == sizeof (double) || __builtin_classify_type (Val1) != 8 || __builtin_classify_type (Val2) != 8 || __builtin_classify_type (Val3) != 8) ? (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0 + (__tgmath_real_type (Val3)) 0)) Fct (Val1, Val2, Val3) : (__typeof ((__tgmath_real_type (Val1)) 0 + (__tgmath_real_type (Val2)) 0 + (__tgmath_real_type (Val3)) 0)) Fct ##f (Val1, Val2, Val3)))
#define __TGMATH_TERNARY_FIRST_REAL_RET_ONLY(Val1,Val2,Val3,Fct) (__extension__ ((sizeof (+(Val1)) == sizeof (double) || __builtin_classify_type (Val1) != 8) ? Fct (Val1, Val2, Val3) : (sizeof (+(Val1)) == sizeof (float)) ? Fct ##f (Val1, Val2, Val3) : __TGMATH_F128 ((Val1), Fct, (Val1, Val2, Val3)) __tgml(Fct) (Val1, Val2, Val3)))
#define __TGMATH_UNARY_REAL_IMAG(Val,Fct,Cfct) (__extension__ ((sizeof (+__real__ (Val)) == sizeof (double) || __builtin_classify_type (__real__ (Val)) != 8) ? (__expr_is_real (Val) ? (__tgmath_complex_type (Val)) Fct (Val) : (__tgmath_complex_type (Val)) Cfct (Val)) : (sizeof (+__real__ (Val)) == sizeof (float)) ? (__expr_is_real (Val) ? (__tgmath_complex_type (Val)) Fct ##f (Val) : (__tgmath_complex_type (Val)) Cfct ##f (Val)) : __TGMATH_CF128 ((Val), (__tgmath_complex_type (Val)) Fct, (__tgmath_complex_type (Val)) Cfct, (Val)) (__expr_is_real (Val) ? (__tgmath_complex_type (Val)) __tgml(Fct) (Val) : (__tgmath_complex_type (Val)) __tgml(Cfct) (Val))))
#define __TGMATH_UNARY_IMAG(Val,Cfct) (__extension__ ((sizeof (+__real__ (Val)) == sizeof (double) || __builtin_classify_type (__real__ (Val)) != 8) ? (__typeof__ ((__tgmath_real_type (Val)) 0 + _Complex_I)) Cfct (Val) : (sizeof (+__real__ (Val)) == sizeof (float)) ? (__typeof__ ((__tgmath_real_type (Val)) 0 + _Complex_I)) Cfct ##f (Val) : __TGMATH_F128 (__real__ (Val), (__typeof__ ((__tgmath_real_type (Val)) 0 + _Complex_I)) Cfct, (Val)) (__typeof__ ((__tgmath_real_type (Val)) 0 + _Complex_I)) __tgml(Cfct) (Val)))
#define __TGMATH_UNARY_REAL_IMAG_RET_REAL(Val,Fct,Cfct) (__extension__ ((sizeof (+__real__ (Val)) == sizeof (double) || __builtin_classify_type (__real__ (Val)) != 8) ? (__expr_is_real (Val) ? (__typeof__ (__real__ (__tgmath_real_type (Val)) 0)) Fct (Val) : (__typeof__ (__real__ (__tgmath_real_type (Val)) 0)) Cfct (Val)) : (sizeof (+__real__ (Val)) == sizeof (float)) ? (__expr_is_real (Val) ? (__typeof__ (__real__ (__tgmath_real_type (Val)) 0)) Fct ##f (Val) : (__typeof__ (__real__ (__tgmath_real_type (Val)) 0)) Cfct ##f (Val)) : __TGMATH_CF128 ((Val), (__typeof__ (__real__ (__tgmath_real_type (Val)) 0)) Fct, (__typeof__ (__real__ (__tgmath_real_type (Val)) 0)) Cfct, (Val)) (__expr_is_real (Val) ? (__typeof__ (__real__ (__tgmath_real_type (Val)) 0)) __tgml(Fct) (Val) : (__typeof__ (__real__ (__tgmath_real_type (Val)) 0)) __tgml(Cfct) (Val))))
#define __TGMATH_UNARY_REAL_IMAG_RET_REAL_SAME(Val,Cfct) __TGMATH_UNARY_REAL_IMAG_RET_REAL ((Val), Cfct, Cfct)
#define __TGMATH_BINARY_REAL_IMAG(Val1,Val2,Fct,Cfct) (__extension__ ((sizeof (__real__ (Val1) + __real__ (Val2)) > sizeof (double) && __builtin_classify_type (__real__ (Val1) + __real__ (Val2)) == 8) ? __TGMATH_CF128 ((Val1) + (Val2), (__typeof ((__tgmath_complex_type (Val1)) 0 + (__tgmath_complex_type (Val2)) 0)) Fct, (__typeof ((__tgmath_complex_type (Val1)) 0 + (__tgmath_complex_type (Val2)) 0)) Cfct, (Val1, Val2)) (__expr_is_real ((Val1) + (Val2)) ? (__typeof ((__tgmath_complex_type (Val1)) 0 + (__tgmath_complex_type (Val2)) 0)) __tgml(Fct) (Val1, Val2) : (__typeof ((__tgmath_complex_type (Val1)) 0 + (__tgmath_complex_type (Val2)) 0)) __tgml(Cfct) (Val1, Val2)) : (sizeof (+__real__ (Val1)) == sizeof (double) || sizeof (+__real__ (Val2)) == sizeof (double) || __builtin_classify_type (__real__ (Val1)) != 8 || __builtin_classify_type (__real__ (Val2)) != 8) ? (__expr_is_real ((Val1) + (Val2)) ? (__typeof ((__tgmath_complex_type (Val1)) 0 + (__tgmath_complex_type (Val2)) 0)) Fct (Val1, Val2) : (__typeof ((__tgmath_complex_type (Val1)) 0 + (__tgmath_complex_type (Val2)) 0)) Cfct (Val1, Val2)) : (__expr_is_real ((Val1) + (Val2)) ? (__typeof ((__tgmath_complex_type (Val1)) 0 + (__tgmath_complex_type (Val2)) 0)) Fct ##f (Val1, Val2) : (__typeof ((__tgmath_complex_type (Val1)) 0 + (__tgmath_complex_type (Val2)) 0)) Cfct ##f (Val1, Val2))))
# endif
#else
# error "Unsupported compiler; you cannot use <tgmath.h>"
#endif
#define acos(Val) __TGMATH_UNARY_REAL_IMAG (Val, acos, cacos)
#define asin(Val) __TGMATH_UNARY_REAL_IMAG (Val, asin, casin)
#define atan(Val) __TGMATH_UNARY_REAL_IMAG (Val, atan, catan)
#define atan2(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, atan2)
#define cos(Val) __TGMATH_UNARY_REAL_IMAG (Val, cos, ccos)
#define sin(Val) __TGMATH_UNARY_REAL_IMAG (Val, sin, csin)
#define tan(Val) __TGMATH_UNARY_REAL_IMAG (Val, tan, ctan)
#define acosh(Val) __TGMATH_UNARY_REAL_IMAG (Val, acosh, cacosh)
#define asinh(Val) __TGMATH_UNARY_REAL_IMAG (Val, asinh, casinh)
#define atanh(Val) __TGMATH_UNARY_REAL_IMAG (Val, atanh, catanh)
#define cosh(Val) __TGMATH_UNARY_REAL_IMAG (Val, cosh, ccosh)
#define sinh(Val) __TGMATH_UNARY_REAL_IMAG (Val, sinh, csinh)
#define tanh(Val) __TGMATH_UNARY_REAL_IMAG (Val, tanh, ctanh)
#define exp(Val) __TGMATH_UNARY_REAL_IMAG (Val, exp, cexp)
#define frexp(Val1,Val2) __TGMATH_BINARY_FIRST_REAL_ONLY (Val1, Val2, frexp)
#define ldexp(Val1,Val2) __TGMATH_BINARY_FIRST_REAL_ONLY (Val1, Val2, ldexp)
#define log(Val) __TGMATH_UNARY_REAL_IMAG (Val, log, clog)
#ifdef __USE_GNU
#define log10(Val) __TGMATH_UNARY_REAL_IMAG (Val, log10, clog10)
#else
#define log10(Val) __TGMATH_UNARY_REAL_ONLY (Val, log10)
#endif
#define expm1(Val) __TGMATH_UNARY_REAL_ONLY (Val, expm1)
#define log1p(Val) __TGMATH_UNARY_REAL_ONLY (Val, log1p)
#define logb(Val) __TGMATH_UNARY_REAL_ONLY (Val, logb)
#define exp2(Val) __TGMATH_UNARY_REAL_ONLY (Val, exp2)
#define log2(Val) __TGMATH_UNARY_REAL_ONLY (Val, log2)
#define pow(Val1,Val2) __TGMATH_BINARY_REAL_IMAG (Val1, Val2, pow, cpow)
#define sqrt(Val) __TGMATH_UNARY_REAL_IMAG (Val, sqrt, csqrt)
#define hypot(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, hypot)
#define cbrt(Val) __TGMATH_UNARY_REAL_ONLY (Val, cbrt)
#define ceil(Val) __TGMATH_UNARY_REAL_ONLY (Val, ceil)
#define fabs(Val) __TGMATH_UNARY_REAL_IMAG_RET_REAL (Val, fabs, cabs)
#define floor(Val) __TGMATH_UNARY_REAL_ONLY (Val, floor)
#define fmod(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, fmod)
#define nearbyint(Val) __TGMATH_UNARY_REAL_ONLY (Val, nearbyint)
#define round(Val) __TGMATH_UNARY_REAL_ONLY (Val, round)
#define trunc(Val) __TGMATH_UNARY_REAL_ONLY (Val, trunc)
#define remquo(Val1,Val2,Val3) __TGMATH_TERNARY_FIRST_SECOND_REAL_ONLY (Val1, Val2, Val3, remquo)
#define lrint(Val) __TGMATH_UNARY_REAL_RET_ONLY (Val, lrint)
#define llrint(Val) __TGMATH_UNARY_REAL_RET_ONLY (Val, llrint)
#define lround(Val) __TGMATH_UNARY_REAL_RET_ONLY (Val, lround)
#define llround(Val) __TGMATH_UNARY_REAL_RET_ONLY (Val, llround)
#define copysign(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, copysign)
#define erf(Val) __TGMATH_UNARY_REAL_ONLY (Val, erf)
#define erfc(Val) __TGMATH_UNARY_REAL_ONLY (Val, erfc)
#define tgamma(Val) __TGMATH_UNARY_REAL_ONLY (Val, tgamma)
#define lgamma(Val) __TGMATH_UNARY_REAL_ONLY (Val, lgamma)
#define rint(Val) __TGMATH_UNARY_REAL_ONLY (Val, rint)
#if __GLIBC_USE (IEC_60559_BFP_EXT)
#define nextdown(Val) __TGMATH_UNARY_REAL_ONLY (Val, nextdown)
#define nextup(Val) __TGMATH_UNARY_REAL_ONLY (Val, nextup)
#endif
#define nextafter(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, nextafter)
#define nexttoward(Val1,Val2) __TGMATH_BINARY_FIRST_REAL_STD_ONLY (Val1, Val2, nexttoward)
#define remainder(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, remainder)
#ifdef __USE_MISC
#define scalb(Val1,Val2) __TGMATH_BINARY_REAL_STD_ONLY (Val1, Val2, scalb)
#endif
#define scalbn(Val1,Val2) __TGMATH_BINARY_FIRST_REAL_ONLY (Val1, Val2, scalbn)
#define scalbln(Val1,Val2) __TGMATH_BINARY_FIRST_REAL_ONLY (Val1, Val2, scalbln)
#define ilogb(Val) __TGMATH_UNARY_REAL_RET_ONLY (Val, ilogb)
#define fdim(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, fdim)
#define fmax(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, fmax)
#define fmin(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, fmin)
#define fma(Val1,Val2,Val3) __TGMATH_TERNARY_REAL_ONLY (Val1, Val2, Val3, fma)
#if __GLIBC_USE (IEC_60559_BFP_EXT)
#define roundeven(Val) __TGMATH_UNARY_REAL_ONLY (Val, roundeven)
#define fromfp(Val1,Val2,Val3) __TGMATH_TERNARY_FIRST_REAL_RET_ONLY (Val1, Val2, Val3, fromfp)
#define ufromfp(Val1,Val2,Val3) __TGMATH_TERNARY_FIRST_REAL_RET_ONLY (Val1, Val2, Val3, ufromfp)
#define fromfpx(Val1,Val2,Val3) __TGMATH_TERNARY_FIRST_REAL_RET_ONLY (Val1, Val2, Val3, fromfpx)
#define ufromfpx(Val1,Val2,Val3) __TGMATH_TERNARY_FIRST_REAL_RET_ONLY (Val1, Val2, Val3, ufromfpx)
#define llogb(Val) __TGMATH_UNARY_REAL_RET_ONLY (Val, llogb)
#define fmaxmag(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, fmaxmag)
#define fminmag(Val1,Val2) __TGMATH_BINARY_REAL_ONLY (Val1, Val2, fminmag)
#define totalorder(Val1,Val2) __TGMATH_BINARY_REAL_RET_ONLY (Val1, Val2, totalorder)
#define totalordermag(Val1,Val2) __TGMATH_BINARY_REAL_RET_ONLY (Val1, Val2, totalordermag)
#endif
#define carg(Val) __TGMATH_UNARY_REAL_IMAG_RET_REAL_SAME (Val, carg)
#define conj(Val) __TGMATH_UNARY_IMAG (Val, conj)
#define cproj(Val) __TGMATH_UNARY_IMAG (Val, cproj)
#define cimag(Val) __TGMATH_UNARY_REAL_IMAG_RET_REAL_SAME (Val, cimag)
#define creal(Val) __TGMATH_UNARY_REAL_IMAG_RET_REAL_SAME (Val, creal)
#endif
