// GGHASH:VRyLB1HxtudtGMdE3M.0w4Hu3ZZ9S5EjxX5pshHzVVd400000d4a
#ifndef __GTK_SOCKET_H__
#define __GTK_SOCKET_H__ 
#if defined(GTK_DISABLE_SINGLE_INCLUDES) && !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif
#include <gtk/gtkcontainer.h>
#define GTK_TYPE_SOCKET (gtk_socket_get_type ())
#define GTK_SOCKET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_SOCKET, GtkSocket))
#define GTK_SOCKET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_SOCKET, GtkSocketClass))
#define GTK_IS_SOCKET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_SOCKET))
#define GTK_IS_SOCKET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_SOCKET))
#define GTK_SOCKET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_SOCKET, GtkSocketClass))
#ifndef GTK_DISABLE_DEPRECATED
#endif
#endif
