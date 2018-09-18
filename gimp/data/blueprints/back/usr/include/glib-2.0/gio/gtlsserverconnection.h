// GGHASH:VLMPSGzXtiRLsAeSus93CDZb0AGTdZRESXY1r5chGHl80000092c
#ifndef __G_TLS_SERVER_CONNECTION_H__
#define __G_TLS_SERVER_CONNECTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gtlsconnection.h>
#define G_TYPE_TLS_SERVER_CONNECTION (g_tls_server_connection_get_type ())
#define G_TLS_SERVER_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_SERVER_CONNECTION, GTlsServerConnection))
#define G_IS_TLS_SERVER_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_SERVER_CONNECTION))
#define G_TLS_SERVER_CONNECTION_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_TLS_SERVER_CONNECTION, GTlsServerConnectionInterface))
#endif
