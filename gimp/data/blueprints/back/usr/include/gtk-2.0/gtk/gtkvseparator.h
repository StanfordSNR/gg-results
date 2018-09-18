// GGHASH:V3pQlsZPiVvwopNaAk8OyLvR_DuDaqf_aa.Th0WpJZGo000009dd
#ifndef __GTK_VSEPARATOR_H__
#define __GTK_VSEPARATOR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkseparator.h>
#define GTK_TYPE_VSEPARATOR (gtk_vseparator_get_type ())
#define GTK_VSEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_VSEPARATOR, GtkVSeparator))
#define GTK_VSEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_VSEPARATOR, GtkVSeparatorClass))
#define GTK_IS_VSEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_VSEPARATOR))
#define GTK_IS_VSEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_VSEPARATOR))
#define GTK_VSEPARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_VSEPARATOR, GtkVSeparatorClass))
#endif
