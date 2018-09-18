// GGHASH:VpPO91diNC3bLmYsaaDuDWsBQzdujt_c6yss3DjvUz_00000e26e
#ifndef _GLIBCXX_CXX_CONFIG_H
#define _GLIBCXX_CXX_CONFIG_H 1
#define _GLIBCXX_RELEASE 7
#define __GLIBCXX__ 20180415
#ifndef _GLIBCXX_PURE
#define _GLIBCXX_PURE __attribute__ ((__pure__))
#endif
#ifndef _GLIBCXX_CONST
#define _GLIBCXX_CONST __attribute__ ((__const__))
#endif
#ifndef _GLIBCXX_NORETURN
#define _GLIBCXX_NORETURN __attribute__ ((__noreturn__))
#endif
#ifndef _GLIBCXX_NOTHROW
# ifndef __cplusplus
#define _GLIBCXX_NOTHROW __attribute__((__nothrow__))
# endif
#endif
#define _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY 1
#if _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY
#define _GLIBCXX_VISIBILITY(V) __attribute__ ((__visibility__ (#V)))
#else
#define _GLIBCXX_VISIBILITY(V) _GLIBCXX_PSEUDO_VISIBILITY(V)
#endif
#ifndef _GLIBCXX_USE_DEPRECATED
#define _GLIBCXX_USE_DEPRECATED 1
#endif
#if defined(__DEPRECATED) && (__cplusplus >= 201103L)
#define _GLIBCXX_DEPRECATED __attribute__ ((__deprecated__))
#else
#define _GLIBCXX_DEPRECATED 
#endif
#ifndef _GLIBCXX_ABI_TAG_CXX11
#define _GLIBCXX_ABI_TAG_CXX11 __attribute ((__abi_tag__ ("cxx11")))
#endif
#if __cplusplus
#ifndef _GLIBCXX_CONSTEXPR
# if __cplusplus >= 201103L
#define _GLIBCXX_CONSTEXPR constexpr
#define _GLIBCXX_USE_CONSTEXPR constexpr
# else
#define _GLIBCXX_CONSTEXPR 
#define _GLIBCXX_USE_CONSTEXPR const
# endif
#endif
#ifndef _GLIBCXX14_CONSTEXPR
# if __cplusplus >= 201402L
#define _GLIBCXX14_CONSTEXPR constexpr
# else
#define _GLIBCXX14_CONSTEXPR 
# endif
#endif
#ifndef _GLIBCXX17_CONSTEXPR
# if __cplusplus > 201402L
#define _GLIBCXX17_CONSTEXPR constexpr
# else
#define _GLIBCXX17_CONSTEXPR 
# endif
#endif
#ifndef _GLIBCXX17_INLINE
# if __cplusplus > 201402L
#define _GLIBCXX17_INLINE inline
# else
#define _GLIBCXX17_INLINE 
# endif
#endif
#ifndef _GLIBCXX_NOEXCEPT
# if __cplusplus >= 201103L
#define _GLIBCXX_NOEXCEPT noexcept
#define _GLIBCXX_NOEXCEPT_IF(_COND) noexcept(_COND)
#define _GLIBCXX_USE_NOEXCEPT noexcept
#define _GLIBCXX_THROW(_EXC) 
# else
#define _GLIBCXX_NOEXCEPT 
#define _GLIBCXX_NOEXCEPT_IF(_COND) 
#define _GLIBCXX_USE_NOEXCEPT throw()
#define _GLIBCXX_THROW(_EXC) throw(_EXC)
# endif
#endif
#ifndef _GLIBCXX_NOTHROW
#define _GLIBCXX_NOTHROW _GLIBCXX_USE_NOEXCEPT
#endif
#ifndef _GLIBCXX_THROW_OR_ABORT
# if __cpp_exceptions
#define _GLIBCXX_THROW_OR_ABORT(_EXC) (throw (_EXC))
# else
#define _GLIBCXX_THROW_OR_ABORT(_EXC) (__builtin_abort())
# endif
#endif
#if __cpp_noexcept_function_type
#define _GLIBCXX_NOEXCEPT_PARM , bool _NE
#define _GLIBCXX_NOEXCEPT_QUAL noexcept (_NE)
#else
#define _GLIBCXX_NOEXCEPT_PARM 
#define _GLIBCXX_NOEXCEPT_QUAL 
#endif
#define _GLIBCXX_EXTERN_TEMPLATE 1
#if __cplusplus >= 201103L
#endif
#define _GLIBCXX_USE_DUAL_ABI 1
#if ! _GLIBCXX_USE_DUAL_ABI
#undef _GLIBCXX_USE_CXX11_ABI
#endif
#ifndef _GLIBCXX_USE_CXX11_ABI
#define _GLIBCXX_USE_CXX11_ABI 1
#endif
#if _GLIBCXX_USE_CXX11_ABI
#define _GLIBCXX_NAMESPACE_CXX11 __cxx11::
#define _GLIBCXX_BEGIN_NAMESPACE_CXX11 namespace __cxx11 {
#define _GLIBCXX_END_NAMESPACE_CXX11 }
#define _GLIBCXX_DEFAULT_ABI_TAG _GLIBCXX_ABI_TAG_CXX11
#else
#define _GLIBCXX_NAMESPACE_CXX11 
#define _GLIBCXX_BEGIN_NAMESPACE_CXX11 
#define _GLIBCXX_END_NAMESPACE_CXX11 
#define _GLIBCXX_DEFAULT_ABI_TAG 
#endif
#define _GLIBCXX_INLINE_VERSION 0
#if _GLIBCXX_INLINE_VERSION
#if __cplusplus >= 201103L
#if __cplusplus >= 201402L
#if __cplusplus > 201402L
#endif
#endif
#endif
#if __cplusplus > 201402L
#endif
#define _GLIBCXX_BEGIN_NAMESPACE_VERSION namespace __7 {
#define _GLIBCXX_END_NAMESPACE_VERSION }
#else
#define _GLIBCXX_BEGIN_NAMESPACE_VERSION 
#define _GLIBCXX_END_NAMESPACE_VERSION 
#endif
#if defined(_GLIBCXX_DEBUG) || defined(_GLIBCXX_PARALLEL) || defined(_GLIBCXX_PROFILE)
# if _GLIBCXX_INLINE_VERSION
# endif
# if _GLIBCXX_USE_CXX11_ABI
# endif
# ifdef _GLIBCXX_DEBUG
# endif
# ifdef _GLIBCXX_PARALLEL
# endif
# ifdef _GLIBCXX_PROFILE
# endif
# if defined(_GLIBCXX_DEBUG) && defined(_GLIBCXX_PARALLEL)
# error illegal use of multiple inlined namespaces
# endif
# if defined(_GLIBCXX_PROFILE) && defined(_GLIBCXX_DEBUG)
# error illegal use of multiple inlined namespaces
# endif
# if defined(_GLIBCXX_PROFILE) && defined(_GLIBCXX_PARALLEL)
# error illegal use of multiple inlined namespaces
# endif
# if __NO_INLINE__ && !__GXX_WEAK__
# warning currently using inlined namespace mode which may fail without inlining due to lack of weak symbols
# endif
#endif
#if defined(_GLIBCXX_DEBUG) || defined(_GLIBCXX_PROFILE)
#define _GLIBCXX_STD_C __cxx1998
#define _GLIBCXX_BEGIN_NAMESPACE_CONTAINER namespace _GLIBCXX_STD_C { _GLIBCXX_BEGIN_NAMESPACE_VERSION
#define _GLIBCXX_END_NAMESPACE_CONTAINER _GLIBCXX_END_NAMESPACE_VERSION }
#else
#define _GLIBCXX_STD_C std
#define _GLIBCXX_BEGIN_NAMESPACE_CONTAINER _GLIBCXX_BEGIN_NAMESPACE_VERSION
#define _GLIBCXX_END_NAMESPACE_CONTAINER _GLIBCXX_END_NAMESPACE_VERSION
#endif
#ifdef _GLIBCXX_PARALLEL
#define _GLIBCXX_STD_A __cxx1998
#define _GLIBCXX_BEGIN_NAMESPACE_ALGO namespace _GLIBCXX_STD_A { _GLIBCXX_BEGIN_NAMESPACE_VERSION
#define _GLIBCXX_END_NAMESPACE_ALGO _GLIBCXX_END_NAMESPACE_VERSION }
#else
#define _GLIBCXX_STD_A std
#define _GLIBCXX_BEGIN_NAMESPACE_ALGO _GLIBCXX_BEGIN_NAMESPACE_VERSION
#define _GLIBCXX_END_NAMESPACE_ALGO _GLIBCXX_END_NAMESPACE_VERSION
#endif
#undef _GLIBCXX_LONG_DOUBLE_COMPAT
#if defined _GLIBCXX_LONG_DOUBLE_COMPAT && defined __LONG_DOUBLE_128__
#define _GLIBCXX_NAMESPACE_LDBL __gnu_cxx_ldbl128::
#define _GLIBCXX_BEGIN_NAMESPACE_LDBL namespace __gnu_cxx_ldbl128 {
#define _GLIBCXX_END_NAMESPACE_LDBL }
#else
#define _GLIBCXX_NAMESPACE_LDBL 
#define _GLIBCXX_BEGIN_NAMESPACE_LDBL 
#define _GLIBCXX_END_NAMESPACE_LDBL 
#endif
#if _GLIBCXX_USE_CXX11_ABI
#define _GLIBCXX_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_NAMESPACE_CXX11
#define _GLIBCXX_BEGIN_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_BEGIN_NAMESPACE_CXX11
#define _GLIBCXX_END_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_END_NAMESPACE_CXX11
#else
#define _GLIBCXX_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_NAMESPACE_LDBL
#define _GLIBCXX_BEGIN_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_BEGIN_NAMESPACE_LDBL
#define _GLIBCXX_END_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_END_NAMESPACE_LDBL
#endif
#if defined(_GLIBCXX_DEBUG) && !defined(_GLIBCXX_ASSERTIONS)
#define _GLIBCXX_ASSERTIONS 1
#endif
#ifdef _GLIBCXX_ASSERTIONS
#undef _GLIBCXX_EXTERN_TEMPLATE
#define _GLIBCXX_EXTERN_TEMPLATE -1
#endif
#if defined(_GLIBCXX_ASSERTIONS) || defined(_GLIBCXX_PARALLEL) || defined(_GLIBCXX_PARALLEL_ASSERTIONS)
#define __glibcxx_assert_impl(_Condition) do { if (! (_Condition)) std::__replacement_assert(__FILE__, __LINE__, __PRETTY_FUNCTION__, #_Condition); } while (false)
#endif
#if defined(_GLIBCXX_ASSERTIONS)
#define __glibcxx_assert(_Condition) __glibcxx_assert_impl(_Condition)
#else
#define __glibcxx_assert(_Condition) 
#endif
#ifndef _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE
#define _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A) 
#endif
#ifndef _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER
#define _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A) 
#endif
#define _GLIBCXX_BEGIN_EXTERN_C extern "C" {
#define _GLIBCXX_END_EXTERN_C }
#define _GLIBCXX_USE_ALLOCATOR_NEW 1
#else
#define _GLIBCXX_BEGIN_EXTERN_C 
#define _GLIBCXX_END_EXTERN_C 
#endif
#include <bits/os_defines.h>
#include <bits/cpu_defines.h>
#ifndef _GLIBCXX_PSEUDO_VISIBILITY
#define _GLIBCXX_PSEUDO_VISIBILITY(V) 
#endif
#ifndef _GLIBCXX_WEAK_DEFINITION
#define _GLIBCXX_WEAK_DEFINITION 
#endif
#ifndef _GLIBCXX_USE_WEAK_REF
#define _GLIBCXX_USE_WEAK_REF __GXX_WEAK__
#endif
#if __cplusplus >= 201103L && _GLIBCXX_USE_CXX11_ABI && _GLIBCXX_USE_DUAL_ABI && __cpp_transactional_memory >= 201505L && !_GLIBCXX_FULLY_DYNAMIC_STRING && _GLIBCXX_USE_WEAK_REF && _GLIBCXX_USE_ALLOCATOR_NEW
#define _GLIBCXX_TXN_SAFE transaction_safe
#define _GLIBCXX_TXN_SAFE_DYN transaction_safe_dynamic
#else
#define _GLIBCXX_TXN_SAFE 
#define _GLIBCXX_TXN_SAFE_DYN 
#endif
#if __cplusplus > 201402L
#define _GLIBCXX_USE_STD_SPEC_FUNCS 1
#elif __cplusplus >= 201103L && __STDCPP_WANT_MATH_SPEC_FUNCS__ != 0
#define _GLIBCXX_USE_STD_SPEC_FUNCS 1
#endif
#ifdef __FAST_MATH__
#define _GLIBCXX_FAST_MATH 1
#else
#define _GLIBCXX_FAST_MATH 0
#endif
#define __N(msgid) (msgid)
#undef min
#undef max
#if __cplusplus >= 201103L
# ifndef _GLIBCXX_USE_C99_MATH
#define _GLIBCXX_USE_C99_MATH _GLIBCXX11_USE_C99_MATH
# endif
# ifndef _GLIBCXX_USE_C99_COMPLEX
#define _GLIBCXX_USE_C99_COMPLEX _GLIBCXX11_USE_C99_COMPLEX
# endif
# ifndef _GLIBCXX_USE_C99_STDIO
#define _GLIBCXX_USE_C99_STDIO _GLIBCXX11_USE_C99_STDIO
# endif
# ifndef _GLIBCXX_USE_C99_STDLIB
#define _GLIBCXX_USE_C99_STDLIB _GLIBCXX11_USE_C99_STDLIB
# endif
# ifndef _GLIBCXX_USE_C99_WCHAR
#define _GLIBCXX_USE_C99_WCHAR _GLIBCXX11_USE_C99_WCHAR
# endif
#else
# ifndef _GLIBCXX_USE_C99_MATH
#define _GLIBCXX_USE_C99_MATH _GLIBCXX98_USE_C99_MATH
# endif
# ifndef _GLIBCXX_USE_C99_COMPLEX
#define _GLIBCXX_USE_C99_COMPLEX _GLIBCXX98_USE_C99_COMPLEX
# endif
# ifndef _GLIBCXX_USE_C99_STDIO
#define _GLIBCXX_USE_C99_STDIO _GLIBCXX98_USE_C99_STDIO
# endif
# ifndef _GLIBCXX_USE_C99_STDLIB
#define _GLIBCXX_USE_C99_STDLIB _GLIBCXX98_USE_C99_STDLIB
# endif
# ifndef _GLIBCXX_USE_C99_WCHAR
#define _GLIBCXX_USE_C99_WCHAR _GLIBCXX98_USE_C99_WCHAR
# endif
#endif
#define _GLIBCXX_HAVE_ACOSF 1
#define _GLIBCXX_HAVE_ACOSL 1
#define _GLIBCXX_HAVE_ALIGNED_ALLOC 1
#define _GLIBCXX_HAVE_ASINF 1
#define _GLIBCXX_HAVE_ASINL 1
#define _GLIBCXX_HAVE_AS_SYMVER_DIRECTIVE 1
#define _GLIBCXX_HAVE_ATAN2F 1
#define _GLIBCXX_HAVE_ATAN2L 1
#define _GLIBCXX_HAVE_ATANF 1
#define _GLIBCXX_HAVE_ATANL 1
#define _GLIBCXX_HAVE_AT_QUICK_EXIT 1
#define _GLIBCXX_HAVE_CEILF 1
#define _GLIBCXX_HAVE_CEILL 1
#define _GLIBCXX_HAVE_COMPLEX_H 1
#define _GLIBCXX_HAVE_COSF 1
#define _GLIBCXX_HAVE_COSHF 1
#define _GLIBCXX_HAVE_COSHL 1
#define _GLIBCXX_HAVE_COSL 1
#define _GLIBCXX_HAVE_DIRENT_H 1
#define _GLIBCXX_HAVE_DLFCN_H 1
#define _GLIBCXX_HAVE_EBADMSG 1
#define _GLIBCXX_HAVE_ECANCELED 1
#define _GLIBCXX_HAVE_ECHILD 1
#define _GLIBCXX_HAVE_EIDRM 1
#define _GLIBCXX_HAVE_ENDIAN_H 1
#define _GLIBCXX_HAVE_ENODATA 1
#define _GLIBCXX_HAVE_ENOLINK 1
#define _GLIBCXX_HAVE_ENOSPC 1
#define _GLIBCXX_HAVE_ENOSR 1
#define _GLIBCXX_HAVE_ENOSTR 1
#define _GLIBCXX_HAVE_ENOTRECOVERABLE 1
#define _GLIBCXX_HAVE_ENOTSUP 1
#define _GLIBCXX_HAVE_EOVERFLOW 1
#define _GLIBCXX_HAVE_EOWNERDEAD 1
#define _GLIBCXX_HAVE_EPERM 1
#define _GLIBCXX_HAVE_EPROTO 1
#define _GLIBCXX_HAVE_ETIME 1
#define _GLIBCXX_HAVE_ETIMEDOUT 1
#define _GLIBCXX_HAVE_ETXTBSY 1
#define _GLIBCXX_HAVE_EWOULDBLOCK 1
#define _GLIBCXX_HAVE_EXCEPTION_PTR_SINCE_GCC46 1
#define _GLIBCXX_HAVE_EXECINFO_H 1
#define _GLIBCXX_HAVE_EXPF 1
#define _GLIBCXX_HAVE_EXPL 1
#define _GLIBCXX_HAVE_FABSF 1
#define _GLIBCXX_HAVE_FABSL 1
#define _GLIBCXX_HAVE_FCNTL_H 1
#define _GLIBCXX_HAVE_FENV_H 1
#define _GLIBCXX_HAVE_FINITE 1
#define _GLIBCXX_HAVE_FINITEF 1
#define _GLIBCXX_HAVE_FINITEL 1
#define _GLIBCXX_HAVE_FLOAT_H 1
#define _GLIBCXX_HAVE_FLOORF 1
#define _GLIBCXX_HAVE_FLOORL 1
#define _GLIBCXX_HAVE_FMODF 1
#define _GLIBCXX_HAVE_FMODL 1
#define _GLIBCXX_HAVE_FREXPF 1
#define _GLIBCXX_HAVE_FREXPL 1
#define _GLIBCXX_HAVE_GETIPINFO 1
#define _GLIBCXX_HAVE_GETS 1
#define _GLIBCXX_HAVE_HYPOT 1
#define _GLIBCXX_HAVE_HYPOTF 1
#define _GLIBCXX_HAVE_HYPOTL 1
#define _GLIBCXX_HAVE_ICONV 1
#define _GLIBCXX_HAVE_INT64_T 1
#define _GLIBCXX_HAVE_INT64_T_LONG 1
#define _GLIBCXX_HAVE_INTTYPES_H 1
#define _GLIBCXX_HAVE_ISINFF 1
#define _GLIBCXX_HAVE_ISINFL 1
#define _GLIBCXX_HAVE_ISNANF 1
#define _GLIBCXX_HAVE_ISNANL 1
#define _GLIBCXX_HAVE_ISWBLANK 1
#define _GLIBCXX_HAVE_LC_MESSAGES 1
#define _GLIBCXX_HAVE_LDEXPF 1
#define _GLIBCXX_HAVE_LDEXPL 1
#define _GLIBCXX_HAVE_LIBINTL_H 1
#define _GLIBCXX_HAVE_LIMIT_AS 1
#define _GLIBCXX_HAVE_LIMIT_DATA 1
#define _GLIBCXX_HAVE_LIMIT_FSIZE 1
#define _GLIBCXX_HAVE_LIMIT_RSS 1
#define _GLIBCXX_HAVE_LIMIT_VMEM 0
#define _GLIBCXX_HAVE_LINUX_FUTEX 1
#define _GLIBCXX_HAVE_LOCALE_H 1
#define _GLIBCXX_HAVE_LOG10F 1
#define _GLIBCXX_HAVE_LOG10L 1
#define _GLIBCXX_HAVE_LOGF 1
#define _GLIBCXX_HAVE_LOGL 1
#define _GLIBCXX_HAVE_MBSTATE_T 1
#define _GLIBCXX_HAVE_MEMALIGN 1
#define _GLIBCXX_HAVE_MEMORY_H 1
#define _GLIBCXX_HAVE_MODF 1
#define _GLIBCXX_HAVE_MODFF 1
#define _GLIBCXX_HAVE_MODFL 1
#define _GLIBCXX_HAVE_POLL 1
#define _GLIBCXX_HAVE_POSIX_MEMALIGN 1
#define _GLIBCXX_HAVE_POWF 1
#define _GLIBCXX_HAVE_POWL 1
#define _GLIBCXX_HAVE_QUICK_EXIT 1
#define _GLIBCXX_HAVE_SETENV 1
#define _GLIBCXX_HAVE_SINCOS 1
#define _GLIBCXX_HAVE_SINCOSF 1
#define _GLIBCXX_HAVE_SINCOSL 1
#define _GLIBCXX_HAVE_SINF 1
#define _GLIBCXX_HAVE_SINHF 1
#define _GLIBCXX_HAVE_SINHL 1
#define _GLIBCXX_HAVE_SINL 1
#define _GLIBCXX_HAVE_SQRTF 1
#define _GLIBCXX_HAVE_SQRTL 1
#define _GLIBCXX_HAVE_STDALIGN_H 1
#define _GLIBCXX_HAVE_STDBOOL_H 1
#define _GLIBCXX_HAVE_STDINT_H 1
#define _GLIBCXX_HAVE_STDLIB_H 1
#define _GLIBCXX_HAVE_STRERROR_L 1
#define _GLIBCXX_HAVE_STRERROR_R 1
#define _GLIBCXX_HAVE_STRINGS_H 1
#define _GLIBCXX_HAVE_STRING_H 1
#define _GLIBCXX_HAVE_STRTOF 1
#define _GLIBCXX_HAVE_STRTOLD 1
#define _GLIBCXX_HAVE_STRUCT_DIRENT_D_TYPE 1
#define _GLIBCXX_HAVE_STRXFRM_L 1
#define _GLIBCXX_HAVE_SYMVER_SYMBOL_RENAMING_RUNTIME_SUPPORT 1
#define _GLIBCXX_HAVE_SYS_IOCTL_H 1
#define _GLIBCXX_HAVE_SYS_IPC_H 1
#define _GLIBCXX_HAVE_SYS_PARAM_H 1
#define _GLIBCXX_HAVE_SYS_RESOURCE_H 1
#define _GLIBCXX_HAVE_SYS_SDT_H 1
#define _GLIBCXX_HAVE_SYS_SEM_H 1
#define _GLIBCXX_HAVE_SYS_STATVFS_H 1
#define _GLIBCXX_HAVE_SYS_STAT_H 1
#define _GLIBCXX_HAVE_SYS_SYSINFO_H 1
#define _GLIBCXX_HAVE_SYS_TIME_H 1
#define _GLIBCXX_HAVE_SYS_TYPES_H 1
#define _GLIBCXX_HAVE_SYS_UIO_H 1
#define _GLIBCXX_HAVE_S_ISREG 1
#define _GLIBCXX_HAVE_TANF 1
#define _GLIBCXX_HAVE_TANHF 1
#define _GLIBCXX_HAVE_TANHL 1
#define _GLIBCXX_HAVE_TANL 1
#define _GLIBCXX_HAVE_TGMATH_H 1
#define _GLIBCXX_HAVE_TLS 1
#define _GLIBCXX_HAVE_UCHAR_H 1
#define _GLIBCXX_HAVE_UNISTD_H 1
#define _GLIBCXX_HAVE_UTIME_H 1
#define _GLIBCXX_HAVE_VFWSCANF 1
#define _GLIBCXX_HAVE_VSWSCANF 1
#define _GLIBCXX_HAVE_VWSCANF 1
#define _GLIBCXX_HAVE_WCHAR_H 1
#define _GLIBCXX_HAVE_WCSTOF 1
#define _GLIBCXX_HAVE_WCTYPE_H 1
#define _GLIBCXX_HAVE_WRITEV 1
#define _GLIBCXX_HAVE___CXA_THREAD_ATEXIT_IMPL 1
#define _GLIBCXX_ICONV_CONST 
#define LT_OBJDIR ".libs/"
#define _GLIBCXX_PACKAGE_BUGREPORT ""
#define _GLIBCXX_PACKAGE_NAME "package-unused"
#define _GLIBCXX_PACKAGE_STRING "package-unused version-unused"
#define _GLIBCXX_PACKAGE_TARNAME "libstdc++"
#define _GLIBCXX_PACKAGE_URL ""
#define _GLIBCXX_PACKAGE__GLIBCXX_VERSION "version-unused"
#define STDC_HEADERS 1
#define _GLIBCXX11_USE_C99_COMPLEX 1
#define _GLIBCXX11_USE_C99_MATH 1
#define _GLIBCXX11_USE_C99_STDIO 1
#define _GLIBCXX11_USE_C99_STDLIB 1
#define _GLIBCXX11_USE_C99_WCHAR 1
#define _GLIBCXX98_USE_C99_COMPLEX 1
#define _GLIBCXX98_USE_C99_MATH 1
#define _GLIBCXX98_USE_C99_STDIO 1
#define _GLIBCXX98_USE_C99_STDLIB 1
#define _GLIBCXX98_USE_C99_WCHAR 1
#define _GLIBCXX_ATOMIC_BUILTINS 1
#define _GLIBCXX_FULLY_DYNAMIC_STRING 0
#define _GLIBCXX_HAS_GTHREADS 1
#define _GLIBCXX_HOSTED 1
#define _GLIBCXX_MANGLE_SIZE_T m
#define _GLIBCXX_RES_LIMITS 1
#define _GLIBCXX_STDIO_EOF -1
#define _GLIBCXX_STDIO_SEEK_CUR 1
#define _GLIBCXX_STDIO_SEEK_END 2
#define _GLIBCXX_SYMVER 1
#define _GLIBCXX_SYMVER_GNU 1
#define _GLIBCXX_USE_C11_UCHAR_CXX11 1
#define _GLIBCXX_USE_C99 1
#define _GLIBCXX_USE_C99_COMPLEX_TR1 1
#define _GLIBCXX_USE_C99_CTYPE_TR1 1
#define _GLIBCXX_USE_C99_FENV_TR1 1
#define _GLIBCXX_USE_C99_INTTYPES_TR1 1
#define _GLIBCXX_USE_C99_INTTYPES_WCHAR_T_TR1 1
#define _GLIBCXX_USE_C99_MATH_TR1 1
#define _GLIBCXX_USE_C99_STDINT_TR1 1
#define _GLIBCXX_USE_CLOCK_MONOTONIC 1
#define _GLIBCXX_USE_CLOCK_REALTIME 1
#define _GLIBCXX_USE_DECIMAL_FLOAT 1
#define _GLIBCXX_USE_FCHMOD 1
#define _GLIBCXX_USE_FCHMODAT 1
#define _GLIBCXX_USE_FLOAT128 1
#define _GLIBCXX_USE_GETTIMEOFDAY 1
#define _GLIBCXX_USE_GET_NPROCS 1
#define _GLIBCXX_USE_INT128 1
#define _GLIBCXX_USE_LFS 1
#define _GLIBCXX_USE_LONG_LONG 1
#define _GLIBCXX_USE_NANOSLEEP 1
#define _GLIBCXX_USE_NLS 1
#define _GLIBCXX_USE_PTHREAD_RWLOCK_T 1
#define _GLIBCXX_USE_RANDOM_TR1 1
#define _GLIBCXX_USE_REALPATH 1
#define _GLIBCXX_USE_SCHED_YIELD 1
#define _GLIBCXX_USE_SC_NPROCESSORS_ONLN 1
#define _GLIBCXX_USE_SENDFILE 1
#define _GLIBCXX_USE_ST_MTIM 1
#define _GLIBCXX_USE_TMPNAM 1
#define _GLIBCXX_USE_UTIMENSAT 1
#define _GLIBCXX_USE_WCHAR_T 1
#define _GLIBCXX_VERBOSE 1
#define _GLIBCXX_X86_RDRAND 1
#define _GTHREAD_USE_MUTEX_TIMEDLOCK 1
#if __cplusplus >= 201103L
#endif
#if __cplusplus >= 201103L
#endif
#if defined (_GLIBCXX_HAVE__ACOSF) && ! defined (_GLIBCXX_HAVE_ACOSF)
#define _GLIBCXX_HAVE_ACOSF 1
#define acosf _acosf
#endif
#if defined (_GLIBCXX_HAVE__ACOSL) && ! defined (_GLIBCXX_HAVE_ACOSL)
#define _GLIBCXX_HAVE_ACOSL 1
#define acosl _acosl
#endif
#if defined (_GLIBCXX_HAVE__ASINF) && ! defined (_GLIBCXX_HAVE_ASINF)
#define _GLIBCXX_HAVE_ASINF 1
#define asinf _asinf
#endif
#if defined (_GLIBCXX_HAVE__ASINL) && ! defined (_GLIBCXX_HAVE_ASINL)
#define _GLIBCXX_HAVE_ASINL 1
#define asinl _asinl
#endif
#if defined (_GLIBCXX_HAVE__ATAN2F) && ! defined (_GLIBCXX_HAVE_ATAN2F)
#define _GLIBCXX_HAVE_ATAN2F 1
#define atan2f _atan2f
#endif
#if defined (_GLIBCXX_HAVE__ATAN2L) && ! defined (_GLIBCXX_HAVE_ATAN2L)
#define _GLIBCXX_HAVE_ATAN2L 1
#define atan2l _atan2l
#endif
#if defined (_GLIBCXX_HAVE__ATANF) && ! defined (_GLIBCXX_HAVE_ATANF)
#define _GLIBCXX_HAVE_ATANF 1
#define atanf _atanf
#endif
#if defined (_GLIBCXX_HAVE__ATANL) && ! defined (_GLIBCXX_HAVE_ATANL)
#define _GLIBCXX_HAVE_ATANL 1
#define atanl _atanl
#endif
#if defined (_GLIBCXX_HAVE__CEILF) && ! defined (_GLIBCXX_HAVE_CEILF)
#define _GLIBCXX_HAVE_CEILF 1
#define ceilf _ceilf
#endif
#if defined (_GLIBCXX_HAVE__CEILL) && ! defined (_GLIBCXX_HAVE_CEILL)
#define _GLIBCXX_HAVE_CEILL 1
#define ceill _ceill
#endif
#if defined (_GLIBCXX_HAVE__COSF) && ! defined (_GLIBCXX_HAVE_COSF)
#define _GLIBCXX_HAVE_COSF 1
#define cosf _cosf
#endif
#if defined (_GLIBCXX_HAVE__COSHF) && ! defined (_GLIBCXX_HAVE_COSHF)
#define _GLIBCXX_HAVE_COSHF 1
#define coshf _coshf
#endif
#if defined (_GLIBCXX_HAVE__COSHL) && ! defined (_GLIBCXX_HAVE_COSHL)
#define _GLIBCXX_HAVE_COSHL 1
#define coshl _coshl
#endif
#if defined (_GLIBCXX_HAVE__COSL) && ! defined (_GLIBCXX_HAVE_COSL)
#define _GLIBCXX_HAVE_COSL 1
#define cosl _cosl
#endif
#if defined (_GLIBCXX_HAVE__EXPF) && ! defined (_GLIBCXX_HAVE_EXPF)
#define _GLIBCXX_HAVE_EXPF 1
#define expf _expf
#endif
#if defined (_GLIBCXX_HAVE__EXPL) && ! defined (_GLIBCXX_HAVE_EXPL)
#define _GLIBCXX_HAVE_EXPL 1
#define expl _expl
#endif
#if defined (_GLIBCXX_HAVE__FABSF) && ! defined (_GLIBCXX_HAVE_FABSF)
#define _GLIBCXX_HAVE_FABSF 1
#define fabsf _fabsf
#endif
#if defined (_GLIBCXX_HAVE__FABSL) && ! defined (_GLIBCXX_HAVE_FABSL)
#define _GLIBCXX_HAVE_FABSL 1
#define fabsl _fabsl
#endif
#if defined (_GLIBCXX_HAVE__FINITE) && ! defined (_GLIBCXX_HAVE_FINITE)
#define _GLIBCXX_HAVE_FINITE 1
#define finite _finite
#endif
#if defined (_GLIBCXX_HAVE__FINITEF) && ! defined (_GLIBCXX_HAVE_FINITEF)
#define _GLIBCXX_HAVE_FINITEF 1
#define finitef _finitef
#endif
#if defined (_GLIBCXX_HAVE__FINITEL) && ! defined (_GLIBCXX_HAVE_FINITEL)
#define _GLIBCXX_HAVE_FINITEL 1
#define finitel _finitel
#endif
#if defined (_GLIBCXX_HAVE__FLOORF) && ! defined (_GLIBCXX_HAVE_FLOORF)
#define _GLIBCXX_HAVE_FLOORF 1
#define floorf _floorf
#endif
#if defined (_GLIBCXX_HAVE__FLOORL) && ! defined (_GLIBCXX_HAVE_FLOORL)
#define _GLIBCXX_HAVE_FLOORL 1
#define floorl _floorl
#endif
#if defined (_GLIBCXX_HAVE__FMODF) && ! defined (_GLIBCXX_HAVE_FMODF)
#define _GLIBCXX_HAVE_FMODF 1
#define fmodf _fmodf
#endif
#if defined (_GLIBCXX_HAVE__FMODL) && ! defined (_GLIBCXX_HAVE_FMODL)
#define _GLIBCXX_HAVE_FMODL 1
#define fmodl _fmodl
#endif
#if defined (_GLIBCXX_HAVE__FPCLASS) && ! defined (_GLIBCXX_HAVE_FPCLASS)
#define _GLIBCXX_HAVE_FPCLASS 1
#define fpclass _fpclass
#endif
#if defined (_GLIBCXX_HAVE__FREXPF) && ! defined (_GLIBCXX_HAVE_FREXPF)
#define _GLIBCXX_HAVE_FREXPF 1
#define frexpf _frexpf
#endif
#if defined (_GLIBCXX_HAVE__FREXPL) && ! defined (_GLIBCXX_HAVE_FREXPL)
#define _GLIBCXX_HAVE_FREXPL 1
#define frexpl _frexpl
#endif
#if defined (_GLIBCXX_HAVE__HYPOT) && ! defined (_GLIBCXX_HAVE_HYPOT)
#define _GLIBCXX_HAVE_HYPOT 1
#define hypot _hypot
#endif
#if defined (_GLIBCXX_HAVE__HYPOTF) && ! defined (_GLIBCXX_HAVE_HYPOTF)
#define _GLIBCXX_HAVE_HYPOTF 1
#define hypotf _hypotf
#endif
#if defined (_GLIBCXX_HAVE__HYPOTL) && ! defined (_GLIBCXX_HAVE_HYPOTL)
#define _GLIBCXX_HAVE_HYPOTL 1
#define hypotl _hypotl
#endif
#if defined (_GLIBCXX_HAVE__ISINF) && ! defined (_GLIBCXX_HAVE_ISINF)
#define _GLIBCXX_HAVE_ISINF 1
#define isinf _isinf
#endif
#if defined (_GLIBCXX_HAVE__ISINFF) && ! defined (_GLIBCXX_HAVE_ISINFF)
#define _GLIBCXX_HAVE_ISINFF 1
#define isinff _isinff
#endif
#if defined (_GLIBCXX_HAVE__ISINFL) && ! defined (_GLIBCXX_HAVE_ISINFL)
#define _GLIBCXX_HAVE_ISINFL 1
#define isinfl _isinfl
#endif
#if defined (_GLIBCXX_HAVE__ISNAN) && ! defined (_GLIBCXX_HAVE_ISNAN)
#define _GLIBCXX_HAVE_ISNAN 1
#define isnan _isnan
#endif
#if defined (_GLIBCXX_HAVE__ISNANF) && ! defined (_GLIBCXX_HAVE_ISNANF)
#define _GLIBCXX_HAVE_ISNANF 1
#define isnanf _isnanf
#endif
#if defined (_GLIBCXX_HAVE__ISNANL) && ! defined (_GLIBCXX_HAVE_ISNANL)
#define _GLIBCXX_HAVE_ISNANL 1
#define isnanl _isnanl
#endif
#if defined (_GLIBCXX_HAVE__LDEXPF) && ! defined (_GLIBCXX_HAVE_LDEXPF)
#define _GLIBCXX_HAVE_LDEXPF 1
#define ldexpf _ldexpf
#endif
#if defined (_GLIBCXX_HAVE__LDEXPL) && ! defined (_GLIBCXX_HAVE_LDEXPL)
#define _GLIBCXX_HAVE_LDEXPL 1
#define ldexpl _ldexpl
#endif
#if defined (_GLIBCXX_HAVE__LOG10F) && ! defined (_GLIBCXX_HAVE_LOG10F)
#define _GLIBCXX_HAVE_LOG10F 1
#define log10f _log10f
#endif
#if defined (_GLIBCXX_HAVE__LOG10L) && ! defined (_GLIBCXX_HAVE_LOG10L)
#define _GLIBCXX_HAVE_LOG10L 1
#define log10l _log10l
#endif
#if defined (_GLIBCXX_HAVE__LOGF) && ! defined (_GLIBCXX_HAVE_LOGF)
#define _GLIBCXX_HAVE_LOGF 1
#define logf _logf
#endif
#if defined (_GLIBCXX_HAVE__LOGL) && ! defined (_GLIBCXX_HAVE_LOGL)
#define _GLIBCXX_HAVE_LOGL 1
#define logl _logl
#endif
#if defined (_GLIBCXX_HAVE__MODF) && ! defined (_GLIBCXX_HAVE_MODF)
#define _GLIBCXX_HAVE_MODF 1
#define modf _modf
#endif
#if defined (_GLIBCXX_HAVE__MODFF) && ! defined (_GLIBCXX_HAVE_MODFF)
#define _GLIBCXX_HAVE_MODFF 1
#define modff _modff
#endif
#if defined (_GLIBCXX_HAVE__MODFL) && ! defined (_GLIBCXX_HAVE_MODFL)
#define _GLIBCXX_HAVE_MODFL 1
#define modfl _modfl
#endif
#if defined (_GLIBCXX_HAVE__POWF) && ! defined (_GLIBCXX_HAVE_POWF)
#define _GLIBCXX_HAVE_POWF 1
#define powf _powf
#endif
#if defined (_GLIBCXX_HAVE__POWL) && ! defined (_GLIBCXX_HAVE_POWL)
#define _GLIBCXX_HAVE_POWL 1
#define powl _powl
#endif
#if defined (_GLIBCXX_HAVE__QFPCLASS) && ! defined (_GLIBCXX_HAVE_QFPCLASS)
#define _GLIBCXX_HAVE_QFPCLASS 1
#define qfpclass _qfpclass
#endif
#if defined (_GLIBCXX_HAVE__SINCOS) && ! defined (_GLIBCXX_HAVE_SINCOS)
#define _GLIBCXX_HAVE_SINCOS 1
#define sincos _sincos
#endif
#if defined (_GLIBCXX_HAVE__SINCOSF) && ! defined (_GLIBCXX_HAVE_SINCOSF)
#define _GLIBCXX_HAVE_SINCOSF 1
#define sincosf _sincosf
#endif
#if defined (_GLIBCXX_HAVE__SINCOSL) && ! defined (_GLIBCXX_HAVE_SINCOSL)
#define _GLIBCXX_HAVE_SINCOSL 1
#define sincosl _sincosl
#endif
#if defined (_GLIBCXX_HAVE__SINF) && ! defined (_GLIBCXX_HAVE_SINF)
#define _GLIBCXX_HAVE_SINF 1
#define sinf _sinf
#endif
#if defined (_GLIBCXX_HAVE__SINHF) && ! defined (_GLIBCXX_HAVE_SINHF)
#define _GLIBCXX_HAVE_SINHF 1
#define sinhf _sinhf
#endif
#if defined (_GLIBCXX_HAVE__SINHL) && ! defined (_GLIBCXX_HAVE_SINHL)
#define _GLIBCXX_HAVE_SINHL 1
#define sinhl _sinhl
#endif
#if defined (_GLIBCXX_HAVE__SINL) && ! defined (_GLIBCXX_HAVE_SINL)
#define _GLIBCXX_HAVE_SINL 1
#define sinl _sinl
#endif
#if defined (_GLIBCXX_HAVE__SQRTF) && ! defined (_GLIBCXX_HAVE_SQRTF)
#define _GLIBCXX_HAVE_SQRTF 1
#define sqrtf _sqrtf
#endif
#if defined (_GLIBCXX_HAVE__SQRTL) && ! defined (_GLIBCXX_HAVE_SQRTL)
#define _GLIBCXX_HAVE_SQRTL 1
#define sqrtl _sqrtl
#endif
#if defined (_GLIBCXX_HAVE__STRTOF) && ! defined (_GLIBCXX_HAVE_STRTOF)
#define _GLIBCXX_HAVE_STRTOF 1
#define strtof _strtof
#endif
#if defined (_GLIBCXX_HAVE__STRTOLD) && ! defined (_GLIBCXX_HAVE_STRTOLD)
#define _GLIBCXX_HAVE_STRTOLD 1
#define strtold _strtold
#endif
#if defined (_GLIBCXX_HAVE__TANF) && ! defined (_GLIBCXX_HAVE_TANF)
#define _GLIBCXX_HAVE_TANF 1
#define tanf _tanf
#endif
#if defined (_GLIBCXX_HAVE__TANHF) && ! defined (_GLIBCXX_HAVE_TANHF)
#define _GLIBCXX_HAVE_TANHF 1
#define tanhf _tanhf
#endif
#if defined (_GLIBCXX_HAVE__TANHL) && ! defined (_GLIBCXX_HAVE_TANHL)
#define _GLIBCXX_HAVE_TANHL 1
#define tanhl _tanhl
#endif
#if defined (_GLIBCXX_HAVE__TANL) && ! defined (_GLIBCXX_HAVE_TANL)
#define _GLIBCXX_HAVE_TANL 1
#define tanl _tanl
#endif
#endif
