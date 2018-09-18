// GGHASH:VYq917HSxZfKVpQtm6iBWvV8vdAo7JFGpD7RdFXKdK4A00000c91
#ifndef __GTK_RECENT_ACTION_H__
#define __GTK_RECENT_ACTION_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkaction.h>
#include <gtk/gtkrecentmanager.h>
#define GTK_TYPE_RECENT_ACTION (gtk_recent_action_get_type ())
#define GTK_RECENT_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_ACTION, GtkRecentAction))
#define GTK_IS_RECENT_ACTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_ACTION))
#define GTK_RECENT_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_RECENT_ACTION, GtkRecentActionClass))
#define GTK_IS_RECENT_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_RECENT_ACTION))
#define GTK_RECENT_ACTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_RECENT_ACTION, GtkRecentActionClass))
#endif
