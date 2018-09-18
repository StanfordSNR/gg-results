// GGHASH:V9tcdLMlWCsBwQHk6qKT0nmuZh_Rj6WXkyA_hYIGVzMs00001e00
#ifndef __G_SOCKET_LISTENER_H__
#define __G_SOCKET_LISTENER_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_SOCKET_LISTENER (g_socket_listener_get_type ())
#define G_SOCKET_LISTENER(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET_LISTENER, GSocketListener))
#define G_SOCKET_LISTENER_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET_LISTENER, GSocketListenerClass))
#define G_IS_SOCKET_LISTENER(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET_LISTENER))
#define G_IS_SOCKET_LISTENER_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET_LISTENER))
#define G_SOCKET_LISTENER_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET_LISTENER, GSocketListenerClass))
#endif
