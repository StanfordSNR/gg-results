// GGHASH:V5.oKBioMEjiS.wQ3I9T.CLQZGAmziCI8h.Ye.j7dNdU00000e34
#ifndef __GTK_ACTIVATABLE_H__
#define __GTK_ACTIVATABLE_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkaction.h>
#include <gtk/gtktypeutils.h>
#define GTK_TYPE_ACTIVATABLE (gtk_activatable_get_type ())
#define GTK_ACTIVATABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_ACTIVATABLE, GtkActivatable))
#define GTK_ACTIVATABLE_CLASS(obj) (G_TYPE_CHECK_CLASS_CAST ((obj), GTK_TYPE_ACTIVATABLE, GtkActivatableIface))
#define GTK_IS_ACTIVATABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_ACTIVATABLE))
#define GTK_ACTIVATABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), GTK_TYPE_ACTIVATABLE, GtkActivatableIface))
#endif
