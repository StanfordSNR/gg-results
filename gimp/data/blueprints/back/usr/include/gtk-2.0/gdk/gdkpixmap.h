// GGHASH:V6S3qGY3jz9rdWdh73Yf3UYwKSN9hJCVlKIM7psBi06c000013d2
#ifndef __GDK_PIXMAP_H__
#define __GDK_PIXMAP_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#include <gdk/gdkdrawable.h>
#define GDK_TYPE_PIXMAP (gdk_pixmap_get_type ())
#define GDK_PIXMAP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PIXMAP, GdkPixmap))
#define GDK_PIXMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_PIXMAP, GdkPixmapObjectClass))
#define GDK_IS_PIXMAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PIXMAP))
#define GDK_IS_PIXMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_PIXMAP))
#define GDK_PIXMAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_PIXMAP, GdkPixmapObjectClass))
#define GDK_PIXMAP_OBJECT(object) ((GdkPixmapObject *) GDK_PIXMAP (object))
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#ifndef GDK_DISABLE_DEPRECATED
#define gdk_bitmap_ref g_object_ref
#define gdk_bitmap_unref g_object_unref
#define gdk_pixmap_ref g_object_ref
#define gdk_pixmap_unref g_object_unref
#endif
#endif
