// GGHASH:VzVoX8dx8h00GAytcQaog58t2uBDBvRD6kAtyzWEpp5I00000e1d
#ifndef __GTK_RECENT_FILTER_H__
#define __GTK_RECENT_FILTER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <glib-object.h>
#define GTK_TYPE_RECENT_FILTER (gtk_recent_filter_get_type ())
#define GTK_RECENT_FILTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_RECENT_FILTER, GtkRecentFilter))
#define GTK_IS_RECENT_FILTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_RECENT_FILTER))
#endif
