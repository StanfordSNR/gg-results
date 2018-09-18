// GGHASH:VwEbIkDgeGw.fb_3BxBURnGzI8Npf5cF.izM9In1F.iw00001481
#ifndef __GTK_TREE_DND_H__
#define __GTK_TREE_DND_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktreemodel.h>
#include <gtk/gtkdnd.h>
#define GTK_TYPE_TREE_DRAG_SOURCE (gtk_tree_drag_source_get_type ())
#define GTK_TREE_DRAG_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_DRAG_SOURCE, GtkTreeDragSource))
#define GTK_IS_TREE_DRAG_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_DRAG_SOURCE))
#define GTK_TREE_DRAG_SOURCE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TREE_DRAG_SOURCE, GtkTreeDragSourceIface))
#define GTK_TYPE_TREE_DRAG_DEST (gtk_tree_drag_dest_get_type ())
#define GTK_TREE_DRAG_DEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TREE_DRAG_DEST, GtkTreeDragDest))
#define GTK_IS_TREE_DRAG_DEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TREE_DRAG_DEST))
#define GTK_TREE_DRAG_DEST_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_TREE_DRAG_DEST, GtkTreeDragDestIface))
#endif
