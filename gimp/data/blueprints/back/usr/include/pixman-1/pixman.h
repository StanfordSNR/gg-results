// GGHASH:VKhIsSFtEG7_mtx4NX6Zp73bXHTeYzQud3w3Hr0A4Asc0000aed4
#ifndef PIXMAN_H__
#define PIXMAN_H__ 
#include <pixman-version.h>
#ifdef __cplusplus
#define PIXMAN_BEGIN_DECLS extern "C" {
#define PIXMAN_END_DECLS }
#else
#define PIXMAN_BEGIN_DECLS 
#define PIXMAN_END_DECLS 
#endif
#if !defined (PIXMAN_DONT_DEFINE_STDINT)
#if defined (_SVR4) || defined (SVR4) || defined (__OpenBSD__) || defined (_sgi) || defined (__sun) || defined (sun) || defined (__digital__) || defined (__HP_cc)
# include <inttypes.h>
#elif defined (_MSC_VER) && _MSC_VER < 1600
#elif defined (_AIX)
# include <sys/inttypes.h>
#else
# include <stdint.h>
#endif
#endif
#define pixman_fixed_e ((pixman_fixed_t) 1)
#define pixman_fixed_1 (pixman_int_to_fixed(1))
#define pixman_fixed_1_minus_e (pixman_fixed_1 - pixman_fixed_e)
#define pixman_fixed_minus_1 (pixman_int_to_fixed(-1))
#define pixman_fixed_to_int(f) ((int) ((f) >> 16))
#define pixman_int_to_fixed(i) ((pixman_fixed_t) ((i) << 16))
#define pixman_fixed_to_double(f) (double) ((f) / (double) pixman_fixed_1)
#define pixman_double_to_fixed(d) ((pixman_fixed_t) ((d) * 65536.0))
#define pixman_fixed_frac(f) ((f) & pixman_fixed_1_minus_e)
#define pixman_fixed_floor(f) ((f) & ~pixman_fixed_1_minus_e)
#define pixman_fixed_ceil(f) pixman_fixed_floor ((f) + pixman_fixed_1_minus_e)
#define pixman_fixed_fraction(f) ((f) & pixman_fixed_1_minus_e)
#define pixman_fixed_mod_2(f) ((f) & (pixman_fixed1 | pixman_fixed_1_minus_e))
#define pixman_max_fixed_48_16 ((pixman_fixed_48_16_t) 0x7fffffff)
#define pixman_min_fixed_48_16 (-((pixman_fixed_48_16_t) 1 << 31))
#ifdef PIXMAN_USE_INTERNAL_API
#endif
#define PIXMAN_MAX_INDEXED 256
#if PIXMAN_MAX_INDEXED <= 256
#endif
#define PIXMAN_FORMAT(bpp,type,a,r,g,b) (((bpp) << 24) | ((type) << 16) | ((a) << 12) | ((r) << 8) | ((g) << 4) | ((b)))
#define PIXMAN_FORMAT_BPP(f) (((f) >> 24) )
#define PIXMAN_FORMAT_TYPE(f) (((f) >> 16) & 0xff)
#define PIXMAN_FORMAT_A(f) (((f) >> 12) & 0x0f)
#define PIXMAN_FORMAT_R(f) (((f) >> 8) & 0x0f)
#define PIXMAN_FORMAT_G(f) (((f) >> 4) & 0x0f)
#define PIXMAN_FORMAT_B(f) (((f) ) & 0x0f)
#define PIXMAN_FORMAT_RGB(f) (((f) ) & 0xfff)
#define PIXMAN_FORMAT_VIS(f) (((f) ) & 0xffff)
#define PIXMAN_FORMAT_DEPTH(f) (PIXMAN_FORMAT_A(f) + PIXMAN_FORMAT_R(f) + PIXMAN_FORMAT_G(f) + PIXMAN_FORMAT_B(f))
#define PIXMAN_TYPE_OTHER 0
#define PIXMAN_TYPE_A 1
#define PIXMAN_TYPE_ARGB 2
#define PIXMAN_TYPE_ABGR 3
#define PIXMAN_TYPE_COLOR 4
#define PIXMAN_TYPE_GRAY 5
#define PIXMAN_TYPE_YUY2 6
#define PIXMAN_TYPE_YV12 7
#define PIXMAN_TYPE_BGRA 8
#define PIXMAN_TYPE_RGBA 9
#define PIXMAN_TYPE_ARGB_SRGB 10
#define PIXMAN_FORMAT_COLOR(f) (PIXMAN_FORMAT_TYPE(f) == PIXMAN_TYPE_ARGB || PIXMAN_FORMAT_TYPE(f) == PIXMAN_TYPE_ABGR || PIXMAN_FORMAT_TYPE(f) == PIXMAN_TYPE_BGRA || PIXMAN_FORMAT_TYPE(f) == PIXMAN_TYPE_RGBA)
#define pixman_trapezoid_valid(t) ((t)->left.p1.y != (t)->left.p2.y && (t)->right.p1.y != (t)->right.p2.y && ((t)->bottom > (t)->top))
#endif
