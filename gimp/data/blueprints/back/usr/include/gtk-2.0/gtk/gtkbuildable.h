// GGHASH:VVQHMfZWGMRnw3gO01WPvOKZZ_AtmvE7NH7gVmZMHRTI00001f9e
#ifndef __GTK_BUILDABLE_H__
#define __GTK_BUILDABLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbuilder.h>
#include <gtk/gtktypeutils.h>
#define GTK_TYPE_BUILDABLE (gtk_buildable_get_type ())
#define GTK_BUILDABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_BUILDABLE, GtkBuildable))
#define GTK_BUILDABLE_CLASS(obj) (G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_BUILDABLE, GtkBuildableIface))
#define GTK_IS_BUILDABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_BUILDABLE))
#define GTK_BUILDABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_BUILDABLE, GtkBuildableIface))
#endif
