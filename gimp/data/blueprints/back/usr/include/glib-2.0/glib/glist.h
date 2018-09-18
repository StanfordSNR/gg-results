// GGHASH:Vi2O4.1PQw2bD3nQiiDMOxxcdA82Iv7Wy12.O_TBGghI000016be
#ifndef __G_LIST_H__
#define __G_LIST_H__ 
#if !defined (__GLIB_H_INSIDE__) && !defined (GLIB_COMPILATION)
#error "Only <glib.h> can be included directly."
#endif
#include <glib/gmem.h>
#include <glib/gnode.h>
#define g_list_free1 g_list_free_1
#define g_list_previous(list) ((list) ? (((GList *)(list))->prev) : NULL)
#define g_list_next(list) ((list) ? (((GList *)(list))->next) : NULL)
#endif
