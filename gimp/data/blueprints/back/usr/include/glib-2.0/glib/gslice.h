// GGHASH:V13Qs1NF4skH2_MFDtFm9OBK1xPVNj4SKtKPdUgbGLcU00000f42
#ifndef __G_SLICE_H__
#define __G_SLICE_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#define g_slice_new(type) ((type*) g_slice_alloc (sizeof (type)))
#define g_slice_new0(type) ((type*) g_slice_alloc0 (sizeof (type)))
#define g_slice_dup(type,mem) (1 ? (type*) g_slice_copy (sizeof (type), (mem)) : ((void) ((type*) 0 == (mem)), (type*) 0))
#define g_slice_free(type,mem) G_STMT_START { if (1) g_slice_free1 (sizeof (type), (mem)); else (void) ((type*) 0 == (mem)); } G_STMT_END
#define g_slice_free_chain(type,mem_chain,next) G_STMT_START { if (1) g_slice_free_chain_with_offset (sizeof (type), (mem_chain), G_STRUCT_OFFSET (type, next)); else (void) ((type*) 0 == (mem_chain)); } G_STMT_END
#ifdef G_ENABLE_DEBUG
#endif
#endif
