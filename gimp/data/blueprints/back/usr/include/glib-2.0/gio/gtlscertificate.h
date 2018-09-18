// GGHASH:VFQfOzY.VnQupDP0D_x4c6G0a0QxuKxfii54jV.KyrPE00000db1
#ifndef __G_TLS_CERTIFICATE_H__
#define __G_TLS_CERTIFICATE_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_TLS_CERTIFICATE (g_tls_certificate_get_type ())
#define G_TLS_CERTIFICATE(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_TLS_CERTIFICATE, GTlsCertificate))
#define G_TLS_CERTIFICATE_CLASS(class) (G_TYPE_CHECK_CLASS_CAST ((class), G_TYPE_TLS_CERTIFICATE, GTlsCertificateClass))
#define G_IS_TLS_CERTIFICATE(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_TLS_CERTIFICATE))
#define G_IS_TLS_CERTIFICATE_CLASS(class) (G_TYPE_CHECK_CLASS_TYPE ((class), G_TYPE_TLS_CERTIFICATE))
#define G_TLS_CERTIFICATE_GET_CLASS(inst) (G_TYPE_INSTANCE_GET_CLASS ((inst), G_TYPE_TLS_CERTIFICATE, GTlsCertificateClass))
#endif
