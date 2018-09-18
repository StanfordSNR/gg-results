// GGHASH:V_aOUjIeeC3Jo5AHmuXkD0gwMQ48D8IyqRfIdNDQ_jp0000023a5
#ifndef __G_NODE_H__
#define __G_NODE_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gmem.h>
#define G_NODE_IS_ROOT(node) (((GNode*) (node))->parent == NULL && ((GNode*) (node))->prev == NULL && ((GNode*) (node))->next == NULL)
#define G_NODE_IS_LEAF(node) (((GNode*) (node))->children == NULL)
#define g_node_append(parent,node) g_node_insert_before ((parent), NULL, (node))
#define g_node_insert_data(parent,position,data) g_node_insert ((parent), (position), g_node_new (data))
#define g_node_insert_data_after(parent,sibling,data) g_node_insert_after ((parent), (sibling), g_node_new (data))
#define g_node_insert_data_before(parent,sibling,data) g_node_insert_before ((parent), (sibling), g_node_new (data))
#define g_node_prepend_data(parent,data) g_node_prepend ((parent), g_node_new (data))
#define g_node_append_data(parent,data) g_node_insert_before ((parent), NULL, g_node_new (data))
#define g_node_prev_sibling(node) ((node) ? ((GNode*) (node))->prev : NULL)
#define g_node_next_sibling(node) ((node) ? ((GNode*) (node))->next : NULL)
#define g_node_first_child(node) ((node) ? ((GNode*) (node))->children : NULL)
#endif
