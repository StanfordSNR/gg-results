// GGHASH:VXgXwuFDyz1atNllw75gJ_g9ByT7_cTU5h3x5f5R219E00000e50
#ifndef __GTK_MENU_TOOL_BUTTON_H__
#define __GTK_MENU_TOOL_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkmenu.h>
#include <gtk/gtktoolbutton.h>
#define GTK_TYPE_MENU_TOOL_BUTTON (gtk_menu_tool_button_get_type ())
#define GTK_MENU_TOOL_BUTTON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_MENU_TOOL_BUTTON, GtkMenuToolButton))
#define GTK_MENU_TOOL_BUTTON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), GTK_TYPE_MENU_TOOL_BUTTON, GtkMenuToolButtonClass))
#define GTK_IS_MENU_TOOL_BUTTON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_MENU_TOOL_BUTTON))
#define GTK_IS_MENU_TOOL_BUTTON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GTK_TYPE_MENU_TOOL_BUTTON))
#define GTK_MENU_TOOL_BUTTON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_MENU_TOOL_BUTTON, GtkMenuToolButtonClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
