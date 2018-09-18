// GGHASH:Vz.31eolfXYO24dGxehGKYQGxs2q.6gAtHfY94KwWQuk000032d5
#ifndef __GTK_NOTEBOOK_H__
#define __GTK_NOTEBOOK_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_NOTEBOOK (gtk_notebook_get_type ())
#define GTK_NOTEBOOK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_NOTEBOOK, GtkNotebook))
#define GTK_NOTEBOOK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_NOTEBOOK, GtkNotebookClass))
#define GTK_IS_NOTEBOOK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_NOTEBOOK))
#define GTK_IS_NOTEBOOK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_NOTEBOOK))
#define GTK_NOTEBOOK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_NOTEBOOK, GtkNotebookClass))
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#endif
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#else
#endif
#if !defined (GTK_DISABLE_DEPRECATED) || defined (GTK_COMPILATION)
#else
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#endif
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_notebook_current_page gtk_notebook_get_current_page
#define gtk_notebook_set_page gtk_notebook_set_current_page
#endif
#endif
