// GGHASH:VO_AeNJ0d5jtZg9ROWyLbZ0lX7SKhRZGkT3F4DY82q84000012de
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_RULER_H__
#define __GTK_RULER_H__ 
#include <gtk/gtkwidget.h>
#define GTK_TYPE_RULER (gtk_ruler_get_type ())
#define GTK_RULER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RULER, GtkRuler))
#define GTK_RULER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RULER, GtkRulerClass))
#define GTK_IS_RULER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RULER))
#define GTK_IS_RULER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RULER))
#define GTK_RULER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RULER, GtkRulerClass))
#endif
#endif
