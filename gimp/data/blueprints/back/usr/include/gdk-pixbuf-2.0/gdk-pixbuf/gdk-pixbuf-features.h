// GGHASH:V5AHELT80rTJkBTYkRZX169y5avvT5xT51yMkUI6.FbY00000de4
#if defined(GDK_PIXBUF_DISABLE_SINGLE_INCLUDES) && !defined (GDK_PIXBUF_H_INSIDE) && !defined (GDK_PIXBUF_COMPILATION)
#error "Only <gdk-pixbuf/gdk-pixbuf.h> can be included directly."
#endif
#ifndef GDK_PIXBUF_FEATURES_H
#define GDK_PIXBUF_FEATURES_H 1
#include <glib.h>
#define GDK_PIXBUF_MAJOR (2)
#define GDK_PIXBUF_MINOR (36)
#define GDK_PIXBUF_MICRO (11)
#define GDK_PIXBUF_VERSION "2.36.11"
#ifndef _GDK_PIXBUF_EXTERN
#define _GDK_PIXBUF_EXTERN extern
#endif
#ifdef G_PLATFORM_WIN32
# ifdef GDK_PIXBUF_STATIC_COMPILATION
#define GDK_PIXBUF_VAR extern
# else
# ifdef GDK_PIXBUF_C_COMPILATION
# ifdef DLL_EXPORT
#define GDK_PIXBUF_VAR _GDK_PIXBUF_EXTERN
# else
#define GDK_PIXBUF_VAR extern
# endif
# else
#define GDK_PIXBUF_VAR extern __declspec(dllimport)
# endif
# endif
#else
#define GDK_PIXBUF_VAR _GDK_PIXBUF_EXTERN
#endif
#endif
