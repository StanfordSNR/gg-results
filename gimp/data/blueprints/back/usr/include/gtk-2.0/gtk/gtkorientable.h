// GGHASH:VtSYyFODoCB5TV9xOMxrElQDB0VFJPkKOwRFsx3InpPY00000923
#ifndef __GTK_ORIENTABLE_H__
#define __GTK_ORIENTABLE_H__ 
#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkwidget.h>
#define GTK_TYPE_ORIENTABLE (gtk_orientable_get_type ())
#define GTK_ORIENTABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ORIENTABLE, GtkOrientable))
#define GTK_ORIENTABLE_CLASS(vtable) (G_TYPE_CHECK_CLASS_CAST ((vtable), GTK_TYPE_ORIENTABLE, GtkOrientableIface))
#define GTK_IS_ORIENTABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ORIENTABLE))
#define GTK_IS_ORIENTABLE_CLASS(vtable) (G_TYPE_CHECK_CLASS_TYPE ((vtable), GTK_TYPE_ORIENTABLE))
#define GTK_ORIENTABLE_GET_IFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), GTK_TYPE_ORIENTABLE, GtkOrientableIface))
#endif
