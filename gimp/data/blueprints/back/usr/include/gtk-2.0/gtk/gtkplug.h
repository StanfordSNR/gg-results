// GGHASH:V9udLUSIrF6EwbwBu49l90N2JmRrNX_90DW2Wx0GQzRI00000cf0
#ifndef __GTK_PLUG_H__
#define __GTK_PLUG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtksocket.h>
#include <gtk/gtkwindow.h>
#define GTK_TYPE_PLUG (gtk_plug_get_type ())
#define GTK_PLUG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PLUG, GtkPlug))
#define GTK_PLUG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PLUG, GtkPlugClass))
#define GTK_IS_PLUG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PLUG))
#define GTK_IS_PLUG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PLUG))
#define GTK_PLUG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PLUG, GtkPlugClass))
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
