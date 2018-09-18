// GGHASH:VNCqsxE8rrOV804.wrZbt9zl3_dnPZ60BwoPlq.O9PvM00000d0f
#ifndef _LINUX_RADIX_TREE_H
#define _LINUX_RADIX_TREE_H 
#if BTRFS_FLAT_INCLUDES
#include "kerncompat.h"
#else
#include <btrfs/kerncompat.h>
#endif
#define RADIX_TREE_MAX_TAGS 2
#define RADIX_TREE_INIT(mask) { .height = 0, .gfp_mask = (mask), .rnode = NULL, }
#define RADIX_TREE(name,mask) struct radix_tree_root name = RADIX_TREE_INIT(mask)
#define INIT_RADIX_TREE(root,mask) do { (root)->height = 0; (root)->gfp_mask = (mask); (root)->rnode = NULL; } while (0)
#endif
