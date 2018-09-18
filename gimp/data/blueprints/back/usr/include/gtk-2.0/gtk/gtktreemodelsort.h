// GGHASH:VxVslxRyO8U9zWDCSCN2uaXPeqOwpJ160Vc6.7SxwxvY00001068
#ifndef __GTK_TREE_MODEL_SORT_H__
#define __GTK_TREE_MODEL_SORT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdkconfig.h>
#include <gtk/gtktreemodel.h>
#include <gtk/gtktreesortable.h>
#define GTK_TYPE_TREE_MODEL_SORT (gtk_tree_model_sort_get_type ())
#define GTK_TREE_MODEL_SORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_MODEL_SORT, GtkTreeModelSort))
#define GTK_TREE_MODEL_SORT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_MODEL_SORT, GtkTreeModelSortClass))
#define GTK_IS_TREE_MODEL_SORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_MODEL_SORT))
#define GTK_IS_TREE_MODEL_SORT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_MODEL_SORT))
#define GTK_TREE_MODEL_SORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_MODEL_SORT, GtkTreeModelSortClass))
#endif
