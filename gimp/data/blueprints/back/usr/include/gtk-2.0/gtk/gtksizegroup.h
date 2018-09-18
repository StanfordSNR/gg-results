// GGHASH:V87VwyIIO33ROhsa9n4C0wUkTRZ1oLy7yPhEyuoe8WI400000fbe
#ifndef __GTK_SIZE_GROUP_H__
#define __GTK_SIZE_GROUP_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_SIZE_GROUP (gtk_size_group_get_type ())
#define GTK_SIZE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SIZE_GROUP, GtkSizeGroup))
#define GTK_SIZE_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SIZE_GROUP, GtkSizeGroupClass))
#define GTK_IS_SIZE_GROUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SIZE_GROUP))
#define GTK_IS_SIZE_GROUP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SIZE_GROUP))
#define GTK_SIZE_GROUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SIZE_GROUP, GtkSizeGroupClass))
#endif
