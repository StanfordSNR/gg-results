// GGHASH:VwwgqZKFS2ngv2QjULiTuUSiQ.MJC_pgWp5PP6ZsQBTw00000a6c
#ifndef __GTK_EVENT_BOX_H__
#define __GTK_EVENT_BOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbin.h>
#define GTK_TYPE_EVENT_BOX (gtk_event_box_get_type ())
#define GTK_EVENT_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_EVENT_BOX, GtkEventBox))
#define GTK_EVENT_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_EVENT_BOX, GtkEventBoxClass))
#define GTK_IS_EVENT_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_EVENT_BOX))
#define GTK_IS_EVENT_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_EVENT_BOX))
#define GTK_EVENT_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_EVENT_BOX, GtkEventBoxClass))
#endif
