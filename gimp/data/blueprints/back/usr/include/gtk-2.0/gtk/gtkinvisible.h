// GGHASH:V83CV.X7R5SLtek5.JgORiO5Qoh0jT8G9fVp1dkodh_800000aae
#ifndef __GTK_INVISIBLE_H__
#define __GTK_INVISIBLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_INVISIBLE (gtk_invisible_get_type ())
#define GTK_INVISIBLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_INVISIBLE, GtkInvisible))
#define GTK_INVISIBLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_INVISIBLE, GtkInvisibleClass))
#define GTK_IS_INVISIBLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_INVISIBLE))
#define GTK_IS_INVISIBLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_INVISIBLE))
#define GTK_INVISIBLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_INVISIBLE, GtkInvisibleClass))
#endif
