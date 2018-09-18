// GGHASH:VC9ROvQerN80vHv_nZ5lk26RL7P4A1jMUUzlbM9r.yKQ000008ab
#ifndef __GTK_HPANED_H__
#define __GTK_HPANED_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkpaned.h>
#define GTK_TYPE_HPANED (gtk_hpaned_get_type ())
#define GTK_HPANED(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HPANED, GtkHPaned))
#define GTK_HPANED_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HPANED, GtkHPanedClass))
#define GTK_IS_HPANED(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HPANED))
#define GTK_IS_HPANED_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HPANED))
#define GTK_HPANED_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HPANED, GtkHPanedClass))
#endif
