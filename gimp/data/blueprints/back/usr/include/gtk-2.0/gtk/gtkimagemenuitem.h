// GGHASH:VjZf4TJPnYmxR2fWVCUBZbpPVrG.yJQy.DrHogIM5tOs00000e38
#ifndef __GTK_IMAGE_MENU_ITEM_H__
#define __GTK_IMAGE_MENU_ITEM_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkmenuitem.h>
#define GTK_TYPE_IMAGE_MENU_ITEM (gtk_image_menu_item_get_type ())
#define GTK_IMAGE_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IMAGE_MENU_ITEM, GtkImageMenuItem))
#define GTK_IMAGE_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IMAGE_MENU_ITEM, GtkImageMenuItemClass))
#define GTK_IS_IMAGE_MENU_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IMAGE_MENU_ITEM))
#define GTK_IS_IMAGE_MENU_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IMAGE_MENU_ITEM))
#define GTK_IMAGE_MENU_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IMAGE_MENU_ITEM, GtkImageMenuItemClass))
#endif
