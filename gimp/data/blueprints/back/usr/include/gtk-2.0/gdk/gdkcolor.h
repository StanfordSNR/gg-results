// GGHASH:V2CZtoC2BtYF4LWntLU5A8d_I9458iJEElWzKAcRZvfQ000015d2
#ifndef __GDK_COLOR_H__
#define __GDK_COLOR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <cairo.h>
#include <gdk/gdktypes.h>
#define GDK_TYPE_COLORMAP (gdk_colormap_get_type ())
#define GDK_COLORMAP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_COLORMAP, GdkColormap))
#define GDK_COLORMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_COLORMAP, GdkColormapClass))
#define GDK_IS_COLORMAP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_COLORMAP))
#define GDK_IS_COLORMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_COLORMAP))
#define GDK_COLORMAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_COLORMAP, GdkColormapClass))
#define GDK_TYPE_COLOR (gdk_color_get_type ())
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#if !defined (GDK_DISABLE_DEPRECATED) || defined (GDK_COMPILATION)
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#if !defined (GDK_DISABLE_DEPRECATED) || defined (GDK_COMPILATION)
#endif
#endif
