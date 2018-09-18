// GGHASH:VJzYvE_huIO2V.PsIuezUBTc3KdOCEUZwlq.noeyMvFg00000d29
#ifndef __GTK_VIEWPORT_H__
#define __GTK_VIEWPORT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkadjustment.h>
#include <gtk/gtkbin.h>
#define GTK_TYPE_VIEWPORT (gtk_viewport_get_type ())
#define GTK_VIEWPORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VIEWPORT, GtkViewport))
#define GTK_VIEWPORT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VIEWPORT, GtkViewportClass))
#define GTK_IS_VIEWPORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VIEWPORT))
#define GTK_IS_VIEWPORT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VIEWPORT))
#define GTK_VIEWPORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VIEWPORT, GtkViewportClass))
#endif
