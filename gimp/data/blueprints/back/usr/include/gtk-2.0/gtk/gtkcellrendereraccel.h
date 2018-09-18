// GGHASH:Vix2EO5f8blKkpzsIGhUGjAGac05L9PRXoZGqd4kdUAY00000cba
#ifndef __GTK_CELL_RENDERER_ACCEL_H__
#define __GTK_CELL_RENDERER_ACCEL_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderertext.h>
#define GTK_TYPE_CELL_RENDERER_ACCEL (gtk_cell_renderer_accel_get_type ())
#define GTK_CELL_RENDERER_ACCEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_RENDERER_ACCEL, GtkCellRendererAccel))
#define GTK_CELL_RENDERER_ACCEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CELL_RENDERER_ACCEL, GtkCellRendererAccelClass))
#define GTK_IS_CELL_RENDERER_ACCEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_RENDERER_ACCEL))
#define GTK_IS_CELL_RENDERER_ACCEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CELL_RENDERER_ACCEL))
#define GTK_CELL_RENDERER_ACCEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CELL_RENDERER_ACCEL, GtkCellRendererAccelClass))
#endif
