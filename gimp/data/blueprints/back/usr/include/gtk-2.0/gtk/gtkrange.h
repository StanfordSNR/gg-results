// GGHASH:Vmw_hD.siso.3Fc0qHzY4enEa5NnmhKI4XFYaz2kaOKA000024b3
#ifndef __GTK_RANGE_H__
#define __GTK_RANGE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkadjustment.h>
#include <gtk/gtkwidget.h>
#define GTK_TYPE_RANGE (gtk_range_get_type ())
#define GTK_RANGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RANGE, GtkRange))
#define GTK_RANGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RANGE, GtkRangeClass))
#define GTK_IS_RANGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RANGE))
#define GTK_IS_RANGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RANGE))
#define GTK_RANGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RANGE, GtkRangeClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
