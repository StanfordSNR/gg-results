// GGHASH:VnKcqF.mJ5RpqdTSRCqKbqDAW2pJ6AJ1ItXo5v4gyhAA0000340d
#ifndef __G_MEM_H__
#define __G_MEM_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gutils.h>
#if GLIB_SIZEOF_VOID_P > GLIB_SIZEOF_LONG
#define G_MEM_ALIGN GLIB_SIZEOF_VOID_P
#else
#define G_MEM_ALIGN GLIB_SIZEOF_LONG
#endif
#define g_clear_pointer(pp,destroy) G_STMT_START { G_STATIC_ASSERT (sizeof *(pp) == sizeof (gpointer)); union { char *in; gpointer *out; } _pp; gpointer _p; GDestroyNotify _destroy = (GDestroyNotify) (destroy); _pp.in = (char *) (pp); _p = *_pp.out; if (_p) { *_pp.out = NULL; _destroy (_p); } } G_STMT_END
#define g_steal_pointer(pp) (0 ? (*(pp)) : (g_steal_pointer) (pp))
#if defined (__GNUC__) && (__GNUC__ >= 2) && defined (__OPTIMIZE__)
#define _G_NEW(struct_type,n_structs,func) (struct_type *) (G_GNUC_EXTENSION ({ gsize __n = (gsize) (n_structs); gsize __s = sizeof (struct_type); gpointer __p; if (__s == 1) __p = g_ ##func (__n); else if (__builtin_constant_p (__n) && (__s == 0 || __n <= G_MAXSIZE / __s)) __p = g_ ##func (__n * __s); else __p = g_ ##func ##_n (__n, __s); __p; }))
#define _G_RENEW(struct_type,mem,n_structs,func) (struct_type *) (G_GNUC_EXTENSION ({ gsize __n = (gsize) (n_structs); gsize __s = sizeof (struct_type); gpointer __p = (gpointer) (mem); if (__s == 1) __p = g_ ##func (__p, __n); else if (__builtin_constant_p (__n) && (__s == 0 || __n <= G_MAXSIZE / __s)) __p = g_ ##func (__p, __n * __s); else __p = g_ ##func ##_n (__p, __n, __s); __p; }))
#else
#define _G_NEW(struct_type,n_structs,func) ((struct_type *) g_ ##func ##_n ((n_structs), sizeof (struct_type)))
#define _G_RENEW(struct_type,mem,n_structs,func) ((struct_type *) g_ ##func ##_n (mem, (n_structs), sizeof (struct_type)))
#endif
#define g_new(struct_type,n_structs) _G_NEW (struct_type, n_structs, malloc)
#define g_new0(struct_type,n_structs) _G_NEW (struct_type, n_structs, malloc0)
#define g_renew(struct_type,mem,n_structs) _G_RENEW (struct_type, mem, n_structs, realloc)
#define g_try_new(struct_type,n_structs) _G_NEW (struct_type, n_structs, try_malloc)
#define g_try_new0(struct_type,n_structs) _G_NEW (struct_type, n_structs, try_malloc0)
#define g_try_renew(struct_type,mem,n_structs) _G_RENEW (struct_type, mem, n_structs, try_realloc)
#endif
