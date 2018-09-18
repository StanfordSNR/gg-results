// GGHASH:V8RLiiZF8bDofCtH_LsPRX.kRtp0I3xzsTNz5qBLak5000000bda
#ifndef __GTK_TEXT_CHILD_H__
#define __GTK_TEXT_CHILD_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdkconfig.h>
#include <glib-object.h>
#define GTK_TYPE_TEXT_CHILD_ANCHOR (gtk_text_child_anchor_get_type ())
#define GTK_TEXT_CHILD_ANCHOR(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_TEXT_CHILD_ANCHOR, GtkTextChildAnchor))
#define GTK_TEXT_CHILD_ANCHOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_CHILD_ANCHOR, GtkTextChildAnchorClass))
#define GTK_IS_TEXT_CHILD_ANCHOR(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_TEXT_CHILD_ANCHOR))
#define GTK_IS_TEXT_CHILD_ANCHOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_CHILD_ANCHOR))
#define GTK_TEXT_CHILD_ANCHOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_CHILD_ANCHOR, GtkTextChildAnchorClass))
#endif
