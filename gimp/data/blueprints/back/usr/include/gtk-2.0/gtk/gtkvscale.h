// GGHASH:VlVzOgsIYfMLTuHEVWkdysX7k3RXWtg2CuN.Cvq7UnnE00000a0b
#ifndef __GTK_VSCALE_H__
#define __GTK_VSCALE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkscale.h>
#define GTK_TYPE_VSCALE (gtk_vscale_get_type ())
#define GTK_VSCALE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VSCALE, GtkVScale))
#define GTK_VSCALE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VSCALE, GtkVScaleClass))
#define GTK_IS_VSCALE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VSCALE))
#define GTK_IS_VSCALE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VSCALE))
#define GTK_VSCALE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VSCALE, GtkVScaleClass))
#endif
