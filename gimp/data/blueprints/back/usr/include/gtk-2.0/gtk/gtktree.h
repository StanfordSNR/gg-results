// GGHASH:VocwjKyuwePiyAnsgryD9ee1mpPqjfLMA3DMQ36DTxsw0000120c
#ifdef GTK_ENABLE_BROKEN
#ifndef __GTK_TREE_H__
#define __GTK_TREE_H__ 
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_TREE (gtk_tree_get_type ())
#define GTK_TREE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE, GtkTree))
#define GTK_TREE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE, GtkTreeClass))
#define GTK_IS_TREE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE))
#define GTK_IS_TREE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE))
#define GTK_TREE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE, GtkTreeClass))
#define GTK_IS_ROOT_TREE(obj) ((GtkObject*) GTK_TREE(obj)->root_tree == (GtkObject*)obj)
#define GTK_TREE_ROOT_TREE(obj) (GTK_TREE(obj)->root_tree ? GTK_TREE(obj)->root_tree : GTK_TREE(obj))
#define GTK_TREE_SELECTION_OLD(obj) (GTK_TREE_ROOT_TREE(obj)->selection)
#endif
#endif
