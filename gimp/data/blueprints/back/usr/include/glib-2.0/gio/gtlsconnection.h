// GGHASH:VnUi_n7U.lKlNCt2pZBNgD_HW.cJPEN34o7eRTQXWL6k00001814
#ifndef __G_TLS_CONNECTION_H__
#define __G_TLS_CONNECTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giostream.h>
#define G_TYPE_TLS_CONNECTION (g_tls_connection_get_type ())
#define G_TLS_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_CONNECTION, GTlsConnection))
#define G_TLS_CONNECTION_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TLS_CONNECTION, GTlsConnectionClass))
#define G_IS_TLS_CONNECTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_CONNECTION))
#define G_IS_TLS_CONNECTION_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TLS_CONNECTION))
#define G_TLS_CONNECTION_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TLS_CONNECTION, GTlsConnectionClass))
#define G_TLS_ERROR (g_tls_error_quark ())
#endif
