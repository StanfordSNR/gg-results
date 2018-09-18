// GGHASH:VLaHYeTuDZQQgeD_lwvrpFFlkCvDkVfEkHuy4rBWMNlk00002d04
#ifndef _RPC_SVC_H
#define _RPC_SVC_H 1
#include <features.h>
#include <rpc/rpc_msg.h>
#define svc_getcaller(x) (&(x)->xp_raddr)
#define SVC_RECV(xprt,msg) (*(xprt)->xp_ops->xp_recv)((xprt), (msg))
#define svc_recv(xprt,msg) (*(xprt)->xp_ops->xp_recv)((xprt), (msg))
#define SVC_STAT(xprt) (*(xprt)->xp_ops->xp_stat)(xprt)
#define svc_stat(xprt) (*(xprt)->xp_ops->xp_stat)(xprt)
#define SVC_GETARGS(xprt,xargs,argsp) (*(xprt)->xp_ops->xp_getargs)((xprt), (xargs), (argsp))
#define svc_getargs(xprt,xargs,argsp) (*(xprt)->xp_ops->xp_getargs)((xprt), (xargs), (argsp))
#define SVC_REPLY(xprt,msg) (*(xprt)->xp_ops->xp_reply) ((xprt), (msg))
#define svc_reply(xprt,msg) (*(xprt)->xp_ops->xp_reply) ((xprt), (msg))
#define SVC_FREEARGS(xprt,xargs,argsp) (*(xprt)->xp_ops->xp_freeargs)((xprt), (xargs), (argsp))
#define svc_freeargs(xprt,xargs,argsp) (*(xprt)->xp_ops->xp_freeargs)((xprt), (xargs), (argsp))
#define SVC_DESTROY(xprt) (*(xprt)->xp_ops->xp_destroy)(xprt)
#define svc_destroy(xprt) (*(xprt)->xp_ops->xp_destroy)(xprt)
#ifndef __DISPATCH_FN_T
#define __DISPATCH_FN_T 
#endif
#define svc_fds svc_fdset.fds_bits[0]
#define RPC_ANYSOCK -1
#endif
