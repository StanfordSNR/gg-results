// GGHASH:Vjn32RQJzZgfqfmMD2305mH1jDKmQYpjEil.YpjNA9Fk000012cf
#ifndef __GTK_EDITABLE_H__
#define __GTK_EDITABLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_EDITABLE (gtk_editable_get_type ())
#define GTK_EDITABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_EDITABLE, GtkEditable))
#define GTK_EDITABLE_CLASS(vtable) (G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_EDITABLE, GtkEditableClass))
#define GTK_IS_EDITABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_EDITABLE))
#define GTK_IS_EDITABLE_CLASS(vtable) (G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_EDITABLE))
#define GTK_EDITABLE_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_EDITABLE, GtkEditableClass))
#endif
