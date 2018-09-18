// GGHASH:VtWeI9PKaUgj5PhGVyJzfB22YnRFkG1oQuUtHmIQL0zc00001841
#ifndef __GTK_BUILDER_H__
#define __GTK_BUILDER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdkconfig.h>
#include <glib-object.h>
#define GTK_TYPE_BUILDER (gtk_builder_get_type ())
#define GTK_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BUILDER, GtkBuilder))
#define GTK_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_BUILDER, GtkBuilderClass))
#define GTK_IS_BUILDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BUILDER))
#define GTK_IS_BUILDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_BUILDER))
#define GTK_BUILDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_BUILDER, GtkBuilderClass))
#define GTK_BUILDER_ERROR (gtk_builder_error_quark ())
#define GTK_BUILDER_WARN_INVALID_CHILD_TYPE(object,type) g_warning ("'%s' is not a valid child type of '%s'", type, g_type_name (G_OBJECT_TYPE (object)))
#endif
