// GGHASH:VXN.PbBhOuHHOHxYK_ZKHLbbZAVR2hTaJT2CHSux2wJU00000b9f
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_OPTION_MENU_H__
#define __GTK_OPTION_MENU_H__ 
#include <gtk/gtk.h>
#define GTK_TYPE_OPTION_MENU (gtk_option_menu_get_type ())
#define GTK_OPTION_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_OPTION_MENU, GtkOptionMenu))
#define GTK_OPTION_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_OPTION_MENU, GtkOptionMenuClass))
#define GTK_IS_OPTION_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_OPTION_MENU))
#define GTK_IS_OPTION_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_OPTION_MENU))
#define GTK_OPTION_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_OPTION_MENU, GtkOptionMenuClass))
#endif
#endif