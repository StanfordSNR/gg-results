// GGHASH:VJHGzCTHEERUgQb6FSmQa7tG2HOScHsGjSc30DJmw34o00001f3e
#ifndef __GTK_STATUS_ICON_H__
#define __GTK_STATUS_ICON_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkimage.h>
#include <gtk/gtkmenu.h>
#define GTK_TYPE_STATUS_ICON (gtk_status_icon_get_type ())
#define GTK_STATUS_ICON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_STATUS_ICON, GtkStatusIcon))
#define GTK_STATUS_ICON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GTK_TYPE_STATUS_ICON, GtkStatusIconClass))
#define GTK_IS_STATUS_ICON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_STATUS_ICON))
#define GTK_IS_STATUS_ICON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GTK_TYPE_STATUS_ICON))
#define GTK_STATUS_ICON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_STATUS_ICON, GtkStatusIconClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#endif
