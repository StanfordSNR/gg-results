// GGHASH:VmcG5lD8zJL.0grlygsqC7H0aZNUVyxQHCZyMe5rqYqc000009ac
#ifndef __GTK_ARROW_H__
#define __GTK_ARROW_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkmisc.h>
#define GTK_TYPE_ARROW (gtk_arrow_get_type ())
#define GTK_ARROW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ARROW, GtkArrow))
#define GTK_ARROW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ARROW, GtkArrowClass))
#define GTK_IS_ARROW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ARROW))
#define GTK_IS_ARROW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ARROW))
#define GTK_ARROW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ARROW, GtkArrowClass))
#endif
