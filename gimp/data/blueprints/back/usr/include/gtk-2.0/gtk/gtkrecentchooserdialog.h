// GGHASH:VM_.S6WzajwWUV0nYU8tdCqXKPtgVu3s0f8t7nefwjAY00000b99
#ifndef __GTK_RECENT_CHOOSER_DIALOG_H__
#define __GTK_RECENT_CHOOSER_DIALOG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkdialog.h>
#include <gtk/gtkrecentchooser.h>
#define GTK_TYPE_RECENT_CHOOSER_DIALOG (gtk_recent_chooser_dialog_get_type ())
#define GTK_RECENT_CHOOSER_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_CHOOSER_DIALOG, GtkRecentChooserDialog))
#define GTK_IS_RECENT_CHOOSER_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_CHOOSER_DIALOG))
#define GTK_RECENT_CHOOSER_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_CHOOSER_DIALOG, GtkRecentChooserDialogClass))
#define GTK_IS_RECENT_CHOOSER_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_CHOOSER_DIALOG))
#define GTK_RECENT_CHOOSER_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_CHOOSER_DIALOG, GtkRecentChooserDialogClass))
#endif
