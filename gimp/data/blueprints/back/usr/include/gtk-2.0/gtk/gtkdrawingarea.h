// GGHASH:VWMJ.Y5V.rVCv5.OjqMHxkomvuGo3cYmRKyWqt5ac6ZE00000ae5
#ifndef __GTK_DRAWING_AREA_H__
#define __GTK_DRAWING_AREA_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_DRAWING_AREA (gtk_drawing_area_get_type ())
#define GTK_DRAWING_AREA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_DRAWING_AREA, GtkDrawingArea))
#define GTK_DRAWING_AREA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_DRAWING_AREA, GtkDrawingAreaClass))
#define GTK_IS_DRAWING_AREA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_DRAWING_AREA))
#define GTK_IS_DRAWING_AREA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_DRAWING_AREA))
#define GTK_DRAWING_AREA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_DRAWING_AREA, GtkDrawingAreaClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
