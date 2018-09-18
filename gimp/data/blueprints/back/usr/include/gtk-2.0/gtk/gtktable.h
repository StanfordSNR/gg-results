// GGHASH:V6vsHqhIb_M_IC5sDe9Q.ymU4ACEH_OVxWmBqGXjl1bM0000131e
#ifndef __GTK_TABLE_H__
#define __GTK_TABLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_TABLE (gtk_table_get_type ())
#define GTK_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TABLE, GtkTable))
#define GTK_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TABLE, GtkTableClass))
#define GTK_IS_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TABLE))
#define GTK_IS_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TABLE))
#define GTK_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TABLE, GtkTableClass))
#endif
