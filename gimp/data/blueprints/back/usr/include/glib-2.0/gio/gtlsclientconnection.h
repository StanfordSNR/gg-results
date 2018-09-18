// GGHASH:VdbXOUoJW1vlC8GhmQOAxFvc8750w46AWumD5SUsIMa800000e63
#ifndef __G_TLS_CLIENT_CONNECTION_H__
#define __G_TLS_CLIENT_CONNECTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gtlsconnection.h>
#define G_TYPE_TLS_CLIENT_CONNECTION (g_tls_client_connection_get_type ())
#define G_TLS_CLIENT_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_CLIENT_CONNECTION, GTlsClientConnection))
#define G_IS_TLS_CLIENT_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_CLIENT_CONNECTION))
#define G_TLS_CLIENT_CONNECTION_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_TLS_CLIENT_CONNECTION, GTlsClientConnectionInterface))
#endif
