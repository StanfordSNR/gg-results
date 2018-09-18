// GGHASH:Vexoka9z5reI1BsYLBuQTwUfn7hSLru6XvCXNQgqxU3A00000aa6
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_HRULER_H__
#define __GTK_HRULER_H__ 
#include <gtk/gtkruler.h>
#define GTK_TYPE_HRULER (gtk_hruler_get_type ())
#define GTK_HRULER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HRULER, GtkHRuler))
#define GTK_HRULER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HRULER, GtkHRulerClass))
#define GTK_IS_HRULER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HRULER))
#define GTK_IS_HRULER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HRULER))
#define GTK_HRULER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HRULER, GtkHRulerClass))
#endif
#endif
