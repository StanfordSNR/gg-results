// GGHASH:VsuOf5z7B_QibjyOsExkljsv3AUdDwuijgY.j2D5oA8o00004c6f
#ifndef __GTK_TEXT_BUFFER_H__
#define __GTK_TEXT_BUFFER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#include <gtk/gtkclipboard.h>
#include <gtk/gtktexttagtable.h>
#include <gtk/gtktextiter.h>
#include <gtk/gtktextmark.h>
#include <gtk/gtktextchild.h>
#define GTK_TYPE_TEXT_BUFFER (gtk_text_buffer_get_type ())
#define GTK_TEXT_BUFFER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT_BUFFER, GtkTextBuffer))
#define GTK_TEXT_BUFFER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_BUFFER, GtkTextBufferClass))
#define GTK_IS_TEXT_BUFFER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT_BUFFER))
#define GTK_IS_TEXT_BUFFER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_BUFFER))
#define GTK_TEXT_BUFFER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_BUFFER, GtkTextBufferClass))
#endif
