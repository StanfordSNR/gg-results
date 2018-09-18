// GGHASH:Vprwq96wV5vG361y70X1F2aP.qw7DmxICh6FSPNC2Jgs00000dd8
#ifndef __GTK_CELL_RENDERER_TOGGLE_H__
#define __GTK_CELL_RENDERER_TOGGLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderer.h>
#define GTK_TYPE_CELL_RENDERER_TOGGLE (gtk_cell_renderer_toggle_get_type ())
#define GTK_CELL_RENDERER_TOGGLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_TOGGLE, GtkCellRendererToggle))
#define GTK_CELL_RENDERER_TOGGLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_TOGGLE, GtkCellRendererToggleClass))
#define GTK_IS_CELL_RENDERER_TOGGLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_TOGGLE))
#define GTK_IS_CELL_RENDERER_TOGGLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_TOGGLE))
#define GTK_CELL_RENDERER_TOGGLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_TOGGLE, GtkCellRendererToggleClass))
#endif
