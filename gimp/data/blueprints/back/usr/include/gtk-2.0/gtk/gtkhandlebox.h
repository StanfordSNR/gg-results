// GGHASH:VEQzp2g0xPpluEXLJ1kTLeQQZpWvuZN_8hDryvJJ5me00000108f
#ifndef __GTK_HANDLE_BOX_H__
#define __GTK_HANDLE_BOX_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkbin.h>
#define GTK_TYPE_HANDLE_BOX (gtk_handle_box_get_type ())
#define GTK_HANDLE_BOX(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_HANDLE_BOX, GtkHandleBox))
#define GTK_HANDLE_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_HANDLE_BOX, GtkHandleBoxClass))
#define GTK_IS_HANDLE_BOX(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_HANDLE_BOX))
#define GTK_IS_HANDLE_BOX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_HANDLE_BOX))
#define GTK_HANDLE_BOX_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_HANDLE_BOX, GtkHandleBoxClass))
#endif
