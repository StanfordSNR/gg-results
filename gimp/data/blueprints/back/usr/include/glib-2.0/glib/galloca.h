// GGHASH:VhKkGPEIyHk0oWseEOlfbl330dQjVkNYVoP.8SsSWNwg00000f48
#ifndef __G_ALLOCA_H__
#define __G_ALLOCA_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gtypes.h>
#if defined(__BIONIC__) && defined (GLIB_HAVE_ALLOCA_H)
# include <alloca.h>
#elif defined(__GNUC__)
#undef alloca
#define alloca(size) __builtin_alloca (size)
#elif defined (GLIB_HAVE_ALLOCA_H)
# include <alloca.h>
#else
# if defined(_MSC_VER) || defined(__DMC__)
# include <malloc.h>
#define alloca _alloca
# else
# ifdef _AIX
#pragma alloca
# else
# ifndef alloca
# endif
# endif
# endif
#endif
#define g_alloca(size) alloca (size)
#define g_newa(struct_type,n_structs) ((struct_type*) g_alloca (sizeof (struct_type) * (gsize) (n_structs)))
#endif
