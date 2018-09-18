// GGHASH:V34Nm3mN21vQ7kkt.xoCDrAIZvQEuI0kEZ3PFQGAAQok000022f8
#ifndef __GTK_CONTAINER_H__
#define __GTK_CONTAINER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#include <gtk/gtkadjustment.h>
#define GTK_TYPE_CONTAINER (gtk_container_get_type ())
#define GTK_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_CONTAINER, GtkContainer))
#define GTK_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_CONTAINER, GtkContainerClass))
#define GTK_IS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_CONTAINER))
#define GTK_IS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_CONTAINER))
#define GTK_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_CONTAINER, GtkContainerClass))
#define GTK_IS_RESIZE_CONTAINER(widget) (GTK_IS_CONTAINER (widget) && ((GtkContainer*) (widget))->resize_mode != GTK_RESIZE_PARENT)
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_container_children gtk_container_get_children
#endif
#define GTK_CONTAINER_WARN_INVALID_CHILD_PROPERTY_ID(object,property_id,pspec) G_OBJECT_WARN_INVALID_PSPEC ((object), "child property id", (property_id), (pspec))
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_container_border_width gtk_container_set_border_width
#endif
#endif
