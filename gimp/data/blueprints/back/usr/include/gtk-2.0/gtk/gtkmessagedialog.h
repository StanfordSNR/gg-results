// GGHASH:VI9lKnI.aC9uu1DTGQKk8FGiX_xKM6oENZL5dQN5tZKY00001475
#ifndef __GTK_MESSAGE_DIALOG_H__
#define __GTK_MESSAGE_DIALOG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkdialog.h>
#include <gtk/gtkenums.h>
#define GTK_TYPE_MESSAGE_DIALOG (gtk_message_dialog_get_type ())
#define GTK_MESSAGE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MESSAGE_DIALOG, GtkMessageDialog))
#define GTK_MESSAGE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MESSAGE_DIALOG, GtkMessageDialogClass))
#define GTK_IS_MESSAGE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MESSAGE_DIALOG))
#define GTK_IS_MESSAGE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MESSAGE_DIALOG))
#define GTK_MESSAGE_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MESSAGE_DIALOG, GtkMessageDialogClass))
#endif
