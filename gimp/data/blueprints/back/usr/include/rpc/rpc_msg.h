// GGHASH:VDR45nbvuouImKC9LDaZpUquIoqPTY4xm3r8psoJqUhY00001291
#ifndef _RPC_MSG_H
#define _RPC_MSG_H 1
#include <sys/cdefs.h>
#include <rpc/xdr.h>
#include <rpc/clnt.h>
#define RPC_MSG_VERSION ((u_long) 2)
#define RPC_SERVICE_PORT ((u_short) 2048)
#define ar_results ru.AR_results
#define ar_vers ru.AR_versions
#define rj_vers ru.RJ_versions
#define rj_why ru.RJ_why
#define rp_acpt ru.RP_ar
#define rp_rjct ru.RP_dr
#define rm_call ru.RM_cmb
#define rm_reply ru.RM_rmb
#define acpted_rply ru.RM_rmb.ru.RP_ar
#define rjcted_rply ru.RM_rmb.ru.RP_dr
#endif
