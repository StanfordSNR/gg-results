// GGHASH:VxhE5ux67O2BiCQPjfxTGHe4ovGALbGH8Np8mxz8tN_000001787
#ifndef __GTK_TREE_MODEL_FILTER_H__
#define __GTK_TREE_MODEL_FILTER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdkconfig.h>
#include <gtk/gtktreemodel.h>
#define GTK_TYPE_TREE_MODEL_FILTER (gtk_tree_model_filter_get_type ())
#define GTK_TREE_MODEL_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_MODEL_FILTER, GtkTreeModelFilter))
#define GTK_TREE_MODEL_FILTER_CLASS(vtable) (G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_TREE_MODEL_FILTER, GtkTreeModelFilterClass))
#define GTK_IS_TREE_MODEL_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_MODEL_FILTER))
#define GTK_IS_TREE_MODEL_FILTER_CLASS(vtable) (G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_TREE_MODEL_FILTER))
#define GTK_TREE_MODEL_FILTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_MODEL_FILTER, GtkTreeModelFilterClass))
#endif
