// GGHASH:VwTlEr4ezkgUAJEaVPfZ1QNI2I0y.dlhxPnuot34Ydsg0000185a
#ifndef __GTK_CELL_LAYOUT_H__
#define __GTK_CELL_LAYOUT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcellrenderer.h>
#include <gtk/gtktreeviewcolumn.h>
#include <gtk/gtkbuildable.h>
#include <gtk/gtkbuilder.h>
#define GTK_TYPE_CELL_LAYOUT (gtk_cell_layout_get_type ())
#define GTK_CELL_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_LAYOUT, GtkCellLayout))
#define GTK_IS_CELL_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_LAYOUT))
#define GTK_CELL_LAYOUT_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_CELL_LAYOUT, GtkCellLayoutIface))
#endif
