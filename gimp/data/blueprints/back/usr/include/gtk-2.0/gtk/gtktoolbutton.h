// GGHASH:VlpV9R1WuYe0X3KVvoAwLpHK8OQ2NuWK3INn0.VUVKUw00000fa9
#ifndef __GTK_TOOL_BUTTON_H__
#define __GTK_TOOL_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktoolitem.h>
#define GTK_TYPE_TOOL_BUTTON (gtk_tool_button_get_type ())
#define GTK_TOOL_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOL_BUTTON, GtkToolButton))
#define GTK_TOOL_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOOL_BUTTON, GtkToolButtonClass))
#define GTK_IS_TOOL_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOL_BUTTON))
#define GTK_IS_TOOL_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOOL_BUTTON))
#define GTK_TOOL_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_TOOL_BUTTON, GtkToolButtonClass))
#endif
