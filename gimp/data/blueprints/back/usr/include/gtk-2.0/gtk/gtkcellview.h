// GGHASH:VAlg0c2CwwNZfUEa9ZjPx54P1989_BezY_O.WA_4NWeY00000e09
#ifndef __GTK_CELL_VIEW_H__
#define __GTK_CELL_VIEW_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#include <gtk/gtkcellrenderer.h>
#include <gtk/gtktreemodel.h>
#define GTK_TYPE_CELL_VIEW (gtk_cell_view_get_type ())
#define GTK_CELL_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_VIEW, GtkCellView))
#define GTK_CELL_VIEW_CLASS(vtable) (G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_CELL_VIEW, GtkCellViewClass))
#define GTK_IS_CELL_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_VIEW))
#define GTK_IS_CELL_VIEW_CLASS(vtable) (G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_CELL_VIEW))
#define GTK_CELL_VIEW_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), GTK_TYPE_CELL_VIEW, GtkCellViewClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
