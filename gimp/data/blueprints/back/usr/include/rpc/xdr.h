// GGHASH:VSlqRcNF91yHCp9aRggMS.4YOUwGi2WWFp3okU_sIBfw000038f1
#ifndef _RPC_XDR_H
#define _RPC_XDR_H 1
#include <features.h>
#include <sys/types.h>
#include <rpc/types.h>
#include <stdio.h>
#define BYTES_PER_XDR_UNIT (4)
#if 1
#define RNDUP(x) (((x) + BYTES_PER_XDR_UNIT - 1) & ~(BYTES_PER_XDR_UNIT - 1))
#else
#define RNDUP(x) ((((x) + BYTES_PER_XDR_UNIT - 1) / BYTES_PER_XDR_UNIT) * BYTES_PER_XDR_UNIT)
#endif
#define XDR_GETINT32(xdrs,int32p) (*(xdrs)->x_ops->x_getint32)(xdrs, int32p)
#define xdr_getint32(xdrs,int32p) (*(xdrs)->x_ops->x_getint32)(xdrs, int32p)
#define XDR_PUTINT32(xdrs,int32p) (*(xdrs)->x_ops->x_putint32)(xdrs, int32p)
#define xdr_putint32(xdrs,int32p) (*(xdrs)->x_ops->x_putint32)(xdrs, int32p)
#define XDR_GETLONG(xdrs,longp) (*(xdrs)->x_ops->x_getlong)(xdrs, longp)
#define xdr_getlong(xdrs,longp) (*(xdrs)->x_ops->x_getlong)(xdrs, longp)
#define XDR_PUTLONG(xdrs,longp) (*(xdrs)->x_ops->x_putlong)(xdrs, longp)
#define xdr_putlong(xdrs,longp) (*(xdrs)->x_ops->x_putlong)(xdrs, longp)
#define XDR_GETBYTES(xdrs,addr,len) (*(xdrs)->x_ops->x_getbytes)(xdrs, addr, len)
#define xdr_getbytes(xdrs,addr,len) (*(xdrs)->x_ops->x_getbytes)(xdrs, addr, len)
#define XDR_PUTBYTES(xdrs,addr,len) (*(xdrs)->x_ops->x_putbytes)(xdrs, addr, len)
#define xdr_putbytes(xdrs,addr,len) (*(xdrs)->x_ops->x_putbytes)(xdrs, addr, len)
#define XDR_GETPOS(xdrs) (*(xdrs)->x_ops->x_getpostn)(xdrs)
#define xdr_getpos(xdrs) (*(xdrs)->x_ops->x_getpostn)(xdrs)
#define XDR_SETPOS(xdrs,pos) (*(xdrs)->x_ops->x_setpostn)(xdrs, pos)
#define xdr_setpos(xdrs,pos) (*(xdrs)->x_ops->x_setpostn)(xdrs, pos)
#define XDR_INLINE(xdrs,len) (*(xdrs)->x_ops->x_inline)(xdrs, len)
#define xdr_inline(xdrs,len) (*(xdrs)->x_ops->x_inline)(xdrs, len)
#define XDR_DESTROY(xdrs) do { if ((xdrs)->x_ops->x_destroy) (*(xdrs)->x_ops->x_destroy)(xdrs); } while (0)
#define xdr_destroy(xdrs) do { if ((xdrs)->x_ops->x_destroy) (*(xdrs)->x_ops->x_destroy)(xdrs); } while (0)
#define NULL_xdrproc_t ((xdrproc_t)0)
#define IXDR_GET_INT32(buf) ((int32_t)ntohl((uint32_t)*(buf)++))
#define IXDR_PUT_INT32(buf,v) (*(buf)++ = (int32_t)htonl((uint32_t)(v)))
#define IXDR_GET_U_INT32(buf) ((uint32_t)IXDR_GET_INT32(buf))
#define IXDR_PUT_U_INT32(buf,v) IXDR_PUT_INT32(buf, (int32_t)(v))
#define IXDR_GET_LONG(buf) ((long)IXDR_GET_U_INT32(buf))
#define IXDR_PUT_LONG(buf,v) ((long)IXDR_PUT_INT32(buf, (long)(v)))
#define IXDR_GET_U_LONG(buf) ((u_long)IXDR_GET_LONG(buf))
#define IXDR_PUT_U_LONG(buf,v) IXDR_PUT_LONG(buf, (long)(v))
#define IXDR_GET_BOOL(buf) ((bool_t)IXDR_GET_LONG(buf))
#define IXDR_GET_ENUM(buf,t) ((t)IXDR_GET_LONG(buf))
#define IXDR_GET_SHORT(buf) ((short)IXDR_GET_LONG(buf))
#define IXDR_GET_U_SHORT(buf) ((u_short)IXDR_GET_LONG(buf))
#define IXDR_PUT_BOOL(buf,v) IXDR_PUT_LONG(buf, (long)(v))
#define IXDR_PUT_ENUM(buf,v) IXDR_PUT_LONG(buf, (long)(v))
#define IXDR_PUT_SHORT(buf,v) IXDR_PUT_LONG(buf, (long)(v))
#define IXDR_PUT_U_SHORT(buf,v) IXDR_PUT_LONG(buf, (long)(v))
#define MAX_NETOBJ_SZ 1024
#endif
