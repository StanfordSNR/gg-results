// GGHASH:ViFZiJ32q295eV8ossCNFXu9BQrFLmswmTXL3OrMGTKc00000951
#ifndef __GTK_HSEPARATOR_H__
#define __GTK_HSEPARATOR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkseparator.h>
#define GTK_TYPE_HSEPARATOR (gtk_hseparator_get_type ())
#define GTK_HSEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HSEPARATOR, GtkHSeparator))
#define GTK_HSEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HSEPARATOR, GtkHSeparatorClass))
#define GTK_IS_HSEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HSEPARATOR))
#define GTK_IS_HSEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HSEPARATOR))
#define GTK_HSEPARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HSEPARATOR, GtkHSeparatorClass))
#endif
