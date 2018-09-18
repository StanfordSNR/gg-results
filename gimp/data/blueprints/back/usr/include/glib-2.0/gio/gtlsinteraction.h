// GGHASH:VImlmorkG4SB8I_kYJb7kiwxlmK1CyjH3sEyyPVqoDj00000208d
#ifndef __G_TLS_INTERACTION_H__
#define __G_TLS_INTERACTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_TLS_INTERACTION (g_tls_interaction_get_type ())
#define G_TLS_INTERACTION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), G_TYPE_TLS_INTERACTION, GTlsInteraction))
#define G_TLS_INTERACTION_CLASS(k) (G_TYPE_CHECK_CLASS_CAST((k), G_TYPE_TLS_INTERACTION, GTlsInteractionClass))
#define G_IS_TLS_INTERACTION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_TYPE_TLS_INTERACTION))
#define G_IS_TLS_INTERACTION_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), G_TYPE_TLS_INTERACTION))
#define G_TLS_INTERACTION_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_TYPE_TLS_INTERACTION, GTlsInteractionClass))
#endif
