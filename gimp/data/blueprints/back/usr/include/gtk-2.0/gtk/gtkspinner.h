// GGHASH:VMYM5inpLbg.k9C3bSm_iKlpKrb2dhETcdYkuOV4EEM8000008eb
#ifndef __GTK_SPINNER_H__
#define __GTK_SPINNER_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkdrawingarea.h>
#define GTK_TYPE_SPINNER (gtk_spinner_get_type ())
#define GTK_SPINNER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SPINNER, GtkSpinner))
#define GTK_SPINNER_CLASS(obj) (G_TYPE_CHECK_CLASS_CAST ((obj), GTK_SPINNER, GtkSpinnerClass))
#define GTK_IS_SPINNER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SPINNER))
#define GTK_IS_SPINNER_CLASS(obj) (G_TYPE_CHECK_CLASS_TYPE ((obj), GTK_TYPE_SPINNER))
#define GTK_SPINNER_GET_CLASS (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SPINNER, GtkSpinnerClass))
#endif
