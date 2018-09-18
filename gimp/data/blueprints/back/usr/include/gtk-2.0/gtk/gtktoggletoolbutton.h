// GGHASH:V6ALMCSAc1jhGK.bAFDDfVkNQ1j_07dUdIBRXultroEs00000bff
#ifndef __GTK_TOGGLE_TOOL_BUTTON_H__
#define __GTK_TOGGLE_TOOL_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktoolbutton.h>
#define GTK_TYPE_TOGGLE_TOOL_BUTTON (gtk_toggle_tool_button_get_type ())
#define GTK_TOGGLE_TOOL_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOGGLE_TOOL_BUTTON, GtkToggleToolButton))
#define GTK_TOGGLE_TOOL_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOGGLE_TOOL_BUTTON, GtkToggleToolButtonClass))
#define GTK_IS_TOGGLE_TOOL_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOGGLE_TOOL_BUTTON))
#define GTK_IS_TOGGLE_TOOL_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOGGLE_TOOL_BUTTON))
#define GTK_TOGGLE_TOOL_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_TOGGLE_TOOL_BUTTON, GtkToggleToolButtonClass))
#endif
