// GGHASH:VA1sFfOpw9OY64lXe1ZZJePskvrSzNqWg2JoDpe_HXx800001443
#ifndef __GTK_PANED_H__
#define __GTK_PANED_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_PANED (gtk_paned_get_type ())
#define GTK_PANED(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PANED, GtkPaned))
#define GTK_PANED_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PANED, GtkPanedClass))
#define GTK_IS_PANED(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PANED))
#define GTK_IS_PANED_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PANED))
#define GTK_PANED_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PANED, GtkPanedClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_paned_gutter_size(p,s) (void) 0
#define gtk_paned_set_gutter_size(p,s) (void) 0
#endif
#endif
