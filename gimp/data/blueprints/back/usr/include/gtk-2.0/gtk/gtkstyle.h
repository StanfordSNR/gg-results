// GGHASH:VLHVTZbreX.sMKB7i6rPjGEKC31v6P4uVZiA60xPHatY00007de7
#ifndef __GTK_STYLE_H__
#define __GTK_STYLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk/gdk.h>
#include <gtk/gtkenums.h>
#define GTK_TYPE_STYLE (gtk_style_get_type ())
#define GTK_STYLE(object) (G_TYPE_CHECK_INSTANCE_CAST ((object), GTK_TYPE_STYLE, GtkStyle))
#define GTK_STYLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_STYLE, GtkStyleClass))
#define GTK_IS_STYLE(object) (G_TYPE_CHECK_INSTANCE_TYPE ((object), GTK_TYPE_STYLE))
#define GTK_IS_STYLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_STYLE))
#define GTK_STYLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_STYLE, GtkStyleClass))
#define GTK_TYPE_BORDER (gtk_border_get_type ())
#define GTK_STYLE_ATTACHED(style) (GTK_STYLE (style)->attach_count > 0)
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_style_apply_default_pixmap(s,gw,st,a,x,y,w,h) gtk_style_apply_default_background (s,gw,1,st,a,x,y,w,h)
#endif
#endif
