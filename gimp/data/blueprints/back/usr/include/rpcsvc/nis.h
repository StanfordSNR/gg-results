// GGHASH:VSGyFL4sNT8SBGuCUYKwO_jwHI6MCXe86TPzUXXfbSpQ00003f52
#ifndef _RPCSVC_NIS_H
#define _RPCSVC_NIS_H 1
#include <features.h>
#include <rpc/rpc.h>
#include <rpcsvc/nis_tags.h>
#ifndef __nis_object_h
#define __nis_object_h 
#define NIS_MAXSTRINGLEN 255
#define NIS_MAXNAMELEN 1024
#define NIS_MAXATTRNAME 32
#define NIS_MAXATTRVAL 2048
#define NIS_MAXCOLUMNS 64
#define NIS_MAXATTR 16
#define NIS_MAXPATH 1024
#define NIS_MAXREPLICAS 128
#define NIS_MAXLINKS 16
#define NIS_PK_NONE 0
#define NIS_PK_DH 1
#define NIS_PK_RSA 2
#define NIS_PK_KERB 3
#define NIS_PK_DHEXT 4
#define EN_BINARY 1
#define EN_CRYPT 2
#define EN_XDR 4
#define EN_MODIFIED 8
#define EN_ASN1 64
#define TA_BINARY 1
#define TA_CRYPT 2
#define TA_XDR 4
#define TA_SEARCHABLE 8
#define TA_CASE 16
#define TA_MODIFIED 32
#define TA_ASN1 64
#endif
#define ZMH_VC 1
#define ZMH_DG 2
#define ZMH_AUTH 4
#define NIS_READ_ACC 1
#define NIS_MODIFY_ACC 2
#define NIS_CREATE_ACC 4
#define NIS_DESTROY_ACC 8
#define NIS_WORLD(a,m) (((a) & (m)) != 0)
#define NIS_GROUP(a,m) (((a) & ((m) << 8)) != 0)
#define NIS_OWNER(a,m) (((a) & ((m) << 16)) != 0)
#define NIS_NOBODY(a,m) (((a) & ((m) << 24)) != 0)
#define WORLD(a,m) (((a) & (m)) != 0)
#define GROUP(a,m) (((a) & ((m) << 8)) != 0)
#define OWNER(a,m) (((a) & ((m) << 16)) != 0)
#define NOBODY(a,m) (((a) & ((m) << 24)) != 0)
#define OATYPE(d,n) (((d)->do_armask.do_armask_val+n)->oa_otype)
#define OARIGHTS(d,n) (((d)->do_armask.do_armask_val+n)->oa_rights)
#define WORLD_DEFAULT (NIS_READ_ACC)
#define GROUP_DEFAULT (NIS_READ_ACC << 8)
#define OWNER_DEFAULT ((NIS_READ_ACC + NIS_MODIFY_ACC + NIS_CREATE_ACC + NIS_DESTROY_ACC) << 16)
#define DEFAULT_RIGHTS (WORLD_DEFAULT | GROUP_DEFAULT | OWNER_DEFAULT)
#define NIS_RES_NUMOBJ(x) ((x)->objects.objects_len)
#define NIS_RES_OBJECT(x) ((x)->objects.objects_val)
#define NIS_RES_COOKIE(x) ((x)->cookie)
#define NIS_RES_STATUS(x) ((x)->status)
#define TA_data zo_data.objdata_u.ta_data
#define EN_data zo_data.objdata_u.en_data
#define DI_data zo_data.objdata_u.di_data
#define LI_data zo_data.objdata_u.li_data
#define GR_data zo_data.objdata_u.gr_data
#define __type_of(o) ((o)->zo_data.zo_type)
#define ENTRY_VAL(obj,col) (obj)->EN_data.en_cols.en_cols_val[col].ec_value.ec_value_val
#define ENTRY_LEN(obj,col) (obj)->EN_data.en_cols.en_cols_val[col].ec_value.ec_value_len
#include <rpcsvc/nislib.h>
#endif
#ifndef __nis_3_h
#define __nis_3_h 
#define NIS_PROG 100300
#define NIS_VERSION 3
#define NIS_LOOKUP 1
#define NIS_ADD 2
#define NIS_MODIFY 3
#define NIS_REMOVE 4
#define NIS_IBLIST 5
#define NIS_IBADD 6
#define NIS_IBMODIFY 7
#define NIS_IBREMOVE 8
#define NIS_IBFIRST 9
#define NIS_IBNEXT 10
#define NIS_FINDDIRECTORY 12
#define NIS_STATUS 14
#define NIS_DUMPLOG 15
#define NIS_DUMP 16
#define NIS_CALLBACK 17
#define NIS_CPTIME 18
#define NIS_CHECKPOINT 19
#define NIS_PING 20
#define NIS_SERVSTATE 21
#define NIS_MKDIR 22
#define NIS_RMDIR 23
#define NIS_UPDKEYS 24
#endif
