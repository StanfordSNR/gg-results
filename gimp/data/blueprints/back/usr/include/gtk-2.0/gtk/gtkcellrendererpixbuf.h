// GGHASH:VB__wzkNgQjeN6SHuu8ZnPCzQCs3301SddpOt_u_7Fvw00000a53
#ifndef __GTK_CELL_RENDERER_PIXBUF_H__
#define __GTK_CELL_RENDERER_PIXBUF_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderer.h>
#define GTK_TYPE_CELL_RENDERER_PIXBUF (gtk_cell_renderer_pixbuf_get_type ())
#define GTK_CELL_RENDERER_PIXBUF(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_PIXBUF, GtkCellRendererPixbuf))
#define GTK_CELL_RENDERER_PIXBUF_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_PIXBUF, GtkCellRendererPixbufClass))
#define GTK_IS_CELL_RENDERER_PIXBUF(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_PIXBUF))
#define GTK_IS_CELL_RENDERER_PIXBUF_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_PIXBUF))
#define GTK_CELL_RENDERER_PIXBUF_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_PIXBUF, GtkCellRendererPixbufClass))
#endif
