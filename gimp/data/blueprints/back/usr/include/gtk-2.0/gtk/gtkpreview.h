// GGHASH:V7tjWQG2pk69lAnEl5ROe9wv.BjeAczWT3q694C4Q5gg00001126
#ifndef GTK_DISABLE_DEPRECATED
#ifndef __GTK_PREVIEW_H__
#define __GTK_PREVIEW_H__ 
#include <gtk/gtk.h>
#define GTK_TYPE_PREVIEW (gtk_preview_get_type ())
#define GTK_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PREVIEW, GtkPreview))
#define GTK_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PREVIEW, GtkPreviewClass))
#define GTK_IS_PREVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PREVIEW))
#define GTK_IS_PREVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PREVIEW))
#define GTK_PREVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PREVIEW, GtkPreviewClass))
#endif
#endif
