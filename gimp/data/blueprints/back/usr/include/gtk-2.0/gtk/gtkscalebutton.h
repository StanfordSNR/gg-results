// GGHASH:V7RNhmdNMXFFOBsLKgAQTRohFxDgiZwBZySz_MrLjOK400001240
#ifndef __GTK_SCALE_BUTTON_H__
#define __GTK_SCALE_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbutton.h>
#define GTK_TYPE_SCALE_BUTTON (gtk_scale_button_get_type ())
#define GTK_SCALE_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SCALE_BUTTON, GtkScaleButton))
#define GTK_SCALE_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SCALE_BUTTON, GtkScaleButtonClass))
#define GTK_IS_SCALE_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SCALE_BUTTON))
#define GTK_IS_SCALE_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SCALE_BUTTON))
#define GTK_SCALE_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SCALE_BUTTON, GtkScaleButtonClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
