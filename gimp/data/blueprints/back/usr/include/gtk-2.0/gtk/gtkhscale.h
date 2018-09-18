// GGHASH:VoaZMj5U5LDL4UKdxiGvkLhHSDjLlB9FfCTmRyTdJZ2800000986
#ifndef __GTK_HSCALE_H__
#define __GTK_HSCALE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkscale.h>
#define GTK_TYPE_HSCALE (gtk_hscale_get_type ())
#define GTK_HSCALE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HSCALE, GtkHScale))
#define GTK_HSCALE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HSCALE, GtkHScaleClass))
#define GTK_IS_HSCALE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HSCALE))
#define GTK_IS_HSCALE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HSCALE))
#define GTK_HSCALE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HSCALE, GtkHScaleClass))
#endif
