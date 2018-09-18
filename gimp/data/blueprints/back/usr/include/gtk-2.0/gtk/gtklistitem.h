// GGHASH:VGPV6iNAw1_5Th9sR3HZyDunM.IaexFp_taiD7QsTlYA00000cd6
#if !defined (GTK_DISABLE_DEPRECATED) || defined (__GTK_LIST_ITEM_C__)
#ifndef __GTK_LIST_ITEM_H__
#define __GTK_LIST_ITEM_H__ 
#include <gtk/gtk.h>
#define GTK_TYPE_LIST_ITEM (gtk_list_item_get_type ())
#define GTK_LIST_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LIST_ITEM, GtkListItem))
#define GTK_LIST_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LIST_ITEM, GtkListItemClass))
#define GTK_IS_LIST_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LIST_ITEM))
#define GTK_IS_LIST_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LIST_ITEM))
#define GTK_LIST_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LIST_ITEM, GtkListItemClass))
#endif
#endif
