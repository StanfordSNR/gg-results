// GGHASH:V.aNie59ljc3bYMADwZ5GGMHOBNCKy5YGWG2_OOTeFCg00000f62
#ifndef _RPC_RPC_H
#define _RPC_RPC_H 1
#include <rpc/types.h>
#include <netinet/in.h>
#include <rpc/xdr.h>
#include <rpc/auth.h>
#include <rpc/clnt.h>
#include <rpc/rpc_msg.h>
#include <rpc/auth_unix.h>
#include <rpc/auth_des.h>
#include <rpc/svc.h>
#include <rpc/svc_auth.h>
#include <rpc/netdb.h>
#define svc_fdset (*__rpc_thread_svc_fdset ())
#define get_rpc_createerr() (*__rpc_thread_createerr ())
#ifdef _RPC_MT_VARS
#define rpc_createerr (*__rpc_thread_createerr ())
#endif
#define svc_pollfd (*__rpc_thread_svc_pollfd ())
#define svc_max_pollfd (*__rpc_thread_svc_max_pollfd ())
#endif
