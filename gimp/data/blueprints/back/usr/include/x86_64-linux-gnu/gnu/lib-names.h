// GGHASH:VjaxkPelPynKIZ4YkZslZJy_Vz0_4x0q9bhfpBopMoRU000001d3
#ifndef __GNU_LIB_NAMES_H
#define __GNU_LIB_NAMES_H 1
#if !defined __x86_64__
# include <gnu/lib-names-32.h>
#endif
#if defined __x86_64__ && defined __LP64__
# include <gnu/lib-names-64.h>
#endif
#if defined __x86_64__ && defined __ILP32__
# include <gnu/lib-names-x32.h>
#endif
#endif
