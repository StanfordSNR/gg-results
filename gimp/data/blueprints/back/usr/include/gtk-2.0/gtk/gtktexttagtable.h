// GGHASH:Vk7pSiA6CSvD2HS00Do_g6ldnCjZOFqxt2T0Pfy9lpMI00000fcd
#ifndef __GTK_TEXT_TAG_TABLE_H__
#define __GTK_TEXT_TAG_TABLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktexttag.h>
#define GTK_TYPE_TEXT_TAG_TABLE (gtk_text_tag_table_get_type ())
#define GTK_TEXT_TAG_TABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT_TAG_TABLE, GtkTextTagTable))
#define GTK_TEXT_TAG_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_TAG_TABLE, GtkTextTagTableClass))
#define GTK_IS_TEXT_TAG_TABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT_TAG_TABLE))
#define GTK_IS_TEXT_TAG_TABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_TAG_TABLE))
#define GTK_TEXT_TAG_TABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_TAG_TABLE, GtkTextTagTableClass))
#endif
