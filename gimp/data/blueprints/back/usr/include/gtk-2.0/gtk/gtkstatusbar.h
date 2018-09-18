// GGHASH:VuiU5659a5LkwxQE7EhY1CQrz585g.77GQXDIsUfC9fU00000f89
#ifndef __GTK_STATUSBAR_H__
#define __GTK_STATUSBAR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkhbox.h>
#define GTK_TYPE_STATUSBAR (gtk_statusbar_get_type ())
#define GTK_STATUSBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_STATUSBAR, GtkStatusbar))
#define GTK_STATUSBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_STATUSBAR, GtkStatusbarClass))
#define GTK_IS_STATUSBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_STATUSBAR))
#define GTK_IS_STATUSBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_STATUSBAR))
#define GTK_STATUSBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_STATUSBAR, GtkStatusbarClass))
#endif
