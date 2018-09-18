// GGHASH:V72Y_Yqis3gA20o4xhrz1p6o0kafEenz26gDIlCA6CjU00000d3c
#ifndef __GTK_PAGE_SETUP_UNIX_DIALOG_H__
#define __GTK_PAGE_SETUP_UNIX_DIALOG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_UNIX_PRINT_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtkunixprint.h> can be included directly."
#endif
#include <gtk/gtk.h>
#define GTK_TYPE_PAGE_SETUP_UNIX_DIALOG (gtk_page_setup_unix_dialog_get_type ())
#define GTK_PAGE_SETUP_UNIX_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PAGE_SETUP_UNIX_DIALOG, GtkPageSetupUnixDialog))
#define GTK_PAGE_SETUP_UNIX_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PAGE_SETUP_UNIX_DIALOG, GtkPageSetupUnixDialogClass))
#define GTK_IS_PAGE_SETUP_UNIX_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PAGE_SETUP_UNIX_DIALOG))
#define GTK_IS_PAGE_SETUP_UNIX_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PAGE_SETUP_UNIX_DIALOG))
#define GTK_PAGE_SETUP_UNIX_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PAGE_SETUP_UNIX_DIALOG, GtkPageSetupUnixDialogClass))
#endif
