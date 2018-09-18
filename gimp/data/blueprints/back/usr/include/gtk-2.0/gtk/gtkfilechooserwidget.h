// GGHASH:VgSc1lwQHBuskjkj4tPcz_aYTKMEVp1_k6DVGzNNSODw00000a9e
#ifndef __GTK_FILE_CHOOSER_WIDGET_H__
#define __GTK_FILE_CHOOSER_WIDGET_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkfilechooser.h>
#include <gtk/gtkvbox.h>
#define GTK_TYPE_FILE_CHOOSER_WIDGET (gtk_file_chooser_widget_get_type ())
#define GTK_FILE_CHOOSER_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_CHOOSER_WIDGET, GtkFileChooserWidget))
#define GTK_FILE_CHOOSER_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FILE_CHOOSER_WIDGET, GtkFileChooserWidgetClass))
#define GTK_IS_FILE_CHOOSER_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_CHOOSER_WIDGET))
#define GTK_IS_FILE_CHOOSER_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FILE_CHOOSER_WIDGET))
#define GTK_FILE_CHOOSER_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FILE_CHOOSER_WIDGET, GtkFileChooserWidgetClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
