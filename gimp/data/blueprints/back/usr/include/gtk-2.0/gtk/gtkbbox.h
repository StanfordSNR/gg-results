// GGHASH:Vddmv8ll5wnMFyLS8ewSfXmsn1z9ZfwgmwavUb78WbZU00000f0c
#ifndef __GTK_BUTTON_BOX_H__
#define __GTK_BUTTON_BOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbox.h>
#define GTK_TYPE_BUTTON_BOX (gtk_button_box_get_type ())
#define GTK_BUTTON_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BUTTON_BOX, GtkButtonBox))
#define GTK_BUTTON_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BUTTON_BOX, GtkButtonBoxClass))
#define GTK_IS_BUTTON_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BUTTON_BOX))
#define GTK_IS_BUTTON_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BUTTON_BOX))
#define GTK_BUTTON_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BUTTON_BOX, GtkButtonBoxClass))
#define GTK_BUTTONBOX_DEFAULT -1
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_button_box_set_spacing(b,s) gtk_box_set_spacing (GTK_BOX (b), s)
#define gtk_button_box_get_spacing(b) gtk_box_get_spacing (GTK_BOX (b))
#endif
#endif
