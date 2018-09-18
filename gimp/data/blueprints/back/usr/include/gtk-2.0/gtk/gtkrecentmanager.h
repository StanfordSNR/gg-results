// GGHASH:V2ZMA1GUJTkH7Zup.WzqpAgO7N38L.zgIv0l_GbiUKrk0000239d
#ifndef __GTK_RECENT_MANAGER_H__
#define __GTK_RECENT_MANAGER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <gdk/gdk.h>
#include <time.h>
#define GTK_TYPE_RECENT_INFO (gtk_recent_info_get_type ())
#define GTK_TYPE_RECENT_MANAGER (gtk_recent_manager_get_type ())
#define GTK_RECENT_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_MANAGER, GtkRecentManager))
#define GTK_IS_RECENT_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_MANAGER))
#define GTK_RECENT_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_MANAGER, GtkRecentManagerClass))
#define GTK_IS_RECENT_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_MANAGER))
#define GTK_RECENT_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_MANAGER, GtkRecentManagerClass))
#define GTK_RECENT_MANAGER_ERROR (gtk_recent_manager_error_quark ())
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
