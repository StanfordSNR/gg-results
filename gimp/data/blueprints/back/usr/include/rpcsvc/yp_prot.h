// GGHASH:VdnBc2rRb2f80Q.h7YfkkueC02YOgfSH5QdC3wEre3Bs00002903
#ifndef _RPCSVC_YP_PROT_H
#define _RPCSVC_YP_PROT_H 
#include <features.h>
#include <rpc/rpc.h>
#include <rpcsvc/ypclnt.h>
#define YPPROG 100004
#define YPVERS 2
#define YPVERS_ORIG 1
#define YPMAXRECORD 1024
#define YPMAXDOMAIN 64
#define YPMAXMAP 64
#define YPMAXPEER 64
#define YPMSGSZ 1600
#define ypxfr_domain map_parms.domain
#define ypxfr_map map_parms.map
#define ypxfr_ordernum map_parms.ordernum
#define ypxfr_owner map_parms.owner
#define YP_TRUE YP_TRUE
#define YP_NOMORE YP_NOMORE
#define YP_FALSE YP_FALSE
#define YP_NOMAP YP_NOMAP
#define YP_NODOM YP_NODOM
#define YP_NOKEY YP_NOKEY
#define YP_BADOP YP_BADOP
#define YP_BADDB YP_BADDB
#define YP_YPERR YP_YPERR
#define YP_BADARGS YP_BADARGS
#define YP_VERS YP_VERS
#ifdef STUPID_SUN_BUG
#else
#endif
#define ypml_name map
#define ypml_next next
#define YPPROC_NULL 0
#define YPPROC_DOMAIN 1
#define YPPROC_DOMAIN_NONACK 2
#define YPPROC_MATCH 3
#define YPPROC_FIRST 4
#define YPPROC_NEXT 5
#define YPPROC_XFR 6
#define YPPROC_CLEAR 7
#define YPPROC_ALL 8
#define YPPROC_MASTER 9
#define YPPROC_ORDER 10
#define YPPROC_MAPLIST 11
#define YPPROC_NEWXFR 12
#define YPBINDPROG 100007
#define YPBINDVERS 2
#define YPBINDVERS_ORIG 1
#define YPBINDPROC_NULL 0
#define YPBINDPROC_DOMAIN 1
#define YPBINDPROC_SETDOM 2
#define YPBIND_ERR_ERR 1
#define YPBIND_ERR_NOSERV 2
#define YPBIND_ERR_RESC 3
#define ypsetdom_addr ypsetdom_binding.ypbind_binding_addr
#define ypsetdom_port ypsetdom_binding.ypbind_binding_port
#define YPPUSHVERS 1
#define YPPUSHVERS_ORIG 1
#define YPPUSHPROC_NULL 0
#define YPPUSHPROC_XFRRESP 1
#define YPPUSH_SUCC YPPUSH_SUCC
#define YPPUSH_AGE YPPUSH_AGE
#define YPPUSH_NOMAP YPPUSH_NOMAP
#define YPPUSH_NODOM YPPUSH_NODOM
#define YPPUSH_RSRC YPPUSH_RSRC
#define YPPUSH_RPC YPPUSH_RPC
#define YPPUSH_MADDR YPPUSH_MADDR
#define YPPUSH_YPERR YPPUSH_YPERR
#define YPPUSH_BADARGS YPPUSH_BADARGS
#define YPPUSH_DBM YPPUSH_DBM
#define YPPUSH_FILE YPPUSH_FILE
#define YPPUSH_SKEW YPPUSH_SKEW
#define YPPUSH_CLEAR YPPUSH_CLEAR
#define YPPUSH_FORCE YPPUSH_FORCE
#define YPPUSH_XFRERR YPPUSH_XFRERR
#define YPPUSH_REFUSED YPPUSH_REFUSED
#define YPPUSH_NOALIAS YPPUSH_NOALIAS
#endif
