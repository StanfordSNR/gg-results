// GGHASH:V9p.tEIYnxnLs6KoUX3seKg1ynUwCN2YpqPVArg2bwtE00000f7b
#ifndef __GTK_COLOR_BUTTON_H__
#define __GTK_COLOR_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbutton.h>
#define GTK_TYPE_COLOR_BUTTON (gtk_color_button_get_type ())
#define GTK_COLOR_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_BUTTON, GtkColorButton))
#define GTK_COLOR_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COLOR_BUTTON, GtkColorButtonClass))
#define GTK_IS_COLOR_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_BUTTON))
#define GTK_IS_COLOR_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COLOR_BUTTON))
#define GTK_COLOR_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COLOR_BUTTON, GtkColorButtonClass))
#endif
