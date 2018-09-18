// GGHASH:Vr137VX_lLTfIoIW4_lOFAJBFtVdv0RXCv0OB2KF58FI00001a0a
#ifndef __GTK_BOX_H__
#define __GTK_BOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_BOX (gtk_box_get_type ())
#define GTK_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BOX, GtkBox))
#define GTK_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BOX, GtkBoxClass))
#define GTK_IS_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BOX))
#define GTK_IS_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BOX))
#define GTK_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BOX, GtkBoxClass))
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
