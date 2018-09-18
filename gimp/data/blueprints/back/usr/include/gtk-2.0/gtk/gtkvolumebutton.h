// GGHASH:VJTzV3HJsk8myqwxkwoeu9U4u8LCpJYKx2Bys.BVN2gM00000a3c
#ifndef __GTK_VOLUME_BUTTON_H__
#define __GTK_VOLUME_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkscalebutton.h>
#define GTK_TYPE_VOLUME_BUTTON (gtk_volume_button_get_type ())
#define GTK_VOLUME_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VOLUME_BUTTON, GtkVolumeButton))
#define GTK_VOLUME_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VOLUME_BUTTON, GtkVolumeButtonClass))
#define GTK_IS_VOLUME_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VOLUME_BUTTON))
#define GTK_IS_VOLUME_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VOLUME_BUTTON))
#define GTK_VOLUME_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VOLUME_BUTTON, GtkVolumeButtonClass))
#endif
