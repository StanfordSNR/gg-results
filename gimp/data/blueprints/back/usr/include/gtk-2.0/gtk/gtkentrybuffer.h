// GGHASH:VJfTEohhXN9SN5.WRH2kopqNLJcjGpTsBnlyoUKyRgzk000017cd
#ifndef __GTK_ENTRY_BUFFER_H__
#define __GTK_ENTRY_BUFFER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <glib-object.h>
#define GTK_ENTRY_BUFFER_MAX_SIZE G_MAXUSHORT
#define GTK_TYPE_ENTRY_BUFFER (gtk_entry_buffer_get_type ())
#define GTK_ENTRY_BUFFER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ENTRY_BUFFER, GtkEntryBuffer))
#define GTK_ENTRY_BUFFER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ENTRY_BUFFER, GtkEntryBufferClass))
#define GTK_IS_ENTRY_BUFFER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ENTRY_BUFFER))
#define GTK_IS_ENTRY_BUFFER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ENTRY_BUFFER))
#define GTK_ENTRY_BUFFER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ENTRY_BUFFER, GtkEntryBufferClass))
#endif
