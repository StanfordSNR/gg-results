// GGHASH:V5KtOeLj6vBXnQP2nCS.9y2JBzgXsnBjTcoqlmy3Qld400000fab
#ifndef __GTK_CHECK_MENU_ITEM_H__
#define __GTK_CHECK_MENU_ITEM_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkmenuitem.h>
#define GTK_TYPE_CHECK_MENU_ITEM (gtk_check_menu_item_get_type ())
#define GTK_CHECK_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CHECK_MENU_ITEM, GtkCheckMenuItem))
#define GTK_CHECK_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CHECK_MENU_ITEM, GtkCheckMenuItemClass))
#define GTK_IS_CHECK_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CHECK_MENU_ITEM))
#define GTK_IS_CHECK_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CHECK_MENU_ITEM))
#define GTK_CHECK_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CHECK_MENU_ITEM, GtkCheckMenuItemClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_check_menu_item_set_state gtk_check_menu_item_set_active
#endif
#endif
