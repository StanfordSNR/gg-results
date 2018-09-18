// GGHASH:V.T.AUXA3npyYYsNhixckD_Q3fdwicYmxBkXzzsj.0OM00003205
#ifndef __ATK_TABLE_H__
#define __ATK_TABLE_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#define ATK_TYPE_TABLE (atk_table_get_type ())
#define ATK_IS_TABLE(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_TABLE)
#define ATK_TABLE(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_TABLE, AtkTable)
#define ATK_TABLE_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_TABLE, AtkTableIface))
#ifndef _TYPEDEF_ATK_TABLE_
#define _TYPEDEF_ATK_TABLE_ 
#endif
#endif
