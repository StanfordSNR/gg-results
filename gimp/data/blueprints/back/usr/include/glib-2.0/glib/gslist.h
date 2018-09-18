// GGHASH:V08EKG3tReeASBZgAk1eSJxF_vSEwMD_5lOhDKK.16mQ000015d5
#ifndef __G_SLIST_H__
#define __G_SLIST_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gmem.h>
#include <glib/gnode.h>
#define g_slist_free1 g_slist_free_1
#define g_slist_next(slist) ((slist) ? (((GSList *)(slist))->next) : NULL)
#endif
