// GGHASH:VisqNjwvgZstSMsOnWGvJJS9Qy2w2WQX0tutpZiuyr.400002535
#ifndef __G_ARRAY_H__
#define __G_ARRAY_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#define g_array_append_val(a,v) g_array_append_vals (a, &(v), 1)
#define g_array_prepend_val(a,v) g_array_prepend_vals (a, &(v), 1)
#define g_array_insert_val(a,i,v) g_array_insert_vals (a, i, &(v), 1)
#define g_array_index(a,t,i) (((t*) (void *) (a)->data) [(i)])
#define g_ptr_array_index(array,index_) ((array)->pdata)[index_]
#endif
