// GGHASH:VBk6xSiJOzl4WtDxGQRQSSejUJ9YGdoDhW9fwVBs32pc00004bef
#ifndef __G_TYPES_H__
#define __G_TYPES_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glibconfig.h>
#include <glib/gmacros.h>
#include <glib/gversionmacros.h>
#include <time.h>
#define G_MININT8 ((gint8) -0x80)
#define G_MAXINT8 ((gint8) 0x7f)
#define G_MAXUINT8 ((guint8) 0xff)
#define G_MININT16 ((gint16) -0x8000)
#define G_MAXINT16 ((gint16) 0x7fff)
#define G_MAXUINT16 ((guint16) 0xffff)
#define G_MININT32 ((gint32) -0x80000000)
#define G_MAXINT32 ((gint32) 0x7fffffff)
#define G_MAXUINT32 ((guint32) 0xffffffff)
#define G_MININT64 ((gint64) G_GINT64_CONSTANT(-0x8000000000000000))
#define G_MAXINT64 G_GINT64_CONSTANT(0x7fffffffffffffff)
#define G_MAXUINT64 G_GUINT64_CONSTANT(0xffffffffffffffff)
#define G_E 2.7182818284590452353602874713526624977572470937000
#define G_LN2 0.69314718055994530941723212145817656807550013436026
#define G_LN10 2.3025850929940456840179914546843642076011014886288
#define G_PI 3.1415926535897932384626433832795028841971693993751
#define G_PI_2 1.5707963267948966192313216916397514420985846996876
#define G_PI_4 0.78539816339744830961566084581987572104929234984378
#define G_SQRT2 1.4142135623730950488016887242096980785696718753769
#define G_LITTLE_ENDIAN 1234
#define G_BIG_ENDIAN 4321
#define G_PDP_ENDIAN 3412
#define GUINT16_SWAP_LE_BE_CONSTANT(val) ((guint16) ( (guint16) ((guint16) (val) >> 8) | (guint16) ((guint16) (val) << 8)))
#define GUINT32_SWAP_LE_BE_CONSTANT(val) ((guint32) ( (((guint32) (val) & (guint32) 0x000000ffU) << 24) | (((guint32) (val) & (guint32) 0x0000ff00U) << 8) | (((guint32) (val) & (guint32) 0x00ff0000U) >> 8) | (((guint32) (val) & (guint32) 0xff000000U) >> 24)))
#define GUINT64_SWAP_LE_BE_CONSTANT(val) ((guint64) ( (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00000000000000ffU)) << 56) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x000000000000ff00U)) << 40) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x0000000000ff0000U)) << 24) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00000000ff000000U)) << 8) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x000000ff00000000U)) >> 8) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x0000ff0000000000U)) >> 24) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0x00ff000000000000U)) >> 40) | (((guint64) (val) & (guint64) G_GINT64_CONSTANT (0xff00000000000000U)) >> 56)))
#if defined (__GNUC__) && (__GNUC__ >= 2) && defined (__OPTIMIZE__)
# if __GNUC__ >= 4 && defined (__GNUC_MINOR__) && __GNUC_MINOR__ >= 3
#define GUINT32_SWAP_LE_BE(val) ((guint32) __builtin_bswap32 ((guint32) (val)))
#define GUINT64_SWAP_LE_BE(val) ((guint64) __builtin_bswap64 ((guint64) (val)))
# endif
# if defined (__i386__)
#define GUINT16_SWAP_LE_BE_IA32(val) (G_GNUC_EXTENSION ({ guint16 __v, __x = ((guint16) (val)); if (__builtin_constant_p (__x)) __v = GUINT16_SWAP_LE_BE_CONSTANT (__x); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))
# if !defined (__i486__) && !defined (__i586__) && !defined (__pentium__) && !defined (__i686__) && !defined (__pentiumpro__) && !defined (__pentium4__)
#define GUINT32_SWAP_LE_BE_IA32(val) (G_GNUC_EXTENSION ({ guint32 __v, __x = ((guint32) (val)); if (__builtin_constant_p (__x)) __v = GUINT32_SWAP_LE_BE_CONSTANT (__x); else __asm__ ("rorw $8, %w0\n\t" "rorl $16, %0\n\t" "rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))
# else
#define GUINT32_SWAP_LE_BE_IA32(val) (G_GNUC_EXTENSION ({ guint32 __v, __x = ((guint32) (val)); if (__builtin_constant_p (__x)) __v = GUINT32_SWAP_LE_BE_CONSTANT (__x); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))
# endif
#define GUINT64_SWAP_LE_BE_IA32(val) (G_GNUC_EXTENSION ({ union { guint64 __ll; guint32 __l[2]; } __w, __r; __w.__ll = ((guint64) (val)); if (__builtin_constant_p (__w.__ll)) __r.__ll = GUINT64_SWAP_LE_BE_CONSTANT (__w.__ll); else { __r.__l[0] = GUINT32_SWAP_LE_BE (__w.__l[1]); __r.__l[1] = GUINT32_SWAP_LE_BE (__w.__l[0]); } __r.__ll; }))
#define GUINT16_SWAP_LE_BE(val) (GUINT16_SWAP_LE_BE_IA32 (val))
# ifndef GUINT32_SWAP_LE_BE
#define GUINT32_SWAP_LE_BE(val) (GUINT32_SWAP_LE_BE_IA32 (val))
# endif
# ifndef GUINT64_SWAP_LE_BE
#define GUINT64_SWAP_LE_BE(val) (GUINT64_SWAP_LE_BE_IA32 (val))
# endif
# elif defined (__ia64__)
#define GUINT16_SWAP_LE_BE_IA64(val) (G_GNUC_EXTENSION ({ guint16 __v, __x = ((guint16) (val)); if (__builtin_constant_p (__x)) __v = GUINT16_SWAP_LE_BE_CONSTANT (__x); else __asm__ __volatile__ ("shl %0 = %1, 48 ;;" "mux1 %0 = %0, @rev ;;" : "=r" (__v) : "r" (__x)); __v; }))
#define GUINT32_SWAP_LE_BE_IA64(val) (G_GNUC_EXTENSION ({ guint32 __v, __x = ((guint32) (val)); if (__builtin_constant_p (__x)) __v = GUINT32_SWAP_LE_BE_CONSTANT (__x); else __asm__ __volatile__ ("shl %0 = %1, 32 ;;" "mux1 %0 = %0, @rev ;;" : "=r" (__v) : "r" (__x)); __v; }))
#define GUINT64_SWAP_LE_BE_IA64(val) (G_GNUC_EXTENSION ({ guint64 __v, __x = ((guint64) (val)); if (__builtin_constant_p (__x)) __v = GUINT64_SWAP_LE_BE_CONSTANT (__x); else __asm__ __volatile__ ("mux1 %0 = %1, @rev ;;" : "=r" (__v) : "r" (__x)); __v; }))
#define GUINT16_SWAP_LE_BE(val) (GUINT16_SWAP_LE_BE_IA64 (val))
# ifndef GUINT32_SWAP_LE_BE
#define GUINT32_SWAP_LE_BE(val) (GUINT32_SWAP_LE_BE_IA64 (val))
# endif
# ifndef GUINT64_SWAP_LE_BE
#define GUINT64_SWAP_LE_BE(val) (GUINT64_SWAP_LE_BE_IA64 (val))
# endif
# elif defined (__x86_64__)
#define GUINT32_SWAP_LE_BE_X86_64(val) (G_GNUC_EXTENSION ({ guint32 __v, __x = ((guint32) (val)); if (__builtin_constant_p (__x)) __v = GUINT32_SWAP_LE_BE_CONSTANT (__x); else __asm__ ("bswapl %0" : "=r" (__v) : "0" (__x)); __v; }))
#define GUINT64_SWAP_LE_BE_X86_64(val) (G_GNUC_EXTENSION ({ guint64 __v, __x = ((guint64) (val)); if (__builtin_constant_p (__x)) __v = GUINT64_SWAP_LE_BE_CONSTANT (__x); else __asm__ ("bswapq %0" : "=r" (__v) : "0" (__x)); __v; }))
#define GUINT16_SWAP_LE_BE(val) (GUINT16_SWAP_LE_BE_CONSTANT (val))
# ifndef GUINT32_SWAP_LE_BE
#define GUINT32_SWAP_LE_BE(val) (GUINT32_SWAP_LE_BE_X86_64 (val))
# endif
# ifndef GUINT64_SWAP_LE_BE
#define GUINT64_SWAP_LE_BE(val) (GUINT64_SWAP_LE_BE_X86_64 (val))
# endif
# else
#define GUINT16_SWAP_LE_BE(val) (GUINT16_SWAP_LE_BE_CONSTANT (val))
# ifndef GUINT32_SWAP_LE_BE
#define GUINT32_SWAP_LE_BE(val) (GUINT32_SWAP_LE_BE_CONSTANT (val))
# endif
# ifndef GUINT64_SWAP_LE_BE
#define GUINT64_SWAP_LE_BE(val) (GUINT64_SWAP_LE_BE_CONSTANT (val))
# endif
# endif
#else
#define GUINT16_SWAP_LE_BE(val) (GUINT16_SWAP_LE_BE_CONSTANT (val))
#define GUINT32_SWAP_LE_BE(val) (GUINT32_SWAP_LE_BE_CONSTANT (val))
#define GUINT64_SWAP_LE_BE(val) (GUINT64_SWAP_LE_BE_CONSTANT (val))
#endif
#define GUINT16_SWAP_LE_PDP(val) ((guint16) (val))
#define GUINT16_SWAP_BE_PDP(val) (GUINT16_SWAP_LE_BE (val))
#define GUINT32_SWAP_LE_PDP(val) ((guint32) ( (((guint32) (val) & (guint32) 0x0000ffffU) << 16) | (((guint32) (val) & (guint32) 0xffff0000U) >> 16)))
#define GUINT32_SWAP_BE_PDP(val) ((guint32) ( (((guint32) (val) & (guint32) 0x00ff00ffU) << 8) | (((guint32) (val) & (guint32) 0xff00ff00U) >> 8)))
#define GINT16_FROM_LE(val) (GINT16_TO_LE (val))
#define GUINT16_FROM_LE(val) (GUINT16_TO_LE (val))
#define GINT16_FROM_BE(val) (GINT16_TO_BE (val))
#define GUINT16_FROM_BE(val) (GUINT16_TO_BE (val))
#define GINT32_FROM_LE(val) (GINT32_TO_LE (val))
#define GUINT32_FROM_LE(val) (GUINT32_TO_LE (val))
#define GINT32_FROM_BE(val) (GINT32_TO_BE (val))
#define GUINT32_FROM_BE(val) (GUINT32_TO_BE (val))
#define GINT64_FROM_LE(val) (GINT64_TO_LE (val))
#define GUINT64_FROM_LE(val) (GUINT64_TO_LE (val))
#define GINT64_FROM_BE(val) (GINT64_TO_BE (val))
#define GUINT64_FROM_BE(val) (GUINT64_TO_BE (val))
#define GLONG_FROM_LE(val) (GLONG_TO_LE (val))
#define GULONG_FROM_LE(val) (GULONG_TO_LE (val))
#define GLONG_FROM_BE(val) (GLONG_TO_BE (val))
#define GULONG_FROM_BE(val) (GULONG_TO_BE (val))
#define GINT_FROM_LE(val) (GINT_TO_LE (val))
#define GUINT_FROM_LE(val) (GUINT_TO_LE (val))
#define GINT_FROM_BE(val) (GINT_TO_BE (val))
#define GUINT_FROM_BE(val) (GUINT_TO_BE (val))
#define GSIZE_FROM_LE(val) (GSIZE_TO_LE (val))
#define GSSIZE_FROM_LE(val) (GSSIZE_TO_LE (val))
#define GSIZE_FROM_BE(val) (GSIZE_TO_BE (val))
#define GSSIZE_FROM_BE(val) (GSSIZE_TO_BE (val))
#define g_ntohl(val) (GUINT32_FROM_BE (val))
#define g_ntohs(val) (GUINT16_FROM_BE (val))
#define g_htonl(val) (GUINT32_TO_BE (val))
#define g_htons(val) (GUINT16_TO_BE (val))
#ifndef _GLIB_TEST_OVERFLOW_FALLBACK
#if __GNUC__ >= 5 && !defined(__INTEL_COMPILER)
#define _GLIB_HAVE_BUILTIN_OVERFLOW_CHECKS 
#elif __has_builtin(__builtin_uadd_overflow)
#define _GLIB_HAVE_BUILTIN_OVERFLOW_CHECKS 
#endif
#endif
#define g_uint_checked_add(dest,a,b) _GLIB_CHECKED_ADD_U32(dest, a, b)
#define g_uint_checked_mul(dest,a,b) _GLIB_CHECKED_MUL_U32(dest, a, b)
#define g_uint64_checked_add(dest,a,b) _GLIB_CHECKED_ADD_U64(dest, a, b)
#define g_uint64_checked_mul(dest,a,b) _GLIB_CHECKED_MUL_U64(dest, a, b)
#if GLIB_SIZEOF_SIZE_T == 8
#define g_size_checked_add(dest,a,b) _GLIB_CHECKED_ADD_U64(dest, a, b)
#define g_size_checked_mul(dest,a,b) _GLIB_CHECKED_MUL_U64(dest, a, b)
#else
#define g_size_checked_add(dest,a,b) _GLIB_CHECKED_ADD_U32(dest, a, b)
#define g_size_checked_mul(dest,a,b) _GLIB_CHECKED_MUL_U32(dest, a, b)
#endif
#ifdef _GLIB_HAVE_BUILTIN_OVERFLOW_CHECKS
#else
#endif
#define G_IEEE754_FLOAT_BIAS (127)
#define G_IEEE754_DOUBLE_BIAS (1023)
#define G_LOG_2_BASE_10 (0.30102999566398119521)
#if G_BYTE_ORDER == G_LITTLE_ENDIAN
#elif G_BYTE_ORDER == G_BIG_ENDIAN
#else
#error unknown ENDIAN type
#endif
#ifndef GLIB_VAR
# ifdef G_PLATFORM_WIN32
# ifdef GLIB_STATIC_COMPILATION
#define GLIB_VAR extern
# else
# ifdef GLIB_COMPILATION
# ifdef DLL_EXPORT
#define GLIB_VAR __declspec(dllexport)
# else
#define GLIB_VAR extern
# endif
# else
#define GLIB_VAR extern __declspec(dllimport)
# endif
# endif
# else
#define GLIB_VAR _GLIB_EXTERN
# endif
#endif
#endif
