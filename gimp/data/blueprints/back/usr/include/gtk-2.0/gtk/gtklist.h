// GGHASH:VLKMIu4Gso5NnlxxEatNGVnRfy4qbjBl5hCcQdZ6Nqjk000012e6
#if !defined (GTK_DISABLE_DEPRECATED) || defined (__GTK_LIST_C__)
#ifndef __GTK_LIST_H__
#define __GTK_LIST_H__ 
#include <gtk/gtk.h>
#define GTK_TYPE_LIST (gtk_list_get_type ())
#define GTK_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LIST, GtkList))
#define GTK_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LIST, GtkListClass))
#define GTK_IS_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LIST))
#define GTK_IS_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LIST))
#define GTK_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LIST, GtkListClass))
#endif
#endif
