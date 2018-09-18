// GGHASH:VSdXO793uTMR.RKMtx1HBtj7R2kGktynksy9U9SanmNA00001e90
#ifndef __GTK_CELL_RENDERER_H__
#define __GTK_CELL_RENDERER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcelleditable.h>
#define GTK_TYPE_CELL_RENDERER (gtk_cell_renderer_get_type ())
#define GTK_CELL_RENDERER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER, GtkCellRenderer))
#define GTK_CELL_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER, GtkCellRendererClass))
#define GTK_IS_CELL_RENDERER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER))
#define GTK_IS_CELL_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER))
#define GTK_CELL_RENDERER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER, GtkCellRendererClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
