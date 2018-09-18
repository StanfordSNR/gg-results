// GGHASH:VuSRdGYqNqIIHuSUn..fj5xyCvBK1moc4jycA1Ups0Lw00000b5a
#ifndef __GTK_ACCESSIBLE_H__
#define __GTK_ACCESSIBLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <atk/atk.h>
#include <gtk/gtkwidget.h>
#define GTK_TYPE_ACCESSIBLE (gtk_accessible_get_type ())
#define GTK_ACCESSIBLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACCESSIBLE, GtkAccessible))
#define GTK_ACCESSIBLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACCESSIBLE, GtkAccessibleClass))
#define GTK_IS_ACCESSIBLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACCESSIBLE))
#define GTK_IS_ACCESSIBLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACCESSIBLE))
#define GTK_ACCESSIBLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ACCESSIBLE, GtkAccessibleClass))
#endif
