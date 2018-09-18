// GGHASH:VuAqoH9EnG8ON9Yhe9wf_WvNHEOVSrbd18f8ZHe0fTOo00000d93
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_TIPS_QUERY_H__
#define __GTK_TIPS_QUERY_H__ 
#include <gtk/gtk.h>
#define GTK_TYPE_TIPS_QUERY (gtk_tips_query_get_type ())
#define GTK_TIPS_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TIPS_QUERY, GtkTipsQuery))
#define GTK_TIPS_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TIPS_QUERY, GtkTipsQueryClass))
#define GTK_IS_TIPS_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TIPS_QUERY))
#define GTK_IS_TIPS_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TIPS_QUERY))
#define GTK_TIPS_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TIPS_QUERY, GtkTipsQueryClass))
#endif
#endif
