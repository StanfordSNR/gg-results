// GGHASH:V2KY21haM.gcgpE1TaRdEpBQUUP047pkEgFdR5xy7pM000001132
#ifndef __G_TLS_BACKEND_H__
#define __G_TLS_BACKEND_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TLS_BACKEND_EXTENSION_POINT_NAME "gio-tls-backend"
#define G_TYPE_TLS_BACKEND (g_tls_backend_get_type ())
#define G_TLS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), G_TYPE_TLS_BACKEND, GTlsBackend))
#define G_IS_TLS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), G_TYPE_TLS_BACKEND))
#define G_TLS_BACKEND_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), G_TYPE_TLS_BACKEND, GTlsBackendInterface))
#endif
