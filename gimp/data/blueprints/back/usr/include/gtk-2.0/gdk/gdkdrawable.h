// GGHASH:VFTuyGwSbqku2QPXPR4zYMMXBa6Ll5YE9UH7s9iyoYF400003a2e
#ifndef __GDK_DRAWABLE_H__
#define __GDK_DRAWABLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#include <gdk/gdkgc.h>
#include <gdk/gdkrgb.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <cairo.h>
#define GDK_TYPE_DRAWABLE (gdk_drawable_get_type ())
#define GDK_DRAWABLE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_DRAWABLE, GdkDrawable))
#define GDK_DRAWABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_DRAWABLE, GdkDrawableClass))
#define GDK_IS_DRAWABLE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_DRAWABLE))
#define GDK_IS_DRAWABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_DRAWABLE))
#define GDK_DRAWABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_DRAWABLE, GdkDrawableClass))
#ifndef GDK_DISABLE_DEPRECATED
#endif
#if !defined (GDK_DISABLE_DEPRECATED)
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_DISABLE_DEPRECATED
#define gdk_draw_pixmap gdk_draw_drawable
#define gdk_draw_bitmap gdk_draw_drawable
#endif
#endif
