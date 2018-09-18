// GGHASH:VZjtlMDMQwzwK7ga17K3gg.PlkLsdDvXtbVekkiyMJZk00000af4
#ifndef __GTK_HBUTTON_BOX_H__
#define __GTK_HBUTTON_BOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbbox.h>
#define GTK_TYPE_HBUTTON_BOX (gtk_hbutton_box_get_type ())
#define GTK_HBUTTON_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HBUTTON_BOX, GtkHButtonBox))
#define GTK_HBUTTON_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HBUTTON_BOX, GtkHButtonBoxClass))
#define GTK_IS_HBUTTON_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HBUTTON_BOX))
#define GTK_IS_HBUTTON_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HBUTTON_BOX))
#define GTK_HBUTTON_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HBUTTON_BOX, GtkHButtonBoxClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
