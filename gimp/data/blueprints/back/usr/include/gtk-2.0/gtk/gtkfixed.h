// GGHASH:VRBU7QkRgwiSfZzqrOJUyKCPOpQBXnGKPBD2LxrjHDXk00000c25
#ifndef __GTK_FIXED_H__
#define __GTK_FIXED_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_FIXED (gtk_fixed_get_type ())
#define GTK_FIXED(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FIXED, GtkFixed))
#define GTK_FIXED_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FIXED, GtkFixedClass))
#define GTK_IS_FIXED(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FIXED))
#define GTK_IS_FIXED_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FIXED))
#define GTK_FIXED_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FIXED, GtkFixedClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
