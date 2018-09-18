// GGHASH:VP4VSgWuweeKBlX6C03OIm3bfGF4JUDcr8RSI.4HTxK00000134e
#ifndef __GTK_PRINT_UNIX_DIALOG_H__
#define __GTK_PRINT_UNIX_DIALOG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_UNIX_PRINT_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtkunixprint.h> can be included directly."
#endif
#include <gtk/gtk.h>
#include <gtk/gtkprinter.h>
#include <gtk/gtkprintjob.h>
#define GTK_TYPE_PRINT_UNIX_DIALOG (gtk_print_unix_dialog_get_type ())
#define GTK_PRINT_UNIX_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PRINT_UNIX_DIALOG, GtkPrintUnixDialog))
#define GTK_PRINT_UNIX_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PRINT_UNIX_DIALOG, GtkPrintUnixDialogClass))
#define GTK_IS_PRINT_UNIX_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PRINT_UNIX_DIALOG))
#define GTK_IS_PRINT_UNIX_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PRINT_UNIX_DIALOG))
#define GTK_PRINT_UNIX_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PRINT_UNIX_DIALOG, GtkPrintUnixDialogClass))
#endif
