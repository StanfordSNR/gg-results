// GGHASH:VSpYYvNrlX09nzosgWj8b6mPl2wFa2wa2Y8EdWEGF1fE00000aa6
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_VRULER_H__
#define __GTK_VRULER_H__ 
#include <gtk/gtkruler.h>
#define GTK_TYPE_VRULER (gtk_vruler_get_type ())
#define GTK_VRULER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VRULER, GtkVRuler))
#define GTK_VRULER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VRULER, GtkVRulerClass))
#define GTK_IS_VRULER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VRULER))
#define GTK_IS_VRULER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VRULER))
#define GTK_VRULER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VRULER, GtkVRulerClass))
#endif
#endif
