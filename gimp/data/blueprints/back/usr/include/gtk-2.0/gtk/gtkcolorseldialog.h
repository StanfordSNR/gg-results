// GGHASH:Vt2NB1oHCouFNJmWifgOl1Ss.amDh3syMg.JbUQ_Z1Jc00000c53
#ifndef __GTK_COLOR_SELECTION_DIALOG_H__
#define __GTK_COLOR_SELECTION_DIALOG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkdialog.h>
#include <gtk/gtkcolorsel.h>
#include <gtk/gtkvbox.h>
#define GTK_TYPE_COLOR_SELECTION_DIALOG (gtk_color_selection_dialog_get_type ())
#define GTK_COLOR_SELECTION_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_COLOR_SELECTION_DIALOG, GtkColorSelectionDialog))
#define GTK_COLOR_SELECTION_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_COLOR_SELECTION_DIALOG, GtkColorSelectionDialogClass))
#define GTK_IS_COLOR_SELECTION_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_COLOR_SELECTION_DIALOG))
#define GTK_IS_COLOR_SELECTION_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_COLOR_SELECTION_DIALOG))
#define GTK_COLOR_SELECTION_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_COLOR_SELECTION_DIALOG, GtkColorSelectionDialogClass))
#endif
