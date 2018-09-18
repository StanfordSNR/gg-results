// GGHASH:Vwxe8og5zgbyWxPSkC9doD5QP1OSA3pQkUZyHVK3cIhQ000030f3
#ifndef _RPC_CLNT_H
#define _RPC_CLNT_H 1
#include <features.h>
#include <sys/types.h>
#include <rpc/types.h>
#include <rpc/auth.h>
#include <sys/un.h>
#define RPC_PMAPFAILURE RPC_RPCBFAILURE
#define re_errno ru.RE_errno
#define re_why ru.RE_why
#define re_vers ru.RE_vers
#define re_lb ru.RE_lb
#define CLNT_CALL(rh,proc,xargs,argsp,xres,resp,secs) ((*(rh)->cl_ops->cl_call)(rh, proc, xargs, argsp, xres, resp, secs))
#define clnt_call(rh,proc,xargs,argsp,xres,resp,secs) ((*(rh)->cl_ops->cl_call)(rh, proc, xargs, argsp, xres, resp, secs))
#define CLNT_ABORT(rh) ((*(rh)->cl_ops->cl_abort)(rh))
#define clnt_abort(rh) ((*(rh)->cl_ops->cl_abort)(rh))
#define CLNT_GETERR(rh,errp) ((*(rh)->cl_ops->cl_geterr)(rh, errp))
#define clnt_geterr(rh,errp) ((*(rh)->cl_ops->cl_geterr)(rh, errp))
#define CLNT_FREERES(rh,xres,resp) ((*(rh)->cl_ops->cl_freeres)(rh,xres,resp))
#define clnt_freeres(rh,xres,resp) ((*(rh)->cl_ops->cl_freeres)(rh,xres,resp))
#define CLNT_CONTROL(cl,rq,in) ((*(cl)->cl_ops->cl_control)(cl,rq,in))
#define clnt_control(cl,rq,in) ((*(cl)->cl_ops->cl_control)(cl,rq,in))
#define CLSET_TIMEOUT 1
#define CLGET_TIMEOUT 2
#define CLGET_SERVER_ADDR 3
#define CLGET_FD 6
#define CLGET_SVC_ADDR 7
#define CLSET_FD_CLOSE 8
#define CLSET_FD_NCLOSE 9
#define CLGET_XID 10
#define CLSET_XID 11
#define CLGET_VERS 12
#define CLSET_VERS 13
#define CLGET_PROG 14
#define CLSET_PROG 15
#define CLSET_SVC_ADDR 16
#define CLSET_PUSH_TIMOD 17
#define CLSET_POP_TIMOD 18
#define CLSET_RETRY_TIMEOUT 4
#define CLGET_RETRY_TIMEOUT 5
#define CLNT_DESTROY(rh) ((*(rh)->cl_ops->cl_destroy)(rh))
#define clnt_destroy(rh) ((*(rh)->cl_ops->cl_destroy)(rh))
#define RPCTEST_PROGRAM ((u_long)1)
#define RPCTEST_VERSION ((u_long)1)
#define RPCTEST_NULL_PROC ((u_long)2)
#define RPCTEST_NULL_BATCH_PROC ((u_long)3)
#define NULLPROC ((u_long)0)
#define UDPMSGSIZE 8800
#define RPCSMALLMSGSIZE 400
#endif
