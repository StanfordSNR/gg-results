// GGHASH:VIBXlGIjngO8q1njphCqfkvNvfQi9pFMGgDhhOjwBFpw00000d45
#ifndef __GTK_CELL_RENDERER_TEXT_H__
#define __GTK_CELL_RENDERER_TEXT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderer.h>
#define GTK_TYPE_CELL_RENDERER_TEXT (gtk_cell_renderer_text_get_type ())
#define GTK_CELL_RENDERER_TEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_TEXT, GtkCellRendererText))
#define GTK_CELL_RENDERER_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_TEXT, GtkCellRendererTextClass))
#define GTK_IS_CELL_RENDERER_TEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_TEXT))
#define GTK_IS_CELL_RENDERER_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_TEXT))
#define GTK_CELL_RENDERER_TEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_TEXT, GtkCellRendererTextClass))
#endif
