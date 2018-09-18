// GGHASH:VXCqA8gnlPNMNJy1rRLtFOFbkopdSyfNa1BlPJDdsrU400000f44
#ifndef __GTK_FILE_CHOOSER_BUTTON_H__
#define __GTK_FILE_CHOOSER_BUTTON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkhbox.h>
#include <gtk/gtkfilechooser.h>
#define GTK_TYPE_FILE_CHOOSER_BUTTON (gtk_file_chooser_button_get_type ())
#define GTK_FILE_CHOOSER_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FILE_CHOOSER_BUTTON, GtkFileChooserButton))
#define GTK_FILE_CHOOSER_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FILE_CHOOSER_BUTTON, GtkFileChooserButtonClass))
#define GTK_IS_FILE_CHOOSER_BUTTON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FILE_CHOOSER_BUTTON))
#define GTK_IS_FILE_CHOOSER_BUTTON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FILE_CHOOSER_BUTTON))
#define GTK_FILE_CHOOSER_BUTTON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FILE_CHOOSER_BUTTON, GtkFileChooserButtonClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
