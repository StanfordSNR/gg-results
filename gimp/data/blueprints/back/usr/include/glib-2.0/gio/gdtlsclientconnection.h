// GGHASH:VYJtThnDC9m7.xRAOS.WSqmTttsHv5RwWUPSJpkq5GdA00000c7d
#ifndef __G_DTLS_CLIENT_CONNECTION_H__
#define __G_DTLS_CLIENT_CONNECTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gdtlsconnection.h>
#define G_TYPE_DTLS_CLIENT_CONNECTION (g_dtls_client_connection_get_type ())
#define G_DTLS_CLIENT_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_DTLS_CLIENT_CONNECTION, GDtlsClientConnection))
#define G_IS_DTLS_CLIENT_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_DTLS_CLIENT_CONNECTION))
#define G_DTLS_CLIENT_CONNECTION_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_DTLS_CLIENT_CONNECTION, GDtlsClientConnectionInterface))
#endif
