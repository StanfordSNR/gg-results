// GGHASH:VxfABYVWk8frXCfeHmY40RousIy7xc88_gHGvYN3w9gs00001962
#ifndef __GDK_DND_H__
#define __GDK_DND_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GDK_H_INSIDE__) && !defined (GDK_COMPILATION)
#error "Only <gdk/gdk.h> can be included directly."
#endif
#include <gdk/gdktypes.h>
#define GDK_TYPE_DRAG_CONTEXT (gdk_drag_context_get_type ())
#define GDK_DRAG_CONTEXT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GDK_TYPE_DRAG_CONTEXT, GdkDragContext))
#define GDK_DRAG_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GDK_TYPE_DRAG_CONTEXT, GdkDragContextClass))
#define GDK_IS_DRAG_CONTEXT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GDK_TYPE_DRAG_CONTEXT))
#define GDK_IS_DRAG_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GDK_TYPE_DRAG_CONTEXT))
#define GDK_DRAG_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GDK_TYPE_DRAG_CONTEXT, GdkDragContextClass))
#if !defined (GDK_DISABLE_DEPRECATED) || defined (GDK_COMPILATION)
#endif
#ifndef GDK_DISABLE_DEPRECATED
#endif
#ifndef GDK_MULTIHEAD_SAFE
#ifndef GDK_DISABLE_DEPRECATED
#endif
#endif
#endif
