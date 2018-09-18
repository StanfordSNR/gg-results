// GGHASH:VrzHt5uTtHlzESXbY0.bV6nAkuAH0nPaf6YjnoZ1s_jM0000194b
#ifndef __GTK_SPIN_BUTTON_H__
#define __GTK_SPIN_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkentry.h>
#include <gtk/gtkadjustment.h>
#define GTK_TYPE_SPIN_BUTTON (gtk_spin_button_get_type ())
#define GTK_SPIN_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SPIN_BUTTON, GtkSpinButton))
#define GTK_SPIN_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SPIN_BUTTON, GtkSpinButtonClass))
#define GTK_IS_SPIN_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SPIN_BUTTON))
#define GTK_IS_SPIN_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SPIN_BUTTON))
#define GTK_SPIN_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SPIN_BUTTON, GtkSpinButtonClass))
#define GTK_INPUT_ERROR -1
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_spin_button_get_value_as_float gtk_spin_button_get_value
#endif
#endif
