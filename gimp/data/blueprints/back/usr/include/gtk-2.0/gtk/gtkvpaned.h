// GGHASH:VaB5CxoXDuBDOLzj2LOGmr9FX9ZzURT59VDk.9lda1Kw000008b2
#ifndef __GTK_VPANED_H__
#define __GTK_VPANED_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkpaned.h>
#define GTK_TYPE_VPANED (gtk_vpaned_get_type ())
#define GTK_VPANED(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VPANED, GtkVPaned))
#define GTK_VPANED_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VPANED, GtkVPanedClass))
#define GTK_IS_VPANED(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VPANED))
#define GTK_IS_VPANED_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VPANED))
#define GTK_VPANED_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VPANED, GtkVPanedClass))
#endif
