// GGHASH:VeHuV7RbtqHVElrN3oC_lISqZdKJ9APKcSn0JIm4Iqjo0000097e
#ifndef __GTK_CELL_EDITABLE_H__
#define __GTK_CELL_EDITABLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_CELL_EDITABLE (gtk_cell_editable_get_type ())
#define GTK_CELL_EDITABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CELL_EDITABLE, GtkCellEditable))
#define GTK_CELL_EDITABLE_CLASS(obj) (G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_CELL_EDITABLE, GtkCellEditableIface))
#define GTK_IS_CELL_EDITABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CELL_EDITABLE))
#define GTK_CELL_EDITABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_CELL_EDITABLE, GtkCellEditableIface))
#endif
