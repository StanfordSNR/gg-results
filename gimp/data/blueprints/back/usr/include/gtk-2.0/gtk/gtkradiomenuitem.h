// GGHASH:VuDMWB_VK_rOY68WNwu93BnDkYx0MPuX.W0RaMHDLMnM00000e6c
#ifndef __GTK_RADIO_MENU_ITEM_H__
#define __GTK_RADIO_MENU_ITEM_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcheckmenuitem.h>
#define GTK_TYPE_RADIO_MENU_ITEM (gtk_radio_menu_item_get_type ())
#define GTK_RADIO_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RADIO_MENU_ITEM, GtkRadioMenuItem))
#define GTK_RADIO_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RADIO_MENU_ITEM, GtkRadioMenuItemClass))
#define GTK_IS_RADIO_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RADIO_MENU_ITEM))
#define GTK_IS_RADIO_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RADIO_MENU_ITEM))
#define GTK_RADIO_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RADIO_MENU_ITEM, GtkRadioMenuItemClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_radio_menu_item_group gtk_radio_menu_item_get_group
#endif
#endif
