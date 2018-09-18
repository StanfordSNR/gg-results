// GGHASH:VX8_u3OKxxy32qYQFNKMqV9nhP9MR2QIPb1jJG.X1_uQ00000cb8
#ifndef __G_ALLOCATOR_H__
#define __G_ALLOCATOR_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#define G_ALLOC_ONLY 1
#define G_ALLOC_AND_FREE 2
#define G_ALLOCATOR_LIST 1
#define G_ALLOCATOR_SLIST 2
#define G_ALLOCATOR_NODE 3
#define g_chunk_new(type,chunk) ((type *) g_mem_chunk_alloc (chunk))
#define g_chunk_new0(type,chunk) ((type *) g_mem_chunk_alloc0 (chunk))
#define g_chunk_free(mem,mem_chunk) (g_mem_chunk_free (mem_chunk, mem))
#define g_mem_chunk_create(type,x,y) (g_mem_chunk_new (NULL, sizeof (type), 0, 0))
#endif
