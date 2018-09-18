// GGHASH:VBEl5Q2TgZBjAZtnrez42bXTEE7wlajlWGVjL9zZ9jIY000011fd
#ifndef __GTK_INFO_BAR_H__
#define __GTK_INFO_BAR_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkhbox.h>
#include <gtk/gtkenums.h>
#define GTK_TYPE_INFO_BAR (gtk_info_bar_get_type())
#define GTK_INFO_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST((obj), GTK_TYPE_INFO_BAR, GtkInfoBar))
#define GTK_INFO_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST((klass), GTK_TYPE_INFO_BAR, GtkInfoBarClass))
#define GTK_IS_INFO_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE((obj), GTK_TYPE_INFO_BAR))
#define GTK_IS_INFO_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_INFO_BAR))
#define GTK_INFO_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS((obj), GTK_TYPE_INFO_BAR, GtkInfoBarClass))
#endif
