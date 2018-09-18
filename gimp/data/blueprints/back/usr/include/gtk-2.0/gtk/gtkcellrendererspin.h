// GGHASH:VmSpNJl1WyYhYb7g5Xm0NLzoXCCIADouCNa80O0.bUJM00000902
#ifndef __GTK_CELL_RENDERER_SPIN_H__
#define __GTK_CELL_RENDERER_SPIN_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderertext.h>
#define GTK_TYPE_CELL_RENDERER_SPIN (gtk_cell_renderer_spin_get_type ())
#define GTK_CELL_RENDERER_SPIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_SPIN, GtkCellRendererSpin))
#define GTK_CELL_RENDERER_SPIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_SPIN, GtkCellRendererSpinClass))
#define GTK_IS_CELL_RENDERER_SPIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_SPIN))
#define GTK_IS_CELL_RENDERER_SPIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_SPIN))
#define GTK_CELL_RENDERER_SPIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_SPIN, GtkCellRendererTextClass))
#endif
