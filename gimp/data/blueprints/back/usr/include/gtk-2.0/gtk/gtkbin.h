// GGHASH:VAFjgFh4gJmjh_hfXmpZDq_Qwe_5k2m4zmUNIB9761P0000008c1
#ifndef __GTK_BIN_H__
#define __GTK_BIN_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_BIN (gtk_bin_get_type ())
#define GTK_BIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BIN, GtkBin))
#define GTK_BIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BIN, GtkBinClass))
#define GTK_IS_BIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BIN))
#define GTK_IS_BIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BIN))
#define GTK_BIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BIN, GtkBinClass))
#endif
