// GGHASH:VrhoS5HuaS9RCXiMPernZgYvNHLniN1MXPUdhPny6hbU00005515
#if defined(GDK_PIXBUF_DISABLE_SINGLE_INCLUDES) && !defined (GDK_PIXBUF_H_INSIDE) && !defined (GDK_PIXBUF_COMPILATION)
#error "Only <gdk-pixbuf/gdk-pixbuf.h> can be included directly."
#endif
#ifndef GDK_PIXBUF_MACROS_H
#define GDK_PIXBUF_MACROS_H 
#include <glib.h>
#include <gdk-pixbuf/gdk-pixbuf-features.h>
#define GDK_PIXBUF_CHECK_VERSION(major,minor,micro) (GDK_PIXBUF_MAJOR > (major) || (GDK_PIXBUF_MAJOR == (major) && GDK_PIXBUF_MINOR > (minor)) || (GDK_PIXBUF_MAJOR == (major) && GDK_PIXBUF_MINOR == (minor) && GDK_PIXBUF_MICRO >= (micro)))
#define GDK_PIXBUF_VERSION_2_0 (G_ENCODE_VERSION (2, 0))
#define GDK_PIXBUF_VERSION_2_2 (G_ENCODE_VERSION (2, 2))
#define GDK_PIXBUF_VERSION_2_4 (G_ENCODE_VERSION (2, 4))
#define GDK_PIXBUF_VERSION_2_6 (G_ENCODE_VERSION (2, 6))
#define GDK_PIXBUF_VERSION_2_8 (G_ENCODE_VERSION (2, 8))
#define GDK_PIXBUF_VERSION_2_10 (G_ENCODE_VERSION (2, 10))
#define GDK_PIXBUF_VERSION_2_12 (G_ENCODE_VERSION (2, 12))
#define GDK_PIXBUF_VERSION_2_14 (G_ENCODE_VERSION (2, 14))
#define GDK_PIXBUF_VERSION_2_16 (G_ENCODE_VERSION (2, 16))
#define GDK_PIXBUF_VERSION_2_18 (G_ENCODE_VERSION (2, 18))
#define GDK_PIXBUF_VERSION_2_20 (G_ENCODE_VERSION (2, 20))
#define GDK_PIXBUF_VERSION_2_22 (G_ENCODE_VERSION (2, 22))
#define GDK_PIXBUF_VERSION_2_24 (G_ENCODE_VERSION (2, 24))
#define GDK_PIXBUF_VERSION_2_26 (G_ENCODE_VERSION (2, 26))
#define GDK_PIXBUF_VERSION_2_28 (G_ENCODE_VERSION (2, 28))
#define GDK_PIXBUF_VERSION_2_30 (G_ENCODE_VERSION (2, 30))
#define GDK_PIXBUF_VERSION_2_32 (G_ENCODE_VERSION (2, 32))
#define GDK_PIXBUF_VERSION_2_34 (G_ENCODE_VERSION (2, 34))
#define GDK_PIXBUF_VERSION_2_36 (G_ENCODE_VERSION (2, 36))
#ifndef __GTK_DOC_IGNORE__
#if (GDK_PIXBUF_MINOR % 2)
#define GDK_PIXBUF_VERSION_CUR_STABLE (G_ENCODE_VERSION (GDK_PIXBUF_MAJOR, GDK_PIXBUF_MINOR + 1))
#else
#define GDK_PIXBUF_VERSION_CUR_STABLE (G_ENCODE_VERSION (GDK_PIXBUF_MAJOR, GDK_PIXBUF_MINOR))
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if (GDK_PIXBUF_MINOR % 2)
#define GDK_PIXBUF_VERSION_PREV_STABLE (G_ENCODE_VERSION (GDK_PIXBUF_MAJOR, GDK_PIXBUF_MINOR - 1))
#else
#define GDK_PIXBUF_VERSION_PREV_STABLE (G_ENCODE_VERSION (GDK_PIXBUF_MAJOR, GDK_PIXBUF_MINOR - 2))
#endif
#endif
#ifndef GDK_PIXBUF_VERSION_MIN_REQUIRED
#define GDK_PIXBUF_VERSION_MIN_REQUIRED (GDK_PIXBUF_VERSION_CUR_STABLE)
#endif
#ifndef GDK_PIXBUF_VERSION_MAX_ALLOWED
#if GDK_PIXBUF_VERSION_MIN_REQUIRED > GDK_PIXBUF_VERSION_PREV_STABLE
#define GDK_PIXBUF_VERSION_MAX_ALLOWED GDK_PIXBUF_VERSION_MIN_REQUIRED
#else
#define GDK_PIXBUF_VERSION_MAX_ALLOWED GDK_PIXBUF_VERSION_CUR_STABLE
#endif
#endif
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_MIN_REQUIRED
#error "GDK_PIXBUF_VERSION_MAX_ALLOWED must be >= GDK_PIXBUF_VERSION_MIN_REQUIRED"
#endif
#if GDK_PIXBUF_VERSION_MIN_REQUIRED < GDK_PIXBUF_VERSION_2_0
#error "GDK_PIXBUF_VERSION_MIN_REQUIRED must be >= GDK_PIXBUF_VERSION_2_0"
#endif
#ifndef __GTK_DOC_IGNORE__
#define GDK_PIXBUF_AVAILABLE_IN_ALL _GDK_PIXBUF_EXTERN
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_0
#define GDK_PIXBUF_DEPRECATED_IN_2_0 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_0_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_0 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_0_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_0
#define GDK_PIXBUF_AVAILABLE_IN_2_0 G_UNAVAILABLE(2, 0) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_0 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_2
#define GDK_PIXBUF_DEPRECATED_IN_2_2 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_2_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_2 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_2_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_2
#define GDK_PIXBUF_AVAILABLE_IN_2_2 G_UNAVAILABLE(2, 2) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_2 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_4
#define GDK_PIXBUF_DEPRECATED_IN_2_4 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_4_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_4 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_4_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_4
#define GDK_PIXBUF_AVAILABLE_IN_2_4 G_UNAVAILABLE(2, 4) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_4 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_6
#define GDK_PIXBUF_DEPRECATED_IN_2_6 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_6_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_6 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_6_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_6
#define GDK_PIXBUF_AVAILABLE_IN_2_6 G_UNAVAILABLE(2, 6) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_6 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_8
#define GDK_PIXBUF_DEPRECATED_IN_2_8 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_8_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_8 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_8_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_8
#define GDK_PIXBUF_AVAILABLE_IN_2_8 G_UNAVAILABLE(2, 8) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_8 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_10
#define GDK_PIXBUF_DEPRECATED_IN_2_10 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_10_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_10 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_10_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_10
#define GDK_PIXBUF_AVAILABLE_IN_2_10 G_UNAVAILABLE(2, 10) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_10 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_12
#define GDK_PIXBUF_DEPRECATED_IN_2_12 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_12_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_12 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_12_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_12
#define GDK_PIXBUF_AVAILABLE_IN_2_12 G_UNAVAILABLE(2, 12) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_12 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_14
#define GDK_PIXBUF_DEPRECATED_IN_2_14 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_14_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_14 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_14_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_14
#define GDK_PIXBUF_AVAILABLE_IN_2_14 G_UNAVAILABLE(2, 14) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_14 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_16
#define GDK_PIXBUF_DEPRECATED_IN_2_16 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_16_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_16 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_16_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_16
#define GDK_PIXBUF_AVAILABLE_IN_2_16 G_UNAVAILABLE(2, 16) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_16 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_18
#define GDK_PIXBUF_DEPRECATED_IN_2_18 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_18_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_18 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_18_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_18
#define GDK_PIXBUF_AVAILABLE_IN_2_18 G_UNAVAILABLE(2, 18) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_18 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_20
#define GDK_PIXBUF_DEPRECATED_IN_2_20 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_20_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_20 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_20_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_20
#define GDK_PIXBUF_AVAILABLE_IN_2_20 G_UNAVAILABLE(2, 20) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_20 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_22
#define GDK_PIXBUF_DEPRECATED_IN_2_22 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_22_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_22 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_22_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_22
#define GDK_PIXBUF_AVAILABLE_IN_2_22 G_UNAVAILABLE(2, 22) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_22 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_24
#define GDK_PIXBUF_DEPRECATED_IN_2_24 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_24_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_24 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_24_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_24
#define GDK_PIXBUF_AVAILABLE_IN_2_24 G_UNAVAILABLE(2, 22) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_24 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_26
#define GDK_PIXBUF_DEPRECATED_IN_2_26 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_26_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_26 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_26_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_26
#define GDK_PIXBUF_AVAILABLE_IN_2_26 G_UNAVAILABLE(2, 22) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_26 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_28
#define GDK_PIXBUF_DEPRECATED_IN_2_28 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_28_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_28 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_28_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_28
#define GDK_PIXBUF_AVAILABLE_IN_2_28 G_UNAVAILABLE(2, 22) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_28 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_30
#define GDK_PIXBUF_DEPRECATED_IN_2_30 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_30_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_30 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_30_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_30
#define GDK_PIXBUF_AVAILABLE_IN_2_30 G_UNAVAILABLE(2, 22) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_30 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_32
#define GDK_PIXBUF_DEPRECATED_IN_2_32 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_32_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_32 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_32_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_32
#define GDK_PIXBUF_AVAILABLE_IN_2_32 G_UNAVAILABLE(2, 22) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_32 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_34
#define GDK_PIXBUF_DEPRECATED_IN_2_34 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_34_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_34 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_34_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_34
#define GDK_PIXBUF_AVAILABLE_IN_2_34 G_UNAVAILABLE(2, 22) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_34 _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MIN_REQUIRED >= GDK_PIXBUF_VERSION_2_36
#define GDK_PIXBUF_DEPRECATED_IN_2_36 G_DEPRECATED _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_36_FOR(f) G_DEPRECATED_FOR(f) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_DEPRECATED_IN_2_36 _GDK_PIXBUF_EXTERN
#define GDK_PIXBUF_DEPRECATED_IN_2_36_FOR(f) _GDK_PIXBUF_EXTERN
#endif
#endif
#ifndef __GTK_DOC_IGNORE__
#if GDK_PIXBUF_VERSION_MAX_ALLOWED < GDK_PIXBUF_VERSION_2_36
#define GDK_PIXBUF_AVAILABLE_IN_2_36 G_UNAVAILABLE(2, 22) _GDK_PIXBUF_EXTERN
#else
#define GDK_PIXBUF_AVAILABLE_IN_2_36 _GDK_PIXBUF_EXTERN
#endif
#endif
#endif