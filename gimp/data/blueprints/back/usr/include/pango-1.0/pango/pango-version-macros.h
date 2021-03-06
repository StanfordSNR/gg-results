// GGHASH:VyoRIuxOUwnn8_7hdVVPnLSu7AfURVFIW5QhboPBlPKQ0000513e
#ifndef __PANGO_VERSION_H__
#define __PANGO_VERSION_H__ 
#include <pango/pango-features.h>
#include <glib.h>
#ifndef _PANGO_EXTERN
#define _PANGO_EXTERN extern
#endif
#define PANGO_AVAILABLE_IN_ALL _PANGO_EXTERN
#define PANGO_VERSION_1_2 (G_ENCODE_VERSION (1, 2))
#define PANGO_VERSION_1_4 (G_ENCODE_VERSION (1, 4))
#define PANGO_VERSION_1_6 (G_ENCODE_VERSION (1, 6))
#define PANGO_VERSION_1_8 (G_ENCODE_VERSION (1, 8))
#define PANGO_VERSION_1_10 (G_ENCODE_VERSION (1, 10))
#define PANGO_VERSION_1_12 (G_ENCODE_VERSION (1, 12))
#define PANGO_VERSION_1_14 (G_ENCODE_VERSION (1, 14))
#define PANGO_VERSION_1_16 (G_ENCODE_VERSION (1, 16))
#define PANGO_VERSION_1_18 (G_ENCODE_VERSION (1, 18))
#define PANGO_VERSION_1_20 (G_ENCODE_VERSION (1, 20))
#define PANGO_VERSION_1_22 (G_ENCODE_VERSION (1, 22))
#define PANGO_VERSION_1_24 (G_ENCODE_VERSION (1, 24))
#define PANGO_VERSION_1_26 (G_ENCODE_VERSION (1, 26))
#define PANGO_VERSION_1_28 (G_ENCODE_VERSION (1, 28))
#define PANGO_VERSION_1_30 (G_ENCODE_VERSION (1, 30))
#define PANGO_VERSION_1_32 (G_ENCODE_VERSION (1, 32))
#define PANGO_VERSION_1_34 (G_ENCODE_VERSION (1, 34))
#define PANGO_VERSION_1_36 (G_ENCODE_VERSION (1, 36))
#define PANGO_VERSION_1_38 (G_ENCODE_VERSION (1, 38))
#define PANGO_VERSION_1_40 (G_ENCODE_VERSION (1, 40))
#define PANGO_VERSION_1_42 (G_ENCODE_VERSION (1, 42))
#if (PANGO_VERSION_MINOR % 2)
#define PANGO_VERSION_CUR_STABLE (G_ENCODE_VERSION (PANGO_VERSION_MAJOR, PANGO_VERSION_MINOR + 1))
#else
#define PANGO_VERSION_CUR_STABLE (G_ENCODE_VERSION (PANGO_VERSION_MAJOR, PANGO_VERSION_MINOR))
#endif
#if (PANGO_VERSION_MINOR % 2)
#define PANGO_VERSION_PREV_STABLE (G_ENCODE_VERSION (PANGO_VERSION_MAJOR, PANGO_VERSION_MINOR - 1))
#else
#define PANGO_VERSION_PREV_STABLE (G_ENCODE_VERSION (PANGO_VERSION_MAJOR, PANGO_VERSION_MINOR - 2))
#endif
#ifndef PANGO_VERSION_MIN_REQUIRED
#define PANGO_VERSION_MIN_REQUIRED (PANGO_VERSION_CUR_STABLE)
#elif PANGO_VERSION_MIN_REQUIRED == 0
#undef PANGO_VERSION_MIN_REQUIRED
#define PANGO_VERSION_MIN_REQUIRED (PANGO_VERSION_CUR_STABLE + 2)
#endif
#if !defined (PANGO_VERSION_MAX_ALLOWED) || (PANGO_VERSION_MAX_ALLOWED == 0)
#undef PANGO_VERSION_MAX_ALLOWED
#define PANGO_VERSION_MAX_ALLOWED (PANGO_VERSION_CUR_STABLE)
#endif
#if PANGO_VERSION_MIN_REQUIRED > PANGO_VERSION_CUR_STABLE
#error "PANGO_VERSION_MIN_REQUIRED must be <= PANGO_VERSION_CUR_STABLE"
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_MIN_REQUIRED
#error "PANGO_VERSION_MAX_ALLOWED must be >= PANGO_VERSION_MIN_REQUIRED"
#endif
#if PANGO_VERSION_MIN_REQUIRED < PANGO_VERSION_1_2
#error "PANGO_VERSION_MIN_REQUIRED must be >= PANGO_VERSION_1_2"
#endif
#ifdef PANGO_DISABLE_DEPRECATION_WARNINGS
#define PANGO_DEPRECATED _PANGO_EXTERN
#define PANGO_DEPRECATED_FOR(f) _PANGO_EXTERN
#define PANGO_UNAVAILABLE(maj,min) _PANGO_EXTERN
#else
#define PANGO_DEPRECATED G_DEPRECATED _PANGO_EXTERN
#define PANGO_DEPRECATED_FOR(f) G_DEPRECATED_FOR(f) _PANGO_EXTERN
#define PANGO_UNAVAILABLE(maj,min) G_UNAVAILABLE(maj,min) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_2
#define PANGO_DEPRECATED_IN_1_2 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_2_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_2 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_2_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_2
#define PANGO_AVAILABLE_IN_1_2 PANGO_UNAVAILABLE(1, 2)
#else
#define PANGO_AVAILABLE_IN_1_2 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_4
#define PANGO_DEPRECATED_IN_1_4 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_4_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_4 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_4_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_4
#define PANGO_AVAILABLE_IN_1_4 PANGO_UNAVAILABLE(1, 4)
#else
#define PANGO_AVAILABLE_IN_1_4 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_6
#define PANGO_DEPRECATED_IN_1_6 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_6_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_6 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_6_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_6
#define PANGO_AVAILABLE_IN_1_6 PANGO_UNAVAILABLE(1, 6)
#else
#define PANGO_AVAILABLE_IN_1_6 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_8
#define PANGO_DEPRECATED_IN_1_8 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_8_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_8 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_8_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_8
#define PANGO_AVAILABLE_IN_1_8 PANGO_UNAVAILABLE(1, 8)
#else
#define PANGO_AVAILABLE_IN_1_8 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_10
#define PANGO_DEPRECATED_IN_1_10 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_10_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_10 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_10_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_10
#define PANGO_AVAILABLE_IN_1_10 PANGO_UNAVAILABLE(1, 10)
#else
#define PANGO_AVAILABLE_IN_1_10 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_12
#define PANGO_AVAILABLE_IN_1_12 PANGO_UNAVAILABLE(1, 12)
#else
#define PANGO_AVAILABLE_IN_1_12 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_12
#define PANGO_DEPRECATED_IN_1_12 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_12_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_12 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_12_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_14
#define PANGO_AVAILABLE_IN_1_14 PANGO_UNAVAILABLE(1, 14)
#else
#define PANGO_AVAILABLE_IN_1_14 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_14
#define PANGO_DEPRECATED_IN_1_14 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_14_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_14 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_14_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_16
#define PANGO_AVAILABLE_IN_1_16 PANGO_UNAVAILABLE(1, 16)
#else
#define PANGO_AVAILABLE_IN_1_16 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_16
#define PANGO_DEPRECATED_IN_1_16 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_16_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_16 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_16_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_18
#define PANGO_DEPRECATED_IN_1_18 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_18_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_18 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_18_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_18
#define PANGO_AVAILABLE_IN_1_18 PANGO_UNAVAILABLE(1, 18)
#else
#define PANGO_AVAILABLE_IN_1_18 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_20
#define PANGO_DEPRECATED_IN_1_20 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_20_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_20 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_20_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_20
#define PANGO_AVAILABLE_IN_1_20 PANGO_UNAVAILABLE(1, 20)
#else
#define PANGO_AVAILABLE_IN_1_20 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_22
#define PANGO_DEPRECATED_IN_1_22 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_22_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_22 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_22_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_22
#define PANGO_AVAILABLE_IN_1_22 PANGO_UNAVAILABLE(1, 22)
#else
#define PANGO_AVAILABLE_IN_1_22 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_24
#define PANGO_DEPRECATED_IN_1_24 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_24_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_24 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_24_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_24
#define PANGO_AVAILABLE_IN_1_24 PANGO_UNAVAILABLE(1, 24)
#else
#define PANGO_AVAILABLE_IN_1_24 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_26
#define PANGO_DEPRECATED_IN_1_26 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_26_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_26 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_26_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_26
#define PANGO_AVAILABLE_IN_1_26 PANGO_UNAVAILABLE(1, 26)
#else
#define PANGO_AVAILABLE_IN_1_26 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_28
#define PANGO_DEPRECATED_IN_1_28 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_28_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_28 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_28_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_28
#define PANGO_AVAILABLE_IN_1_28 PANGO_UNAVAILABLE(1, 28)
#else
#define PANGO_AVAILABLE_IN_1_28 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_30
#define PANGO_DEPRECATED_IN_1_30 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_30_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_30 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_30_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_30
#define PANGO_AVAILABLE_IN_1_30 PANGO_UNAVAILABLE(1, 30)
#else
#define PANGO_AVAILABLE_IN_1_30 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_32
#define PANGO_DEPRECATED_IN_1_32 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_32_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_32 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_32_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_32
#define PANGO_AVAILABLE_IN_1_32 PANGO_UNAVAILABLE(1, 32)
#else
#define PANGO_AVAILABLE_IN_1_32 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_34
#define PANGO_DEPRECATED_IN_1_34 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_34_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_34 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_34_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_34
#define PANGO_AVAILABLE_IN_1_34 PANGO_UNAVAILABLE(1, 34)
#else
#define PANGO_AVAILABLE_IN_1_34 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_36
#define PANGO_DEPRECATED_IN_1_36 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_36_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_36 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_36_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_36
#define PANGO_AVAILABLE_IN_1_36 PANGO_UNAVAILABLE(1, 36)
#else
#define PANGO_AVAILABLE_IN_1_36 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_38
#define PANGO_DEPRECATED_IN_1_38 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_38_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_38 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_38_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_38
#define PANGO_AVAILABLE_IN_1_38 PANGO_UNAVAILABLE(1, 38)
#else
#define PANGO_AVAILABLE_IN_1_38 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_40
#define PANGO_DEPRECATED_IN_1_40 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_40_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_40 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_40_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_40
#define PANGO_AVAILABLE_IN_1_40 PANGO_UNAVAILABLE(1, 40)
#else
#define PANGO_AVAILABLE_IN_1_40 _PANGO_EXTERN
#endif
#if PANGO_VERSION_MIN_REQUIRED >= PANGO_VERSION_1_42
#define PANGO_DEPRECATED_IN_1_42 PANGO_DEPRECATED
#define PANGO_DEPRECATED_IN_1_42_FOR(f) PANGO_DEPRECATED_FOR(f)
#else
#define PANGO_DEPRECATED_IN_1_42 _PANGO_EXTERN
#define PANGO_DEPRECATED_IN_1_42_FOR(f) _PANGO_EXTERN
#endif
#if PANGO_VERSION_MAX_ALLOWED < PANGO_VERSION_1_42
#define PANGO_AVAILABLE_IN_1_42 PANGO_UNAVAILABLE(1, 42)
#else
#define PANGO_AVAILABLE_IN_1_42 _PANGO_EXTERN
#endif
#endif
