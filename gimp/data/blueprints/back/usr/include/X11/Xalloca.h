// GGHASH:VXHj7xKpC9BlLzL8pHcbyEU9cGNcRvo1izPE4E2WX_Rw000011e2
#ifndef XALLOCA_H
#define XALLOCA_H 1
#ifndef INCLUDE_ALLOCA_H
# if defined(HAVE_ALLOCA_H) || defined(__SUNPRO_C) || defined(__SUNPRO_CC)
#define INCLUDE_ALLOCA_H 
# endif
#endif
#ifdef INCLUDE_ALLOCA_H
# include <alloca.h>
#endif
#ifndef NO_ALLOCA
# ifdef __GNUC__
# ifndef alloca
#define alloca __builtin_alloca
# endif
#define ALLOCATE_LOCAL(size) alloca((int)(size))
# else
# if defined(__sun) || defined(alloca)
# if !defined(__cplusplus)
#define __Xnullarg 
# endif
#define ALLOCATE_LOCAL(size) alloca((int)(size))
# endif
# endif
#endif
#if !defined(ALLOCATE_LOCAL)
# if defined(ALLOCATE_LOCAL_FALLBACK) && defined(DEALLOCATE_LOCAL_FALLBACK)
#define ALLOCATE_LOCAL(_size) ALLOCATE_LOCAL_FALLBACK(_size)
#define DEALLOCATE_LOCAL(_ptr) DEALLOCATE_LOCAL_FALLBACK(_ptr)
# else
#define ALLOCATE_LOCAL(_size) ALLOCATE_LOCAL_FALLBACK undefined!
#define DEALLOCATE_LOCAL(_ptr) DEALLOCATE_LOCAL_FALLBACK undefined!
# endif
#else
# if !defined(DEALLOCATE_LOCAL)
#define DEALLOCATE_LOCAL(_ptr) do {} while(0)
# endif
#endif
#endif
