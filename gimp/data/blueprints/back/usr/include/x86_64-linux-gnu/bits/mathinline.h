// GGHASH:VRFshHxJaN_CI6ji.dDTuvPjhVGp1Evst4Du41fEOJaE00006a2c
#ifndef _MATH_H
# error "Never use <bits/mathinline.h> directly; include <math.h> instead."
#endif
#ifndef __extern_always_inline
#define __MATH_INLINE __inline
#else
#define __MATH_INLINE __extern_always_inline
#endif
#if __GNUC_PREREQ (2, 8)
# if !__GNUC_PREREQ (3, 4) && !defined __NO_MATH_INLINES && defined __OPTIMIZE__
# ifdef __USE_ISOC99
# ifdef __SSE_MATH__
# endif
# ifdef __SSE2_MATH__
# endif
# ifdef __x86_64__
# endif
# if defined __FINITE_MATH_ONLY__ && __FINITE_MATH_ONLY__ > 0 && defined __SSE2_MATH__
# ifdef __AVX__
# else
# endif
# ifdef __AVX__
# else
# endif
# ifdef __AVX__
# else
# endif
# ifdef __AVX__
# else
# endif
# endif
# endif
# if defined __SSE4_1__ && defined __SSE2_MATH__
# if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
# ifdef __USE_ISOC99
# endif
# endif
# endif
# endif
#endif
#if !defined __SSE2_MATH__ && !defined __x86_64__
# if ((!defined __NO_MATH_INLINES || defined __LIBC_INTERNAL_MATH_INLINES) && defined __OPTIMIZE__)
#undef math_errhandling
# ifdef __USE_ISOC99
#define __inline_mathop(func,op) __inline_mathop_ (double, func, op) __inline_mathop_ (float, __CONCAT(func,f), op) __inline_mathop_ (long double, __CONCAT(func,l), op)
#define __inline_mathopNP(func,op) __inline_mathopNP_ (double, func, op) __inline_mathopNP_ (float, __CONCAT(func,f), op) __inline_mathopNP_ (long double, __CONCAT(func,l), op)
# else
#define __inline_mathop(func,op) __inline_mathop_ (double, func, op)
#define __inline_mathopNP(func,op) __inline_mathopNP_ (double, func, op)
# endif
#define __inline_mathop_(float_type,func,op) __inline_mathop_decl_ (float_type, func, op, "0" (__x))
#define __inline_mathopNP_(float_type,func,op) __inline_mathop_declNP_ (float_type, func, op, "0" (__x))
# ifdef __USE_ISOC99
#define __inline_mathop_decl(func,op,params...) __inline_mathop_decl_ (double, func, op, params) __inline_mathop_decl_ (float, __CONCAT(func,f), op, params) __inline_mathop_decl_ (long double, __CONCAT(func,l), op, params)
#define __inline_mathop_declNP(func,op,params...) __inline_mathop_declNP_ (double, func, op, params) __inline_mathop_declNP_ (float, __CONCAT(func,f), op, params) __inline_mathop_declNP_ (long double, __CONCAT(func,l), op, params)
# else
#define __inline_mathop_decl(func,op,params...) __inline_mathop_decl_ (double, func, op, params)
#define __inline_mathop_declNP(func,op,params...) __inline_mathop_declNP_ (double, func, op, params)
# endif
#define __inline_mathop_decl_(float_type,func,op,params...) __MATH_INLINE float_type func (float_type) __THROW; __inline_mathop_declNP_ (float_type, func, op, params)
#define __inline_mathop_declNP_(float_type,func,op,params...) __MATH_INLINE float_type __NTH (func (float_type __x)) { register float_type __result; __asm __volatile__ (op : "=t" (__result) : params); return __result; }
# ifdef __USE_ISOC99
#define __inline_mathcode(func,arg,code) __inline_mathcode_ (double, func, arg, code) __inline_mathcode_ (float, __CONCAT(func,f), arg, code) __inline_mathcode_ (long double, __CONCAT(func,l), arg, code)
#define __inline_mathcodeNP(func,arg,code) __inline_mathcodeNP_ (double, func, arg, code) __inline_mathcodeNP_ (float, __CONCAT(func,f), arg, code) __inline_mathcodeNP_ (long double, __CONCAT(func,l), arg, code)
#define __inline_mathcode2(func,arg1,arg2,code) __inline_mathcode2_ (double, func, arg1, arg2, code) __inline_mathcode2_ (float, __CONCAT(func,f), arg1, arg2, code) __inline_mathcode2_ (long double, __CONCAT(func,l), arg1, arg2, code)
#define __inline_mathcodeNP2(func,arg1,arg2,code) __inline_mathcodeNP2_ (double, func, arg1, arg2, code) __inline_mathcodeNP2_ (float, __CONCAT(func,f), arg1, arg2, code) __inline_mathcodeNP2_ (long double, __CONCAT(func,l), arg1, arg2, code)
#define __inline_mathcode3(func,arg1,arg2,arg3,code) __inline_mathcode3_ (double, func, arg1, arg2, arg3, code) __inline_mathcode3_ (float, __CONCAT(func,f), arg1, arg2, arg3, code) __inline_mathcode3_ (long double, __CONCAT(func,l), arg1, arg2, arg3, code)
#define __inline_mathcodeNP3(func,arg1,arg2,arg3,code) __inline_mathcodeNP3_ (double, func, arg1, arg2, arg3, code) __inline_mathcodeNP3_ (float, __CONCAT(func,f), arg1, arg2, arg3, code) __inline_mathcodeNP3_ (long double, __CONCAT(func,l), arg1, arg2, arg3, code)
# else
#define __inline_mathcode(func,arg,code) __inline_mathcode_ (double, func, (arg), code)
#define __inline_mathcodeNP(func,arg,code) __inline_mathcodeNP_ (double, func, (arg), code)
#define __inline_mathcode2(func,arg1,arg2,code) __inline_mathcode2_ (double, func, arg1, arg2, code)
#define __inline_mathcodeNP2(func,arg1,arg2,code) __inline_mathcodeNP2_ (double, func, arg1, arg2, code)
#define __inline_mathcode3(func,arg1,arg2,arg3,code) __inline_mathcode3_ (double, func, arg1, arg2, arg3, code)
#define __inline_mathcodeNP3(func,arg1,arg2,arg3,code) __inline_mathcodeNP3_ (double, func, arg1, arg2, arg3, code)
# endif
#define __inline_mathcode_(float_type,func,arg,code) __MATH_INLINE float_type func (float_type) __THROW; __inline_mathcodeNP_(float_type, func, arg, code)
#define __inline_mathcodeNP_(float_type,func,arg,code) __MATH_INLINE float_type __NTH (func (float_type arg)) { code; }
#define __inline_mathcode2_(float_type,func,arg1,arg2,code) __MATH_INLINE float_type func (float_type, float_type) __THROW; __inline_mathcodeNP2_ (float_type, func, arg1, arg2, code)
#define __inline_mathcodeNP2_(float_type,func,arg1,arg2,code) __MATH_INLINE float_type __NTH (func (float_type arg1, float_type arg2)) { code; }
#define __inline_mathcode3_(float_type,func,arg1,arg2,arg3,code) __MATH_INLINE float_type func (float_type, float_type, float_type) __THROW; __inline_mathcodeNP3_(float_type, func, arg1, arg2, arg3, code)
#define __inline_mathcodeNP3_(float_type,func,arg1,arg2,arg3,code) __MATH_INLINE float_type __NTH (func (float_type arg1, float_type arg2, float_type arg3)) { code; }
# endif
# if !defined __NO_MATH_INLINES && defined __OPTIMIZE__
# ifdef __FAST_MATH__
# ifdef __USE_GNU
#define __sincos_code register long double __cosr; register long double __sinr; register unsigned int __swtmp; __asm __volatile__ ("fsincos\n\t" "fnstsw	%w2\n\t" "testl	$0x400, %2\n\t" "jz	1f\n\t" "fldpi\n\t" "fadd	%%st(0)\n\t" "fxch	%%st(1)\n\t" "2: fprem1\n\t" "fnstsw	%w2\n\t" "testl	$0x400, %2\n\t" "jnz	2b\n\t" "fstp	%%st(1)\n\t" "fsincos\n\t" "1:" : "=t" (__cosr), "=u" (__sinr), "=a" (__swtmp) : "0" (__x)); *__sinx = __sinr; *__cosx = __cosr
# endif
# if __GNUC_PREREQ (3, 5)
#define __expm1_code register long double __temp; __temp = __builtin_expm1l (__x); return __temp ? __temp : __x
# else
#define __expm1_code register long double __value; register long double __exponent; register long double __temp; __asm __volatile__ ("fldl2e			# e^x - 1 = 2^(x * log2(e)) - 1\n\t" "fmul	%%st(1)		# x * log2(e)\n\t" "fst	%%st(1)\n\t" "frndint			# int(x * log2(e))\n\t" "fxch\n\t" "fsub	%%st(1)		# fract(x * log2(e))\n\t" "f2xm1			# 2^(fract(x * log2(e))) - 1\n\t" "fscale			# 2^(x * log2(e)) - 2^(int(x * log2(e)))\n\t" : "=t" (__value), "=u" (__exponent) : "0" (__x)); __asm __volatile__ ("fscale			# 2^int(x * log2(e))\n\t" : "=t" (__temp) : "0" (1.0), "u" (__exponent)); __temp -= 1.0; __temp += __value; return __temp ? __temp : __x
# endif
# if __GNUC_PREREQ (3, 4)
# else
#define __exp_code register long double __value; register long double __exponent; __asm __volatile__ ("fldl2e			# e^x = 2^(x * log2(e))\n\t" "fmul	%%st(1)		# x * log2(e)\n\t" "fst	%%st(1)\n\t" "frndint			# int(x * log2(e))\n\t" "fxch\n\t" "fsub	%%st(1)		# fract(x * log2(e))\n\t" "f2xm1			# 2^(fract(x * log2(e))) - 1\n\t" : "=t" (__value), "=u" (__exponent) : "0" (__x)); __value += 1.0; __asm __volatile__ ("fscale" : "=t" (__value) : "0" (__value), "u" (__exponent)); return __value
# endif
# if !__GNUC_PREREQ (3, 5)
# endif
# endif
# if __GNUC_PREREQ (3, 4)
# else
#define __atan2_code register long double __value; __asm __volatile__ ("fpatan" : "=t" (__value) : "0" (__x), "u" (__y) : "st(1)"); return __value
# ifdef __FAST_MATH__
# endif
# endif
# if defined __FAST_MATH__ && !__GNUC_PREREQ (3, 5)
# endif
# ifdef __FAST_MATH__
# if !__GNUC_PREREQ (3,3)
#define __libc_sqrtl(n) __sqrtl (n)
# else
#define __libc_sqrtl(n) __builtin_sqrtl (n)
# endif
# endif
# if __GNUC_PREREQ (2, 8)
# ifdef __USE_ISOC99
# endif
# else
# endif
# ifdef __FAST_MATH__
# if !__GNUC_PREREQ (3, 4)
# endif
# if !__GNUC_PREREQ (3, 5)
# endif
# if !__GNUC_PREREQ (3, 4)
# endif
# endif
# ifdef __FAST_MATH__
# endif
# ifdef __FAST_MATH__
#define __ldexp_code register long double __value; __asm __volatile__ ("fscale" : "=t" (__value) : "0" (__x), "u" ((long double) __y)); return __value
# endif
# ifdef __USE_ISOC99
# ifdef __FAST_MATH__
#define __M_SQRT2 1.41421356237309504880L
# if !__GNUC_PREREQ (3, 5)
# endif
# if !__GNUC_PREREQ (3, 5)
# endif
# endif
# endif
# ifdef __USE_ISOC99
# ifdef __FAST_MATH__
# if !__GNUC_PREREQ (3, 5)
# endif
# endif
#define __lrint_code long int __lrintres; __asm__ __volatile__ ("fistpl %0" : "=m" (__lrintres) : "t" (__x) : "st"); return __lrintres
#undef __lrint_code
#define __llrint_code long long int __llrintres; __asm__ __volatile__ ("fistpll %0" : "=m" (__llrintres) : "t" (__x) : "st"); return __llrintres
#undef __llrint_code
# endif
# ifdef __USE_MISC
# if defined __FAST_MATH__ && !__GNUC_PREREQ (3, 5)
# endif
# endif
#undef __atan2_code
# ifdef __FAST_MATH__
#undef __expm1_code
#undef __exp_code
#undef __sincos_code
# endif
# endif
# ifdef __LIBC_INTERNAL_MATH_INLINES
# endif
#endif
