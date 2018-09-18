// GGHASH:Ve9PWe_AZv1Sv8u4ETwe44ON8bPdpWTFJe6b7uq_QvZQ00000b7c
#ifndef __GTK_IM_MULTICONTEXT_H__
#define __GTK_IM_MULTICONTEXT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkimcontext.h>
#include <gtk/gtkmenushell.h>
#define GTK_TYPE_IM_MULTICONTEXT (gtk_im_multicontext_get_type ())
#define GTK_IM_MULTICONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IM_MULTICONTEXT, GtkIMMulticontext))
#define GTK_IM_MULTICONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IM_MULTICONTEXT, GtkIMMulticontextClass))
#define GTK_IS_IM_MULTICONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IM_MULTICONTEXT))
#define GTK_IS_IM_MULTICONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IM_MULTICONTEXT))
#define GTK_IM_MULTICONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IM_MULTICONTEXT, GtkIMMulticontextClass))
#endif
