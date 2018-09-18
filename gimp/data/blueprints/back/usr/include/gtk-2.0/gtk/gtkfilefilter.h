// GGHASH:V0ju5o.Hdwc3j5ek0fiCUArIbcnPCaWnGAYmOYbTrKJw00000bda
#ifndef __GTK_FILE_FILTER_H__
#define __GTK_FILE_FILTER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <glib-object.h>
#define GTK_TYPE_FILE_FILTER (gtk_file_filter_get_type ())
#define GTK_FILE_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_FILTER, GtkFileFilter))
#define GTK_IS_FILE_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_FILTER))
#endif
