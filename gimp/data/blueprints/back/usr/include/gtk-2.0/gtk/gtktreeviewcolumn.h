// GGHASH:VcXPbzKVA2jSgG0tVtfpWuvxYcx6HyaIcChH5JIiBDnM00002ed3
#ifndef __GTK_TREE_VIEW_COLUMN_H__
#define __GTK_TREE_VIEW_COLUMN_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderer.h>
#include <gtk/gtktreemodel.h>
#include <gtk/gtktreesortable.h>
#include <gtk/gtkobject.h>
#define GTK_TYPE_TREE_VIEW_COLUMN (gtk_tree_view_column_get_type ())
#define GTK_TREE_VIEW_COLUMN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_VIEW_COLUMN, GtkTreeViewColumn))
#define GTK_TREE_VIEW_COLUMN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_VIEW_COLUMN, GtkTreeViewColumnClass))
#define GTK_IS_TREE_VIEW_COLUMN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_VIEW_COLUMN))
#define GTK_IS_TREE_VIEW_COLUMN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_VIEW_COLUMN))
#define GTK_TREE_VIEW_COLUMN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_VIEW_COLUMN, GtkTreeViewColumnClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
