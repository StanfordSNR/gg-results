// GGHASH:VlDM6esk2KySBQSRzFLHSPSFmv1jB5TPKqzrsFZLeVnw00000ef3
#ifndef __GTK_RADIO_BUTTON_H__
#define __GTK_RADIO_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcheckbutton.h>
#define GTK_TYPE_RADIO_BUTTON (gtk_radio_button_get_type ())
#define GTK_RADIO_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RADIO_BUTTON, GtkRadioButton))
#define GTK_RADIO_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RADIO_BUTTON, GtkRadioButtonClass))
#define GTK_IS_RADIO_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RADIO_BUTTON))
#define GTK_IS_RADIO_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RADIO_BUTTON))
#define GTK_RADIO_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RADIO_BUTTON, GtkRadioButtonClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_radio_button_group gtk_radio_button_get_group
#endif
#endif
