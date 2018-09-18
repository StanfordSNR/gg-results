// GGHASH:V8GDX43dntSpd9OuyvaTBqPVMRqHwRy6J_WXdosG3Gv400001747
#ifndef __GTK_MENU_ITEM_H__
#define __GTK_MENU_ITEM_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkitem.h>
#define GTK_TYPE_MENU_ITEM (gtk_menu_item_get_type ())
#define GTK_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MENU_ITEM, GtkMenuItem))
#define GTK_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MENU_ITEM, GtkMenuItemClass))
#define GTK_IS_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MENU_ITEM))
#define GTK_IS_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MENU_ITEM))
#define GTK_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MENU_ITEM, GtkMenuItemClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_menu_item_right_justify(menu_item) gtk_menu_item_set_right_justified ((menu_item), TRUE)
#endif
#endif
