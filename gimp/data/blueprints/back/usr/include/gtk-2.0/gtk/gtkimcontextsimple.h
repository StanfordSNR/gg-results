// GGHASH:VE.0NfrQAB2BcGv4739evEzrE853h_lIIBExAOn9BEwI00000a9f
#ifndef __GTK_IM_CONTEXT_SIMPLE_H__
#define __GTK_IM_CONTEXT_SIMPLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkimcontext.h>
#define GTK_TYPE_IM_CONTEXT_SIMPLE (gtk_im_context_simple_get_type ())
#define GTK_IM_CONTEXT_SIMPLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_IM_CONTEXT_SIMPLE, GtkIMContextSimple))
#define GTK_IM_CONTEXT_SIMPLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_IM_CONTEXT_SIMPLE, GtkIMContextSimpleClass))
#define GTK_IS_IM_CONTEXT_SIMPLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_IM_CONTEXT_SIMPLE))
#define GTK_IS_IM_CONTEXT_SIMPLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_IM_CONTEXT_SIMPLE))
#define GTK_IM_CONTEXT_SIMPLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_IM_CONTEXT_SIMPLE, GtkIMContextSimpleClass))
#define GTK_MAX_COMPOSE_LEN 7
#endif
