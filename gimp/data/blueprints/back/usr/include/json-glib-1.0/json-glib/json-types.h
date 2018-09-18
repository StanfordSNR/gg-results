// GGHASH:V9MwMMYPqcp8wb_fVGFUmi9IaPwW1Q63u1CfY9oTXiMU0000561e
#ifndef __JSON_TYPES_H__
#define __JSON_TYPES_H__ 
#if !defined(__JSON_GLIB_INSIDE__) && !defined(JSON_COMPILATION)
#error "Only <json-glib/json-glib.h> can be included directly."
#endif
#include <glib-object.h>
#include <json-glib/json-version-macros.h>
#define JSON_NODE_TYPE(node) (json_node_get_node_type ((node)))
#define JSON_NODE_HOLDS(node,t) (json_node_get_node_type ((node)) == (t))
#define JSON_NODE_HOLDS_VALUE(node) (JSON_NODE_HOLDS ((node), JSON_NODE_VALUE))
#define JSON_NODE_HOLDS_OBJECT(node) (JSON_NODE_HOLDS ((node), JSON_NODE_OBJECT))
#define JSON_NODE_HOLDS_ARRAY(node) (JSON_NODE_HOLDS ((node), JSON_NODE_ARRAY))
#define JSON_NODE_HOLDS_NULL(node) (JSON_NODE_HOLDS ((node), JSON_NODE_NULL))
#define JSON_TYPE_NODE (json_node_get_type ())
#define JSON_TYPE_OBJECT (json_object_get_type ())
#define JSON_TYPE_ARRAY (json_array_get_type ())
#ifdef G_DEFINE_AUTOPTR_CLEANUP_FUNC
#endif
#endif
