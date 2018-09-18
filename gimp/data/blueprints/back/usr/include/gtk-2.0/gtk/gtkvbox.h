// GGHASH:VTh.6Mq9KilYF5T4IcaxW5.69uD_u7upMLfcWQ7qPhW0000008a0
#ifndef __GTK_VBOX_H__
#define __GTK_VBOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbox.h>
#define GTK_TYPE_VBOX (gtk_vbox_get_type ())
#define GTK_VBOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VBOX, GtkVBox))
#define GTK_VBOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VBOX, GtkVBoxClass))
#define GTK_IS_VBOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VBOX))
#define GTK_IS_VBOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VBOX))
#define GTK_VBOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VBOX, GtkVBoxClass))
#endif
