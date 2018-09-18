// GGHASH:Vd8N.XEt4KlULDrH.isZD2QgUWDxwIY9i3k9vhQpriHc000018e0
#ifndef __GTK_TREE_STORE_H__
#define __GTK_TREE_STORE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdkconfig.h>
#include <gtk/gtktreemodel.h>
#include <gtk/gtktreesortable.h>
#include <stdarg.h>
#define GTK_TYPE_TREE_STORE (gtk_tree_store_get_type ())
#define GTK_TREE_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_STORE, GtkTreeStore))
#define GTK_TREE_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TREE_STORE, GtkTreeStoreClass))
#define GTK_IS_TREE_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_STORE))
#define GTK_IS_TREE_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TREE_STORE))
#define GTK_TREE_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TREE_STORE, GtkTreeStoreClass))
#endif
