// GGHASH:VLtNbCacE8tYbvU6WPb6a0BEdxkHcnKJIvnEJ4.m.kKc00000a80
#ifndef __G_QUARK_H__
#define __G_QUARK_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#define G_DEFINE_QUARK(QN,q_n) GQuark q_n ##_quark (void) { static GQuark q; if G_UNLIKELY (q == 0) q = g_quark_from_static_string (#QN); return q; }
#endif
