// GGHASH:VvtZKdnTKQ1L._CfUhRHqA8tTXrHJp2bNK5dF31OqRl400001cc4
#ifndef __GTK_ACCEL_GROUP_H__
#define __GTK_ACCEL_GROUP_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk/gdk.h>
#include <gtk/gtkenums.h>
#define GTK_TYPE_ACCEL_GROUP (gtk_accel_group_get_type ())
#define GTK_ACCEL_GROUP(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_ACCEL_GROUP, GtkAccelGroup))
#define GTK_ACCEL_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ACCEL_GROUP, GtkAccelGroupClass))
#define GTK_IS_ACCEL_GROUP(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_ACCEL_GROUP))
#define GTK_IS_ACCEL_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ACCEL_GROUP))
#define GTK_ACCEL_GROUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ACCEL_GROUP, GtkAccelGroupClass))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_accel_group_ref g_object_ref
#define gtk_accel_group_unref g_object_unref
#endif
#endif
