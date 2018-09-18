// GGHASH:VsHB.9O5.YuNIxOio91ub6qLfwWWNTfNIn4.ElkTkuo800002d56
#ifndef __GTK_TREE_MODEL_H__
#define __GTK_TREE_MODEL_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <glib-object.h>
#include <gtk/gtkobject.h>
#define GTK_TYPE_TREE_MODEL (gtk_tree_model_get_type ())
#define GTK_TREE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_MODEL, GtkTreeModel))
#define GTK_IS_TREE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_MODEL))
#define GTK_TREE_MODEL_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TREE_MODEL, GtkTreeModelIface))
#define GTK_TYPE_TREE_ITER (gtk_tree_iter_get_type ())
#define GTK_TYPE_TREE_PATH (gtk_tree_path_get_type ())
#define GTK_TYPE_TREE_ROW_REFERENCE (gtk_tree_row_reference_get_type ())
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_tree_path_new_root() gtk_tree_path_new_first()
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_tree_model_get_iter_root(tree_model,iter) gtk_tree_model_get_iter_first(tree_model, iter)
#endif
#endif
