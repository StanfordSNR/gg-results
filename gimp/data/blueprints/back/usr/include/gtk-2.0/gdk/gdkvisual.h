// GGHASH:VysZRrVuDKHU1S385WbncIyWWjK4VYOinOR5ZTqFrKZY000015d2
#ifndef __GDK_VISUAL_H__
#define __GDK_VISUAL_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#define GDK_TYPE_VISUAL (gdk_visual_get_type ())
#define GDK_VISUAL(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_VISUAL, GdkVisual))
#define GDK_VISUAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_VISUAL, GdkVisualClass))
#define GDK_IS_VISUAL(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_VISUAL))
#define GDK_IS_VISUAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_VISUAL))
#define GDK_VISUAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_VISUAL, GdkVisualClass))
#ifndef GDK_MULTIHEAD_SAFE
#endif
#ifndef GDK_DISABLE_DEPRECATED
#define gdk_visual_ref(v) g_object_ref(v)
#define gdk_visual_unref(v) g_object_unref(v)
#endif
#endif
