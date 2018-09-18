// GGHASH:V_Cngdkdx6rGMJdzMQijiWP7wF1fxxTiedcM95N2w8IU0000185a
#ifndef __GDK_PANGO_H__
#define __GDK_PANGO_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#define GDK_TYPE_PANGO_RENDERER (gdk_pango_renderer_get_type())
#define GDK_PANGO_RENDERER(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_PANGO_RENDERER, GdkPangoRenderer))
#define GDK_IS_PANGO_RENDERER(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_PANGO_RENDERER))
#define GDK_PANGO_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_PANGO_RENDERER, GdkPangoRendererClass))
#define GDK_IS_PANGO_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_PANGO_RENDERER))
#define GDK_PANGO_RENDERER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_PANGO_RENDERER, GdkPangoRendererClass))
#ifndef GDK_MULTIHEAD_SAFE
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#endif
