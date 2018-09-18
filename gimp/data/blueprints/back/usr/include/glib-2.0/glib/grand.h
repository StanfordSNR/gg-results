// GGHASH:Vrdf4_WIkB0sFoWYAIGruKlwKwnF9ReYcNU3Cn1ABncA00000c6e
#ifndef __G_RAND_H__
#define __G_RAND_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#define g_rand_boolean(rand_) ((g_rand_int (rand_) & (1 << 15)) != 0)
#define g_random_boolean() ((g_random_int () & (1 << 15)) != 0)
#endif
