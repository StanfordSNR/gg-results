// GGHASH:VsjSNNKwXWnkgiuPKTxaSNis6mATo3rDgE_whWsVAExg00004d69
#ifndef __GTK_TEXT_LAYOUT_H__
#define __GTK_TEXT_LAYOUT_H__ 
#ifndef GTK_TEXT_USE_INTERNAL_UNSUPPORTED_API
#error "You are not supposed to be including this file; the equivalent public API is in gtktextview.h"
#endif
#include <gtk/gtk.h>
#define GTK_TYPE_TEXT_LAYOUT (gtk_text_layout_get_type ())
#define GTK_TEXT_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_TEXT_LAYOUT, GtkTextLayout))
#define GTK_TEXT_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_TEXT_LAYOUT, GtkTextLayoutClass))
#define GTK_IS_TEXT_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_TEXT_LAYOUT))
#define GTK_IS_TEXT_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_TEXT_LAYOUT))
#define GTK_TEXT_LAYOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_TEXT_LAYOUT, GtkTextLayoutClass))
#endif
