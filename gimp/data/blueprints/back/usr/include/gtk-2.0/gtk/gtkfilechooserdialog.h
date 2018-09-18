// GGHASH:VAYhnXZJf3o019Ec0UnZduZOahgwvtQicuf2bl6RyXF000000bf0
#ifndef __GTK_FILE_CHOOSER_DIALOG_H__
#define __GTK_FILE_CHOOSER_DIALOG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkdialog.h>
#include <gtk/gtkfilechooser.h>
#define GTK_TYPE_FILE_CHOOSER_DIALOG (gtk_file_chooser_dialog_get_type ())
#define GTK_FILE_CHOOSER_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_CHOOSER_DIALOG, GtkFileChooserDialog))
#define GTK_FILE_CHOOSER_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FILE_CHOOSER_DIALOG, GtkFileChooserDialogClass))
#define GTK_IS_FILE_CHOOSER_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_CHOOSER_DIALOG))
#define GTK_IS_FILE_CHOOSER_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FILE_CHOOSER_DIALOG))
#define GTK_FILE_CHOOSER_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FILE_CHOOSER_DIALOG, GtkFileChooserDialogClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
