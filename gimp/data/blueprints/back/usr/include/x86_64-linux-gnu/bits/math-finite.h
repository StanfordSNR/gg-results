// GGHASH:VWN8my5j4jouS.hEQB2RHpuPSo4cO83ESiQ2_UOQ.ELM000014fe
#ifndef _MATH_H
# error "Never use <bits/math-finite.h> directly; include <math.h> instead."
#endif
#define __REDIRFROM(...) __REDIRFROM_X(__VA_ARGS__)
#define __REDIRTO(...) __REDIRTO_X(__VA_ARGS__)
#define __MATH_REDIRCALL_X(from,args,to) extern _Mdouble_ __REDIRECT_NTH (from, args, to)
#define __MATH_REDIRCALL(function,reentrant,args) __MATH_REDIRCALL_X (__REDIRFROM (function, reentrant), args, __REDIRTO (function, reentrant))
#define __MATH_REDIRCALL_2(from,reentrant,args,to) __MATH_REDIRCALL_X (__REDIRFROM (from, reentrant), args, __REDIRTO (to, reentrant))
#define __MATH_REDIRCALL_INTERNAL(function,reentrant,args) __MATH_REDIRCALL_X (__REDIRFROM (__CONCAT (__, function), __CONCAT (reentrant, _finite)), args, __REDIRTO (function, _r))
#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
#endif
#if __GLIBC_USE (IEC_60559_FUNCS_EXT)
#endif
#ifdef __USE_ISOC99
#endif
#if defined __USE_XOPEN || defined __USE_ISOC99
#endif
#if (__MATH_DECLARING_DOUBLE && (defined __USE_MISC || defined __USE_XOPEN)) || (!__MATH_DECLARING_DOUBLE && defined __USE_MISC)
#endif
#ifdef __USE_MISC
#endif
#if ((defined __USE_XOPEN || defined __USE_ISOC99) && defined __extern_always_inline)
# if defined __USE_MISC || defined __USE_XOPEN
# else
# endif
#endif
#if ((defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)) && defined __extern_always_inline) && !__MATH_DECLARING_FLOATN
#endif
#ifdef __USE_ISOC99
#endif
#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
#endif
#if ((__MATH_DECLARING_DOUBLE && (defined __USE_MISC || (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8))) || (!defined __MATH_DECLARE_LDOUBLE && defined __USE_MISC)) && !__MATH_DECLARING_FLOATN
#endif
#if defined __USE_ISOC99 && defined __extern_always_inline
#endif
#undef __REDIRFROM
#undef __REDIRTO
#undef __MATH_REDIRCALL
#undef __MATH_REDIRCALL_2
#undef __MATH_REDIRCALL_INTERNAL
#undef __MATH_REDIRCALL_X
