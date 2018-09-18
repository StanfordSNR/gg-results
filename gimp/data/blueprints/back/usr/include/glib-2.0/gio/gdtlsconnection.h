// GGHASH:VoM.T8nx_GP.3LYBPW9MrqHZ1xpbqSUXXM0G6x4Qq0t4000029bf
#ifndef __G_DTLS_CONNECTION_H__
#define __G_DTLS_CONNECTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/gdatagrambased.h>
#define G_TYPE_DTLS_CONNECTION (g_dtls_connection_get_type ())
#define G_DTLS_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_DTLS_CONNECTION, GDtlsConnection))
#define G_IS_DTLS_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_DTLS_CONNECTION))
#define G_DTLS_CONNECTION_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst), G_TYPE_DTLS_CONNECTION, GDtlsConnectionInterface))
#endif
