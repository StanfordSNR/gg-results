// GGHASH:VqbIafQDuqXeaO_Mn.sIesAZAg2KTdJJnp.SaH38evtU00000a21
#ifndef __GTK_MISC_H__
#define __GTK_MISC_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_MISC (gtk_misc_get_type ())
#define GTK_MISC(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_MISC, GtkMisc))
#define GTK_MISC_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_MISC, GtkMiscClass))
#define GTK_IS_MISC(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_MISC))
#define GTK_IS_MISC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_MISC))
#define GTK_MISC_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_MISC, GtkMiscClass))
#endif
