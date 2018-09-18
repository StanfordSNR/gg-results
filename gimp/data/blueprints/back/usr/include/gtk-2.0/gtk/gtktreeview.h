// GGHASH:VeTvyidJV0M3rnvzSGi.4H45lxCkkLqyQZ3KlYF1Yjlw000059b3
#ifndef __GTK_TREE_VIEW_H__
#define __GTK_TREE_VIEW_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#include <gtk/gtktreemodel.h>
#include <gtk/gtktreeviewcolumn.h>
#include <gtk/gtkdnd.h>
#include <gtk/gtkentry.h>
#define GTK_TYPE_TREE_VIEW (gtk_tree_view_get_type ())
#define GTK_TREE_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_VIEW, GtkTreeView))
#define GTK_TREE_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_VIEW, GtkTreeViewClass))
#define GTK_IS_TREE_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_VIEW))
#define GTK_IS_TREE_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_VIEW))
#define GTK_TREE_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_VIEW, GtkTreeViewClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
