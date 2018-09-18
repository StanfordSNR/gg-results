// GGHASH:VlJiqRUcl.yxqqeCLHPuhtx8WBnpYDNzg9l8d3TZ3uE00000170c
#ifndef __GTK_BUTTON_H__
#define __GTK_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbin.h>
#include <gtk/gtkimage.h>
#define GTK_TYPE_BUTTON (gtk_button_get_type ())
#define GTK_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BUTTON, GtkButton))
#define GTK_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BUTTON, GtkButtonClass))
#define GTK_IS_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BUTTON))
#define GTK_IS_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BUTTON))
#define GTK_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BUTTON, GtkButtonClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
