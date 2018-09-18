// GGHASH:Vyq928.g_mwmciwHIWaGqrMtMlHDQZgKmIa3odfXynRc000025b9
#ifndef __GTK_IMAGE_H__
#define __GTK_IMAGE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gio/gio.h>
#include <gtk/gtkmisc.h>
#define GTK_TYPE_IMAGE (gtk_image_get_type ())
#define GTK_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IMAGE, GtkImage))
#define GTK_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IMAGE, GtkImageClass))
#define GTK_IS_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IMAGE))
#define GTK_IS_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IMAGE))
#define GTK_IMAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IMAGE, GtkImageClass))
#ifdef G_OS_WIN32
#define gtk_image_new_from_file gtk_image_new_from_file_utf8
#define gtk_image_set_from_file gtk_image_set_from_file_utf8
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
