// GGHASH:VNGIx.hHoEfNMy3sK7AwgFTeFgtjaET0__HacaqOZk9U0000121c
#ifndef __ATK_TABLE_CELL_H__
#define __ATK_TABLE_CELL_H__ 
#if defined(ATK_DISABLE_SINGLE_INCLUDES) && !defined (__ATK_H_INSIDE__) && !defined (ATK_COMPILATION)
#error "Only <atk/atk.h> can be included directly."
#endif
#include <atk/atkobject.h>
#define ATK_TYPE_TABLE_CELL (atk_table_cell_get_type ())
#define ATK_IS_TABLE_CELL(obj) G_TYPE_CHECK_INSTANCE_TYPE ((obj), ATK_TYPE_TABLE_CELL)
#define ATK_TABLE_CELL(obj) G_TYPE_CHECK_INSTANCE_CAST ((obj), ATK_TYPE_TABLE_CELL, AtkTableCell)
#define ATK_TABLE_CELL_GET_IFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ATK_TYPE_TABLE_CELL, AtkTableCellIface))
#ifndef _TYPEDEF_ATK_TABLE_CELL_
#define _TYPEDEF_ATK_TABLE_CELL_ 
#endif
#endif
