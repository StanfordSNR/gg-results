// GGHASH:Vr_OiyMyup7yXxFDMzQ_Q03rCoeNZEung4G5VfH3h66w000020c3
#ifndef __GDK_GC_H__
#define __GDK_GC_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdkcolor.h>
#include <gdk/gdktypes.h>
#define GDK_TYPE_GC (gdk_gc_get_type ())
#define GDK_GC(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_GC, GdkGC))
#define GDK_GC_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_GC, GdkGCClass))
#define GDK_IS_GC(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_GC))
#define GDK_IS_GC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_GC))
#define GDK_GC_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_GC, GdkGCClass))
#ifndef GDK_DISABLE_DEPRECATED
#define gdk_gc_destroy g_object_unref
#endif
#endif
