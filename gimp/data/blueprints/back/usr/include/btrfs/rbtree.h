// GGHASH:Vne.kjCE7r.f2YkclufakIJgre724ef4xhQ9.zWs1pH000000f3f
#ifndef _LINUX_RBTREE_H
#define _LINUX_RBTREE_H 
#if BTRFS_FLAT_INCLUDES
#include "kerncompat.h"
#else
#include <btrfs/kerncompat.h>
#endif
#ifdef __cplusplus
#endif
#define rb_parent(r) ((struct rb_node *)((r)->__rb_parent_color & ~3))
#define RB_ROOT (struct rb_root) { NULL, }
#define rb_entry(ptr,type,member) container_of(ptr, type, member)
#define RB_EMPTY_ROOT(root) ((root)->rb_node == NULL)
#define RB_EMPTY_NODE(node) ((node)->__rb_parent_color == (unsigned long)(node))
#define RB_CLEAR_NODE(node) ((node)->__rb_parent_color = (unsigned long)(node))
#define rb_entry_safe(ptr,type,member) ({ typeof(ptr) ____ptr = (ptr); ____ptr ? rb_entry(____ptr, type, member) : NULL; })
#define rbtree_postorder_for_each_entry_safe(pos,n,root,field) for (pos = rb_entry_safe(rb_first_postorder(root), typeof(*pos), field); pos && ({ n = rb_entry_safe(rb_next_postorder(&pos->field), typeof(*pos), field); 1; }); pos = n)
#ifdef __cplusplus
#endif
#endif
