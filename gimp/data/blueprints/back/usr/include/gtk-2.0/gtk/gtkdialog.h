// GGHASH:V0vThsSEWE5_VeopW7mBSRcCudt2Hw0xJGtisACSndT400001a15
#ifndef __GTK_DIALOG_H__
#define __GTK_DIALOG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwindow.h>
#define GTK_TYPE_DIALOG (gtk_dialog_get_type ())
#define GTK_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_DIALOG, GtkDialog))
#define GTK_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_DIALOG, GtkDialogClass))
#define GTK_IS_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_DIALOG))
#define GTK_IS_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_DIALOG))
#define GTK_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_DIALOG, GtkDialogClass))
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#endif
