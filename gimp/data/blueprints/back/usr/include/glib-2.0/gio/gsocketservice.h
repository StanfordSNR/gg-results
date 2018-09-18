// GGHASH:VxeI8X_2uM8bDlt3c1WjfogCRM45XoWIswvJ4HR_Dp2w00000e24
#ifndef __G_SOCKET_SERVICE_H__
#define __G_SOCKET_SERVICE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gsocketlistener.h>
#define G_TYPE_SOCKET_SERVICE (g_socket_service_get_type ())
#define G_SOCKET_SERVICE(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_SOCKET_SERVICE, GSocketService))
#define G_SOCKET_SERVICE_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_SOCKET_SERVICE, GSocketServiceClass))
#define G_IS_SOCKET_SERVICE(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_SOCKET_SERVICE))
#define G_IS_SOCKET_SERVICE_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_SOCKET_SERVICE))
#define G_SOCKET_SERVICE_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_SOCKET_SERVICE, GSocketServiceClass))
#endif
