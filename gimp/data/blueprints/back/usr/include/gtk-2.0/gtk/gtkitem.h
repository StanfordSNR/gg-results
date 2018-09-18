// GGHASH:Ve3J.4f8NA3OUeZNg5.oSgBAo6QQRu0T2uhP2jSODSJg00000a4f
#ifndef __GTK_ITEM_H__
#define __GTK_ITEM_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbin.h>
#define GTK_TYPE_ITEM (gtk_item_get_type ())
#define GTK_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ITEM, GtkItem))
#define GTK_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ITEM, GtkItemClass))
#define GTK_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ITEM))
#define GTK_IS_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ITEM))
#define GTK_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ITEM, GtkItemClass))
#if !defined(GTK_DISABLE_DEPRECATED) || defined(GTK_COMPILATION)
#endif
#endif
