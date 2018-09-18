// GGHASH:VOhrAwoI.wH4ZuNhHZUw6Yco5qLE24W0f9HrjITVXkeo00001664
#ifndef __GTK_COLOR_SELECTION_H__
#define __GTK_COLOR_SELECTION_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkdialog.h>
#include <gtk/gtkvbox.h>
#define GTK_TYPE_COLOR_SELECTION (gtk_color_selection_get_type ())
#define GTK_COLOR_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_SELECTION, GtkColorSelection))
#define GTK_COLOR_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COLOR_SELECTION, GtkColorSelectionClass))
#define GTK_IS_COLOR_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_SELECTION))
#define GTK_IS_COLOR_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COLOR_SELECTION))
#define GTK_COLOR_SELECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COLOR_SELECTION, GtkColorSelectionClass))
#ifndef GTK_DISABLE_DEPRECATED
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
