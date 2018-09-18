// GGHASH:VYXQew93q6QFJsbzw9vflTiIaBd2Pc3L7y8uj742sGJI0000266d
#ifndef __GTK_TEXT_TAG_H__
#define __GTK_TEXT_TAG_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk/gdk.h>
#include <gtk/gtkenums.h>
#include <gtk/gtkobject.h>
#define GTK_TYPE_TEXT_TAG (gtk_text_tag_get_type ())
#define GTK_TEXT_TAG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT_TAG, GtkTextTag))
#define GTK_TEXT_TAG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_TAG, GtkTextTagClass))
#define GTK_IS_TEXT_TAG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT_TAG))
#define GTK_IS_TEXT_TAG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_TAG))
#define GTK_TEXT_TAG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_TAG, GtkTextTagClass))
#define GTK_TYPE_TEXT_ATTRIBUTES (gtk_text_attributes_get_type ())
#endif
