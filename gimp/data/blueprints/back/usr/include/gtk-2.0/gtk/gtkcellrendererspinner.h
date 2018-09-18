// GGHASH:VfXMh9KzDMxsmw_qwmPpvrL2wJp459uoc795Da6MQNLs00000ac4
#ifndef __GTK_CELL_RENDERER_SPINNER_H__
#define __GTK_CELL_RENDERER_SPINNER_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderer.h>
#define GTK_TYPE_CELL_RENDERER_SPINNER (gtk_cell_renderer_spinner_get_type ())
#define GTK_CELL_RENDERER_SPINNER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_SPINNER, GtkCellRendererSpinner))
#define GTK_CELL_RENDERER_SPINNER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_SPINNER, GtkCellRendererSpinnerClass))
#define GTK_IS_CELL_RENDERER_SPINNER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_SPINNER))
#define GTK_IS_CELL_RENDERER_SPINNER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_SPINNER))
#define GTK_CELL_RENDERER_SPINNER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_SPINNER, GtkCellRendererSpinnerClass))
#endif
