// GGHASH:VHxK657nx7_URNErvRmyHJUn.DjbXP7oURUOZIiU5rfA00001d4d
#ifndef __GTK_ASSISTANT_H__
#define __GTK_ASSISTANT_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwindow.h>
#define GTK_TYPE_ASSISTANT (gtk_assistant_get_type ())
#define GTK_ASSISTANT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GTK_TYPE_ASSISTANT, GtkAssistant))
#define GTK_ASSISTANT_CLASS(c) (G_TYPE_CHECK_CLASS_CAST ((c), GTK_TYPE_ASSISTANT, GtkAssistantClass))
#define GTK_IS_ASSISTANT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GTK_TYPE_ASSISTANT))
#define GTK_IS_ASSISTANT_CLASS(c) (G_TYPE_CHECK_CLASS_TYPE ((c), GTK_TYPE_ASSISTANT))
#define GTK_ASSISTANT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GTK_TYPE_ASSISTANT, GtkAssistantClass))
#endif
