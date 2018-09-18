// GGHASH:VeXo7wbOyx9eWY7EbJ07HzHwb.x6Oo3pPpJwzzWNoblI0000104b
#ifndef __GTK_TREE_SORTABLE_H__
#define __GTK_TREE_SORTABLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktreemodel.h>
#include <gtk/gtktypeutils.h>
#define GTK_TYPE_TREE_SORTABLE (gtk_tree_sortable_get_type ())
#define GTK_TREE_SORTABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_SORTABLE, GtkTreeSortable))
#define GTK_TREE_SORTABLE_CLASS(obj) (G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_TREE_SORTABLE, GtkTreeSortableIface))
#define GTK_IS_TREE_SORTABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_SORTABLE))
#define GTK_TREE_SORTABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TREE_SORTABLE, GtkTreeSortableIface))
#endif
