// GGHASH:Vupeqo6zBJ4YuC2cpwAGBZ2YWeSV01df9cLL4NynNKxI000011c1
#ifndef __GTK_TEXT_MARK_H__
#define __GTK_TEXT_MARK_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#define GTK_TYPE_TEXT_MARK (gtk_text_mark_get_type ())
#define GTK_TEXT_MARK(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_TEXT_MARK, GtkTextMark))
#define GTK_TEXT_MARK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_MARK, GtkTextMarkClass))
#define GTK_IS_TEXT_MARK(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_TEXT_MARK))
#define GTK_IS_TEXT_MARK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_MARK))
#define GTK_TEXT_MARK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_MARK, GtkTextMarkClass))
#endif
