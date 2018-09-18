// GGHASH:V.jrEiDvDcZFIbuMu8QUNWsFdSt0TEiJmdHIXFcm7a3s000044d6
#ifndef _SYS_CDEFS_H
#define _SYS_CDEFS_H 1
#ifndef _FEATURES_H
# include <features.h>
#endif
#if defined __GNUC__ && !defined __STDC__
# error "You need a ISO C conforming compiler to use the glibc headers"
#endif
#undef __P
#undef __PMT
#ifdef __GNUC__
# if __GNUC_PREREQ (4, 6) && !defined _LIBC
#define __LEAF , __leaf__
#define __LEAF_ATTR __attribute__ ((__leaf__))
# else
#define __LEAF 
#define __LEAF_ATTR 
# endif
# if !defined __cplusplus && __GNUC_PREREQ (3, 3)
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define __THROWNL __attribute__ ((__nothrow__))
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define __NTHNL(fct) __attribute__ ((__nothrow__)) fct
# else
# if defined __cplusplus && __GNUC_PREREQ (2,8)
#define __THROW throw ()
#define __THROWNL throw ()
#define __NTH(fct) __LEAF_ATTR fct throw ()
#define __NTHNL(fct) fct throw ()
# else
#define __THROW 
#define __THROWNL 
#define __NTH(fct) fct
#define __NTHNL(fct) fct
# endif
# endif
#else
#define __inline 
#define __THROW 
#define __THROWNL 
#define __NTH(fct) fct
#endif
#if defined __clang__ && defined __has_extension
#define __glibc_clang_has_extension(ext) __has_extension (ext)
#else
#define __glibc_clang_has_extension(ext) 0
#endif
#define __P(args) args
#define __PMT(args) args
#define __CONCAT(x,y) x ## y
#define __STRING(x) #x
#define __ptr_t void *
#ifdef __cplusplus
#define __BEGIN_DECLS extern "C" {
#define __END_DECLS }
#else
#define __BEGIN_DECLS 
#define __END_DECLS 
#endif
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#if __GNUC_PREREQ (4,3)
#define __warndecl(name,msg) extern void name (void) __attribute__((__warning__ (msg)))
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#else
#define __warndecl(name,msg) extern void name (void)
#define __warnattr(msg) 
#define __errordecl(name,msg) extern void name (void)
#endif
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#define __flexarr []
#define __glibc_c99_flexarr_available 1
#elif __GNUC_PREREQ (2,97)
#define __flexarr []
#define __glibc_c99_flexarr_available 1
#elif defined __GNUC__
#define __flexarr [0]
#define __glibc_c99_flexarr_available 1
#else
#define __flexarr [1]
#define __glibc_c99_flexarr_available 0
#endif
#if defined __GNUC__ && __GNUC__ >= 2
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
# ifdef __cplusplus
#define __REDIRECT_NTH(name,proto,alias) name proto __THROW __asm__ (__ASMNAME (#alias))
#define __REDIRECT_NTHNL(name,proto,alias) name proto __THROWNL __asm__ (__ASMNAME (#alias))
# else
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
# endif
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#endif
#if !defined __GNUC__ || __GNUC__ < 2
#define __attribute__(xyz) 
#endif
#if __GNUC_PREREQ (2,96)
#define __attribute_malloc__ __attribute__ ((__malloc__))
#else
#define __attribute_malloc__ 
#endif
#if __GNUC_PREREQ (4, 3)
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#else
#define __attribute_alloc_size__(params) 
#endif
#if __GNUC_PREREQ (2,96)
#define __attribute_pure__ __attribute__ ((__pure__))
#else
#define __attribute_pure__ 
#endif
#if __GNUC_PREREQ (2,5)
#define __attribute_const__ __attribute__ ((__const__))
#else
#define __attribute_const__ 
#endif
#if __GNUC_PREREQ (3,1)
#define __attribute_used__ __attribute__ ((__used__))
#define __attribute_noinline__ __attribute__ ((__noinline__))
#else
#define __attribute_used__ __attribute__ ((__unused__))
#define __attribute_noinline__ 
#endif
#if __GNUC_PREREQ (3,2)
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#else
#define __attribute_deprecated__ 
#endif
#if __GNUC_PREREQ (4,5) || __glibc_clang_has_extension (__attribute_deprecated_with_message__)
#define __attribute_deprecated_msg__(msg) __attribute__ ((__deprecated__ (msg)))
#else
#define __attribute_deprecated_msg__(msg) __attribute_deprecated__
#endif
#if __GNUC_PREREQ (2,8)
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#else
#define __attribute_format_arg__(x) 
#endif
#if __GNUC_PREREQ (2,97)
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#else
#define __attribute_format_strfmon__(a,b) 
#endif
#if __GNUC_PREREQ (3,3)
#define __nonnull(params) __attribute__ ((__nonnull__ params))
#else
#define __nonnull(params) 
#endif
#if __GNUC_PREREQ (3,4)
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
# if __USE_FORTIFY_LEVEL > 0
#define __wur __attribute_warn_unused_result__
# endif
#else
#define __attribute_warn_unused_result__ 
#endif
#ifndef __wur
#define __wur 
#endif
#if __GNUC_PREREQ (3,2)
#undef __always_inline
#define __always_inline __inline __attribute__ ((__always_inline__))
#else
#undef __always_inline
#define __always_inline __inline
#endif
#if __GNUC_PREREQ (4,3)
#define __attribute_artificial__ __attribute__ ((__artificial__))
#else
#define __attribute_artificial__ 
#endif
#if (!defined __cplusplus || __GNUC_PREREQ (4,3) || (defined __clang__ && (defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__)))
# if defined __GNUC_STDC_INLINE__ || defined __cplusplus
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
# else
#define __extern_inline extern __inline
#define __extern_always_inline extern __always_inline
# endif
#endif
#ifdef __extern_always_inline
#define __fortify_function __extern_always_inline __attribute_artificial__
#endif
#if __GNUC_PREREQ (4,3)
#define __va_arg_pack() __builtin_va_arg_pack ()
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#endif
#if !__GNUC_PREREQ (2,8)
#define __extension__ 
#endif
#if !__GNUC_PREREQ (2,92)
#define __restrict 
#endif
#if __GNUC_PREREQ (3,1) && !defined __GNUG__
#define __restrict_arr __restrict
#else
# ifdef __GNUC__
#define __restrict_arr 
# else
# if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#define __restrict_arr restrict
# else
#define __restrict_arr 
# endif
# endif
#endif
#if __GNUC__ >= 3
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#else
#define __glibc_unlikely(cond) (cond)
#define __glibc_likely(cond) (cond)
#endif
#if (!defined _Noreturn && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) < 201112 && !__GNUC_PREREQ (4,7))
# if __GNUC_PREREQ (2,8)
#define _Noreturn __attribute__ ((__noreturn__))
# else
#define _Noreturn 
# endif
#endif
#if __GNUC_PREREQ (8, 0)
#define __attribute_nonstring__ __attribute__ ((__nonstring__))
#else
#define __attribute_nonstring__ 
#endif
#if (!defined _Static_assert && !defined __cplusplus && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) < 201112 && (!__GNUC_PREREQ (4, 6) || defined __STRICT_ANSI__))
#define _Static_assert(expr,diagnostic) extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (expr) ? 2 : -1; })]
#endif
#include <bits/wordsize.h>
#include <bits/long-double.h>
#if defined __LONG_DOUBLE_MATH_OPTIONAL && defined __NO_LONG_DOUBLE_MATH
#define __LDBL_COMPAT 1
# ifdef __REDIRECT
#define __LDBL_REDIR1(name,proto,alias) __REDIRECT (name, proto, alias)
#define __LDBL_REDIR(name,proto) __LDBL_REDIR1 (name, proto, __nldbl_ ##name)
#define __LDBL_REDIR1_NTH(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __LDBL_REDIR_NTH(name,proto) __LDBL_REDIR1_NTH (name, proto, __nldbl_ ##name)
#define __LDBL_REDIR1_DECL(name,alias) extern __typeof (name) name __asm (__ASMNAME (#alias));
#define __LDBL_REDIR_DECL(name) extern __typeof (name) name __asm (__ASMNAME ("__nldbl_" #name));
#define __REDIRECT_LDBL(name,proto,alias) __LDBL_REDIR1 (name, proto, __nldbl_ ##alias)
#define __REDIRECT_NTH_LDBL(name,proto,alias) __LDBL_REDIR1_NTH (name, proto, __nldbl_ ##alias)
# endif
#endif
#if !defined __LDBL_COMPAT || !defined __REDIRECT
#define __LDBL_REDIR1(name,proto,alias) name proto
#define __LDBL_REDIR(name,proto) name proto
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define __LDBL_REDIR_DECL(name) 
# ifdef __REDIRECT
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
# endif
#endif
#if __GNUC_PREREQ (4,8) || __glibc_clang_prereq (3,5)
#define __glibc_macro_warning1(message) _Pragma (#message)
#define __glibc_macro_warning(message) __glibc_macro_warning1 (GCC warning message)
#else
#define __glibc_macro_warning(msg) 
#endif
#if !defined __cplusplus && (__GNUC_PREREQ (4, 9) || __glibc_clang_has_extension (c_generic_selections) || (!defined __GNUC__ && defined __STDC_VERSION__ && __STDC_VERSION__ >= 201112L))
#define __HAVE_GENERIC_SELECTION 1
#else
#define __HAVE_GENERIC_SELECTION 0
#endif
#endif
