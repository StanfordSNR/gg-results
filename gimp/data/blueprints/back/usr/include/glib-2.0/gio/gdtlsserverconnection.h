// GGHASH:V3TvnS2_BFlYzvHIEgF9h0FEGafavmGzXrneLZdqK0cA0000098e
#ifndef __G_DTLS_SERVER_CONNECTION_H__
#define __G_DTLS_SERVER_CONNECTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gdtlsconnection.h>
#define G_TYPE_DTLS_SERVER_CONNECTION (g_dtls_server_connection_get_type ())
#define G_DTLS_SERVER_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_DTLS_SERVER_CONNECTION, GDtlsServerConnection))
#define G_IS_DTLS_SERVER_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_DTLS_SERVER_CONNECTION))
#define G_DTLS_SERVER_CONNECTION_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_DTLS_SERVER_CONNECTION, GDtlsServerConnectionInterface))
#endif
