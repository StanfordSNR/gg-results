// GGHASH:VRb33g_E6NdgdN8cXOxZCs.qzDssLkm5urbKrDpeyCzM000021b3
#ifndef __GTK_LABEL_H__
#define __GTK_LABEL_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkmisc.h>
#include <gtk/gtkwindow.h>
#include <gtk/gtkmenu.h>
#define GTK_TYPE_LABEL (gtk_label_get_type ())
#define GTK_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_LABEL, GtkLabel))
#define GTK_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_LABEL, GtkLabelClass))
#define GTK_IS_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_LABEL))
#define GTK_IS_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LABEL))
#define GTK_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_LABEL, GtkLabelClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_label_set gtk_label_set_text
#endif
#endif
