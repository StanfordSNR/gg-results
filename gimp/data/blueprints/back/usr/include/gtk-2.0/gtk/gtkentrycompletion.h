// GGHASH:V0ajUoQ11YRxIuXvpzPkG0rbqEAFgQ5YKUpnNl2xtigg00001e4b
#ifndef __GTK_ENTRY_COMPLETION_H__
#define __GTK_ENTRY_COMPLETION_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtktreemodel.h>
#include <gtk/gtkliststore.h>
#include <gtk/gtktreeviewcolumn.h>
#include <gtk/gtktreemodelfilter.h>
#define GTK_TYPE_ENTRY_COMPLETION (gtk_entry_completion_get_type ())
#define GTK_ENTRY_COMPLETION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ENTRY_COMPLETION, GtkEntryCompletion))
#define GTK_ENTRY_COMPLETION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_ENTRY_COMPLETION, GtkEntryCompletionClass))
#define GTK_IS_ENTRY_COMPLETION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ENTRY_COMPLETION))
#define GTK_IS_ENTRY_COMPLETION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_ENTRY_COMPLETION))
#define GTK_ENTRY_COMPLETION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_ENTRY_COMPLETION, GtkEntryCompletionClass))
#endif
