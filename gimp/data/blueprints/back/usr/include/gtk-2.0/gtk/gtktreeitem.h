// GGHASH:VcH6lfJp0.25Qb_gFCIlWfXUeei1pUwZaujyBCp8KEUU00000beb
#ifdef GTK_ENABLE_BROKEN
#ifndef __GTK_TREE_ITEM_H__
#define __GTK_TREE_ITEM_H__ 
#include <gtk/gtkitem.h>
#define GTK_TYPE_TREE_ITEM (gtk_tree_item_get_type ())
#define GTK_TREE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_ITEM, GtkTreeItem))
#define GTK_TREE_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_ITEM, GtkTreeItemClass))
#define GTK_IS_TREE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_ITEM))
#define GTK_IS_TREE_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_ITEM))
#define GTK_TREE_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_ITEM, GtkTreeItemClass))
#define GTK_TREE_ITEM_SUBTREE(obj) (GTK_TREE_ITEM(obj)->subtree)
#endif
#endif
