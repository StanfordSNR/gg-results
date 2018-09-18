// GGHASH:VOEEDXx9BXvFDAypVZ9.5DPl5.zutVB7iXnS6xmoYKJw00000c75
#ifndef __GTK_RADIO_TOOL_BUTTON_H__
#define __GTK_RADIO_TOOL_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktoggletoolbutton.h>
#define GTK_TYPE_RADIO_TOOL_BUTTON (gtk_radio_tool_button_get_type ())
#define GTK_RADIO_TOOL_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RADIO_TOOL_BUTTON, GtkRadioToolButton))
#define GTK_RADIO_TOOL_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RADIO_TOOL_BUTTON, GtkRadioToolButtonClass))
#define GTK_IS_RADIO_TOOL_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RADIO_TOOL_BUTTON))
#define GTK_IS_RADIO_TOOL_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RADIO_TOOL_BUTTON))
#define GTK_RADIO_TOOL_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_RADIO_TOOL_BUTTON, GtkRadioToolButtonClass))
#endif
