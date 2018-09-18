// GGHASH:VSr6J1fqAYnj1TQGzowBarwjvz0_v.G0OkEQqS_hnkdo000008bb
#ifndef __GTK_HBOX_H__
#define __GTK_HBOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbox.h>
#define GTK_TYPE_HBOX (gtk_hbox_get_type ())
#define GTK_HBOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HBOX, GtkHBox))
#define GTK_HBOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HBOX, GtkHBoxClass))
#define GTK_IS_HBOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HBOX))
#define GTK_IS_HBOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HBOX))
#define GTK_HBOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HBOX, GtkHBoxClass))
#endif
