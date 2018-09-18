// GGHASH:VydxHU1rnOwNrBzz2rFnjVzG9eKeVeO4Su96_c9n57cs00000e14
#ifndef __BTRFS_EXTENT_CACHE_H__
#define __BTRFS_EXTENT_CACHE_H__ 
#if BTRFS_FLAT_INCLUDES
#include "kerncompat.h"
#include "rbtree.h"
#else
#include <btrfs/kerncompat.h>
#include <btrfs/rbtree.h>
#endif
#define FREE_EXTENT_CACHE_BASED_TREE(name,free_func) static void free_ ##name ##_tree(struct cache_tree *tree) { cache_tree_free_extents(tree, free_func); }
#endif
