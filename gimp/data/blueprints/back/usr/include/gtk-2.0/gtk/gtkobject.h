// GGHASH:VRCgFSdidEkMmHbEEdqDE7fdIxcUlLqvoWatOoCoiSHs000021d6
#ifndef __GTK_OBJECT_H__
#define __GTK_OBJECT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdkconfig.h>
#include <gtk/gtkenums.h>
#include <gtk/gtktypeutils.h>
#include <gtk/gtkdebug.h>
#define GTK_TYPE_OBJECT (gtk_object_get_type ())
#define GTK_OBJECT(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_OBJECT, GtkObject))
#define GTK_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_OBJECT, GtkObjectClass))
#define GTK_IS_OBJECT(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_OBJECT))
#define GTK_IS_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_OBJECT))
#define GTK_OBJECT_GET_CLASS(object) (G_TYPE_INSTANCE_GET_CLASS ((object), GTK_TYPE_OBJECT, GtkObjectClass))
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_OBJECT_TYPE G_OBJECT_TYPE
#define GTK_OBJECT_TYPE_NAME G_OBJECT_TYPE_NAME
#endif
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#define GTK_OBJECT_FLAGS(obj) (GTK_OBJECT (obj)->flags)
#ifndef GTK_DISABLE_DEPRECATED
#define GTK_OBJECT_FLOATING(obj) (g_object_is_floating (obj))
#endif
#define GTK_OBJECT_SET_FLAGS(obj,flag) G_STMT_START{ (GTK_OBJECT_FLAGS (obj) |= (flag)); }G_STMT_END
#define GTK_OBJECT_UNSET_FLAGS(obj,flag) G_STMT_START{ (GTK_OBJECT_FLAGS (obj) &= ~(flag)); }G_STMT_END
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_object_data_try_key g_quark_try_string
#define gtk_object_data_force_id g_quark_from_string
#define GTK_ARG_READWRITE (GTK_ARG_READABLE | GTK_ARG_WRITABLE)
#endif
#endif
