// GGHASH:VJWdlgBGk7lIhMkd9PVanJb7Efd84K8ZDrLvenB2q8cY00001724
#ifndef __GTK_TREE_SELECTION_H__
#define __GTK_TREE_SELECTION_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktreeview.h>
#define GTK_TYPE_TREE_SELECTION (gtk_tree_selection_get_type ())
#define GTK_TREE_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_SELECTION, GtkTreeSelection))
#define GTK_TREE_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_SELECTION, GtkTreeSelectionClass))
#define GTK_IS_TREE_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_SELECTION))
#define GTK_IS_TREE_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_SELECTION))
#define GTK_TREE_SELECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_SELECTION, GtkTreeSelectionClass))
#endif
