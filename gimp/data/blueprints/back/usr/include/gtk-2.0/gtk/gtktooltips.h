// GGHASH:VWKByhMbSyANClKhijjvkvAb9BPuV31.xJlh9izuEOYE00000e2e
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_TOOLTIPS_H__
#define __GTK_TOOLTIPS_H__ 
#include <gtk/gtkwidget.h>
#include <gtk/gtkwindow.h>
#define GTK_TYPE_TOOLTIPS (gtk_tooltips_get_type ())
#define GTK_TOOLTIPS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOLTIPS, GtkTooltips))
#define GTK_TOOLTIPS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOOLTIPS, GtkTooltipsClass))
#define GTK_IS_TOOLTIPS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOLTIPS))
#define GTK_IS_TOOLTIPS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOOLTIPS))
#define GTK_TOOLTIPS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOOLTIPS, GtkTooltipsClass))
#endif
#endif
