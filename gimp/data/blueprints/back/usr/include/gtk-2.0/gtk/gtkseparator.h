// GGHASH:VIU2a9BZYXY5L6E2_0RdI8RDfFK0GvVRa0utJTBXCUmU00000901
#ifndef __GTK_SEPARATOR_H__
#define __GTK_SEPARATOR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_SEPARATOR (gtk_separator_get_type ())
#define GTK_SEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SEPARATOR, GtkSeparator))
#define GTK_SEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SEPARATOR, GtkSeparatorClass))
#define GTK_IS_SEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SEPARATOR))
#define GTK_IS_SEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SEPARATOR))
#define GTK_SEPARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SEPARATOR, GtkSeparatorClass))
#endif
