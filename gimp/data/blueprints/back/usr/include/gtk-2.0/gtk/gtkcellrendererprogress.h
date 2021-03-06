// GGHASH:VoPbI_VA6xJXhBWhJDzYlZZBImJG9EPefAjV3a76guCE00000bb4
#ifndef __GTK_CELL_RENDERER_PROGRESS_H__
#define __GTK_CELL_RENDERER_PROGRESS_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderer.h>
#define GTK_TYPE_CELL_RENDERER_PROGRESS (gtk_cell_renderer_progress_get_type ())
#define GTK_CELL_RENDERER_PROGRESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_PROGRESS, GtkCellRendererProgress))
#define GTK_CELL_RENDERER_PROGRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_PROGRESS, GtkCellRendererProgressClass))
#define GTK_IS_CELL_RENDERER_PROGRESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_PROGRESS))
#define GTK_IS_CELL_RENDERER_PROGRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_PROGRESS))
#define GTK_CELL_RENDERER_PROGRESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_PROGRESS, GtkCellRendererProgressClass))
#endif
