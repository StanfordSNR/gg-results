// GGHASH:VXbmrYi47Q97ZIt7.Bs67jIqUNngempnPgk0OZuWFeAY00002338
#ifndef __GTK_ICON_FACTORY_H__
#define __GTK_ICON_FACTORY_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk/gdk.h>
#include <gtk/gtkrc.h>
#define GTK_TYPE_ICON_FACTORY (gtk_icon_factory_get_type ())
#define GTK_ICON_FACTORY(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_ICON_FACTORY, GtkIconFactory))
#define GTK_ICON_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ICON_FACTORY, GtkIconFactoryClass))
#define GTK_IS_ICON_FACTORY(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_ICON_FACTORY))
#define GTK_IS_ICON_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ICON_FACTORY))
#define GTK_ICON_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ICON_FACTORY, GtkIconFactoryClass))
#define GTK_TYPE_ICON_SET (gtk_icon_set_get_type ())
#define GTK_TYPE_ICON_SOURCE (gtk_icon_source_get_type ())
#ifdef G_OS_WIN32
#define gtk_icon_source_set_filename gtk_icon_source_set_filename_utf8
#define gtk_icon_source_get_filename gtk_icon_source_get_filename_utf8
#endif
#ifndef GDK_MULTIHEAD_SAFE
#endif
#endif
