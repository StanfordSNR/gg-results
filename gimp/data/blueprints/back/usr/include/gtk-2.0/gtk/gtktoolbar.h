// GGHASH:Vm714sIQUqSAnDhStLpUWq4eDd6_BqX38Lj4h9ZLKw.w00002828
#ifndef __GTK_TOOLBAR_H__
#define __GTK_TOOLBAR_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#include <gtk/gtktooltips.h>
#include <gtk/gtktoolitem.h>
#ifndef GTK_DISABLE_DEPRECATED
#include <gtk/gtkpixmap.h>
#include <gtk/gtksignal.h>
#endif
#define GTK_TYPE_TOOLBAR (gtk_toolbar_get_type ())
#define GTK_TOOLBAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TOOLBAR, GtkToolbar))
#define GTK_TOOLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TOOLBAR, GtkToolbarClass))
#define GTK_IS_TOOLBAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TOOLBAR))
#define GTK_IS_TOOLBAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TOOLBAR))
#define GTK_TOOLBAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TOOLBAR, GtkToolbarClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#else
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
