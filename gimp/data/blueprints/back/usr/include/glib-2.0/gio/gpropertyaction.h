// GGHASH:VdTo22XU.6mXsotuSUG6Qu9QN1ntafXol_F.kxmMPvAI000007ca
#ifndef __G_PROPERTY_ACTION_H__
#define __G_PROPERTY_ACTION_H__ 
#if !defined (__GIO_GIO_H_INSIDE__) && !defined (GIO_COMPILATION)
#error "Only <gio/gio.h> can be included directly."
#endif
#include <gio/giotypes.h>
#define G_TYPE_PROPERTY_ACTION (g_property_action_get_type ())
#define G_PROPERTY_ACTION(inst) (G_TYPE_CHECK_INSTANCE_CAST ((inst), G_TYPE_PROPERTY_ACTION, GPropertyAction))
#define G_IS_PROPERTY_ACTION(inst) (G_TYPE_CHECK_INSTANCE_TYPE ((inst), G_TYPE_PROPERTY_ACTION))
#endif
