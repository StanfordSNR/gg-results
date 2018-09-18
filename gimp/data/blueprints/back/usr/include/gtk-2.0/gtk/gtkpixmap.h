// GGHASH:V84t6E.kcssiNGopvn7bOtp3.uTyVvOCp0rFuMIRFaWU00000a15
#if !defined (GTK_DISABLE_DEPRECATED) || defined (__GTK_PIXMAP_C__)
#ifndef __GTK_PIXMAP_H__
#define __GTK_PIXMAP_H__ 
#include <gtk/gtk.h>
#define GTK_TYPE_PIXMAP (gtk_pixmap_get_type ())
#define GTK_PIXMAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_PIXMAP, GtkPixmap))
#define GTK_PIXMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_PIXMAP, GtkPixmapClass))
#define GTK_IS_PIXMAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_PIXMAP))
#define GTK_IS_PIXMAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_PIXMAP))
#define GTK_PIXMAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_PIXMAP, GtkPixmapClass))
#endif
#endif
