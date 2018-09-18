// GGHASH:Vf_I7ebNBuwsLx8Ty4C4DfOXl7OTS9D4b7tHWXc5Khgc000012d9
#ifndef __GTK_BINDINGS_H__
#define __GTK_BINDINGS_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gdk/gdk.h>
#include <gtk/gtkobject.h>
#ifndef GTK_DISABLE_DEPRECATED
#define gtk_binding_entry_add gtk_binding_entry_clear
#endif
#endif
