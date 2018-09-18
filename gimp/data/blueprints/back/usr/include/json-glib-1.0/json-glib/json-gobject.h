// GGHASH:VI23Rie8xypASq4ntCLv1qXEjniikmr6Gl2eZ545TIOM000026c8
#ifndef __JSON_GOBJECT_H__
#define __JSON_GOBJECT_H__ 
#include <json-glib/json-types.h>
#define JSON_TYPE_SERIALIZABLE (json_serializable_get_type ())
#define JSON_SERIALIZABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), JSON_TYPE_SERIALIZABLE, JsonSerializable))
#define JSON_IS_SERIALIZABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), JSON_TYPE_SERIALIZABLE))
#define JSON_SERIALIZABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), JSON_TYPE_SERIALIZABLE, JsonSerializableIface))
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
