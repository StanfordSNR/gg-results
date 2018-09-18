// GGHASH:VeZsNw4nDzoiUseHbwpymspOVYUy7420Gr0R5tFRSZyg00000e51
#ifndef __G_THREADED_SOCKET_SERVICE_H__
#define __G_THREADED_SOCKET_SERVICE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gsocketservice.h>
#define G_TYPE_THREADED_SOCKET_SERVICE (g_threaded_socket_service_get_type ())
#define G_THREADED_SOCKET_SERVICE(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_THREADED_SOCKET_SERVICE, GThreadedSocketService))
#define G_THREADED_SOCKET_SERVICE_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_THREADED_SOCKET_SERVICE, GThreadedSocketServiceClass))
#define G_IS_THREADED_SOCKET_SERVICE(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_THREADED_SOCKET_SERVICE))
#define G_IS_THREADED_SOCKET_SERVICE_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_THREADED_SOCKET_SERVICE))
#define G_THREADED_SOCKET_SERVICE_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_THREADED_SOCKET_SERVICE, GThreadedSocketServiceClass))
#endif
