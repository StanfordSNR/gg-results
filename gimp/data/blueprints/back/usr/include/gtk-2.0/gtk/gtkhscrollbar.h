// GGHASH:V647c9PsqFiwwKl3AbWDb2KTyP7QPk__kbMAWqtPtOfs00000944
#ifndef __GTK_HSCROLLBAR_H__
#define __GTK_HSCROLLBAR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkscrollbar.h>
#define GTK_TYPE_HSCROLLBAR (gtk_hscrollbar_get_type ())
#define GTK_HSCROLLBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HSCROLLBAR, GtkHScrollbar))
#define GTK_HSCROLLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HSCROLLBAR, GtkHScrollbarClass))
#define GTK_IS_HSCROLLBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HSCROLLBAR))
#define GTK_IS_HSCROLLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HSCROLLBAR))
#define GTK_HSCROLLBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HSCROLLBAR, GtkHScrollbarClass))
#endif
