// GGHASH:V04I7htY7KgHUsqZrEPUNN99h07FMMk.6_VozQ_0vUnc00000b2b
#ifndef __GTK_SEPARATOR_TOOL_ITEM_H__
#define __GTK_SEPARATOR_TOOL_ITEM_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktoolitem.h>
#define GTK_TYPE_SEPARATOR_TOOL_ITEM (gtk_separator_tool_item_get_type ())
#define GTK_SEPARATOR_TOOL_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SEPARATOR_TOOL_ITEM, GtkSeparatorToolItem))
#define GTK_SEPARATOR_TOOL_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SEPARATOR_TOOL_ITEM, GtkSeparatorToolItemClass))
#define GTK_IS_SEPARATOR_TOOL_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SEPARATOR_TOOL_ITEM))
#define GTK_IS_SEPARATOR_TOOL_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SEPARATOR_TOOL_ITEM))
#define GTK_SEPARATOR_TOOL_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_SEPARATOR_TOOL_ITEM, GtkSeparatorToolItemClass))
#endif
