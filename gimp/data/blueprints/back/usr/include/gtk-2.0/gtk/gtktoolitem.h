// GGHASH:VRWexkv9tiuIkU5t0UViEoO9M18i.sj3S0MrCTUKIEhs0000168b
#ifndef __GTK_TOOL_ITEM_H__
#define __GTK_TOOL_ITEM_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbin.h>
#include <gtk/gtktooltips.h>
#include <gtk/gtkmenuitem.h>
#include <gtk/gtksizegroup.h>
#define GTK_TYPE_TOOL_ITEM (gtk_tool_item_get_type ())
#define GTK_TOOL_ITEM(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_TOOL_ITEM, GtkToolItem))
#define GTK_TOOL_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOOL_ITEM, GtkToolItemClass))
#define GTK_IS_TOOL_ITEM(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_TOOL_ITEM))
#define GTK_IS_TOOL_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOOL_ITEM))
#define GTK_TOOL_ITEM_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS((o), GTK_TYPE_TOOL_ITEM, GtkToolItemClass))
#ifndef GTK_DISABLE_DEPRECATED
#else
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
