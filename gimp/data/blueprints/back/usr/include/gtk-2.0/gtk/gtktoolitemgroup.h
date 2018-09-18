// GGHASH:VzgUuzsK63LVKg5jrTRni0Nt0mt7Roknjb0C06gAA5CQ000013d9
#ifndef __GTK_TOOL_ITEM_GROUP_H__
#define __GTK_TOOL_ITEM_GROUP_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#include <gtk/gtktoolitem.h>
#define GTK_TYPE_TOOL_ITEM_GROUP (gtk_tool_item_group_get_type ())
#define GTK_TOOL_ITEM_GROUP(obj) (G_TYPE_CHECK_INSTANCE_CAST (obj, GTK_TYPE_TOOL_ITEM_GROUP, GtkToolItemGroup))
#define GTK_TOOL_ITEM_GROUP_CLASS(cls) (G_TYPE_CHECK_CLASS_CAST (cls, GTK_TYPE_TOOL_ITEM_GROUP, GtkToolItemGroupClass))
#define GTK_IS_TOOL_ITEM_GROUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE (obj, GTK_TYPE_TOOL_ITEM_GROUP))
#define GTK_IS_TOOL_ITEM_GROUP_CLASS(obj) (G_TYPE_CHECK_CLASS_TYPE (obj, GTK_TYPE_TOOL_ITEM_GROUP))
#define GTK_TOOL_ITEM_GROUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOOL_ITEM_GROUP, GtkToolItemGroupClass))
#endif
