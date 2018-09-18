// GGHASH:V8ktaOVMKN8_4YeacJBzoBgE2MtXBQiJJnx_zSAfnKec00000b56
#ifndef __G_BITLOCK_H__
#define __G_BITLOCK_H__ 
#include <glib/gtypes.h>
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#ifdef __GNUC__
#define g_pointer_bit_lock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_lock ((address), (lock_bit)); }))
#define g_pointer_bit_trylock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_trylock ((address), (lock_bit)); }))
#define g_pointer_bit_unlock(address,lock_bit) (G_GNUC_EXTENSION ({ G_STATIC_ASSERT (sizeof *(address) == sizeof (gpointer)); g_pointer_bit_unlock ((address), (lock_bit)); }))
#endif
#endif
