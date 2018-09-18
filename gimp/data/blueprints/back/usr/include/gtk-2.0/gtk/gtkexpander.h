// GGHASH:VkF.ZLc3MwYA7mrffdxOkJxpStDirxU2GuMcpdtkb9Bc00000f0d
#ifndef __GTK_EXPANDER_H__
#define __GTK_EXPANDER_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbin.h>
#define GTK_TYPE_EXPANDER (gtk_expander_get_type ())
#define GTK_EXPANDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_EXPANDER, GtkExpander))
#define GTK_EXPANDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_EXPANDER, GtkExpanderClass))
#define GTK_IS_EXPANDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_EXPANDER))
#define GTK_IS_EXPANDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_EXPANDER))
#define GTK_EXPANDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_EXPANDER, GtkExpanderClass))
#endif
