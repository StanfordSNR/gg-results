// GGHASH:VSp97PAMVy.QjeYd7AE351qSlF1eWWfpSEvSEuZyMq5s00000a09
#ifndef __GTK_SEPARATOR_MENU_ITEM_H__
#define __GTK_SEPARATOR_MENU_ITEM_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkmenuitem.h>
#define GTK_TYPE_SEPARATOR_MENU_ITEM (gtk_separator_menu_item_get_type ())
#define GTK_SEPARATOR_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SEPARATOR_MENU_ITEM, GtkSeparatorMenuItem))
#define GTK_SEPARATOR_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SEPARATOR_MENU_ITEM, GtkSeparatorMenuItemClass))
#define GTK_IS_SEPARATOR_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SEPARATOR_MENU_ITEM))
#define GTK_IS_SEPARATOR_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SEPARATOR_MENU_ITEM))
#define GTK_SEPARATOR_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SEPARATOR_MENU_ITEM, GtkSeparatorMenuItemClass))
#endif
