// GGHASH:V.EjeYWLPIEss5MKeovlLhyBLZwfuAMaLsmNLQidD2n000007f48
#ifndef _SCTP_H
#define _SCTP_H 
#include <linux/types.h>
#include <linux/socket.h>
#define SCTP_RTOINFO 0
#define SCTP_ASSOCINFO 1
#define SCTP_INITMSG 2
#define SCTP_NODELAY 3
#define SCTP_AUTOCLOSE 4
#define SCTP_SET_PEER_PRIMARY_ADDR 5
#define SCTP_PRIMARY_ADDR 6
#define SCTP_ADAPTATION_LAYER 7
#define SCTP_DISABLE_FRAGMENTS 8
#define SCTP_PEER_ADDR_PARAMS 9
#define SCTP_DEFAULT_SEND_PARAM 10
#define SCTP_EVENTS 11
#define SCTP_I_WANT_MAPPED_V4_ADDR 12
#define SCTP_MAXSEG 13
#define SCTP_STATUS 14
#define SCTP_GET_PEER_ADDR_INFO 15
#define SCTP_DELAYED_ACK_TIME 16
#define SCTP_DELAYED_ACK SCTP_DELAYED_ACK_TIME
#define SCTP_DELAYED_SACK SCTP_DELAYED_ACK_TIME
#define SCTP_CONTEXT 17
#define SCTP_FRAGMENT_INTERLEAVE 18
#define SCTP_PARTIAL_DELIVERY_POINT 19
#define SCTP_MAX_BURST 20
#define SCTP_AUTH_CHUNK 21
#define SCTP_HMAC_IDENT 22
#define SCTP_AUTH_KEY 23
#define SCTP_AUTH_ACTIVE_KEY 24
#define SCTP_AUTH_DELETE_KEY 25
#define SCTP_PEER_AUTH_CHUNKS 26
#define SCTP_LOCAL_AUTH_CHUNKS 27
#define SCTP_GET_ASSOC_NUMBER 28
#define SCTP_GET_ASSOC_ID_LIST 29
#define SCTP_AUTO_ASCONF 30
#define SCTP_PEER_ADDR_THLDS 31
#define SCTP_RECVRCVINFO 32
#define SCTP_RECVNXTINFO 33
#define SCTP_DEFAULT_SNDINFO 34
#define SCTP_SOCKOPT_BINDX_ADD 100
#define SCTP_SOCKOPT_BINDX_REM 101
#define SCTP_SOCKOPT_PEELOFF 102
#define SCTP_SOCKOPT_CONNECTX_OLD 107
#define SCTP_GET_PEER_ADDRS 108
#define SCTP_GET_LOCAL_ADDRS 109
#define SCTP_SOCKOPT_CONNECTX 110
#define SCTP_SOCKOPT_CONNECTX3 111
#define SCTP_GET_ASSOC_STATS 112
#define SCTP_PR_SUPPORTED 113
#define SCTP_DEFAULT_PRINFO 114
#define SCTP_PR_ASSOC_STATUS 115
#define SCTP_PR_STREAM_STATUS 116
#define SCTP_RECONFIG_SUPPORTED 117
#define SCTP_ENABLE_STREAM_RESET 118
#define SCTP_RESET_STREAMS 119
#define SCTP_RESET_ASSOC 120
#define SCTP_ADD_STREAMS 121
#define SCTP_SOCKOPT_PEELOFF_FLAGS 122
#define SCTP_STREAM_SCHEDULER 123
#define SCTP_STREAM_SCHEDULER_VALUE 124
#define SCTP_PR_SCTP_NONE 0x0000
#define SCTP_PR_SCTP_TTL 0x0010
#define SCTP_PR_SCTP_RTX 0x0020
#define SCTP_PR_SCTP_PRIO 0x0030
#define SCTP_PR_SCTP_MAX SCTP_PR_SCTP_PRIO
#define SCTP_PR_SCTP_MASK 0x0030
#define __SCTP_PR_INDEX(x) ((x >> 4) - 1)
#define SCTP_PR_INDEX(x) __SCTP_PR_INDEX(SCTP_PR_SCTP_ ## x)
#define SCTP_PR_POLICY(x) ((x) & SCTP_PR_SCTP_MASK)
#define SCTP_PR_SET_POLICY(flags,x) do { flags &= ~SCTP_PR_SCTP_MASK; flags |= x; } while (0)
#define SCTP_PR_TTL_ENABLED(x) (SCTP_PR_POLICY(x) == SCTP_PR_SCTP_TTL)
#define SCTP_PR_RTX_ENABLED(x) (SCTP_PR_POLICY(x) == SCTP_PR_SCTP_RTX)
#define SCTP_PR_PRIO_ENABLED(x) (SCTP_PR_POLICY(x) == SCTP_PR_SCTP_PRIO)
#define SCTP_ENABLE_RESET_STREAM_REQ 0x01
#define SCTP_ENABLE_RESET_ASSOC_REQ 0x02
#define SCTP_ENABLE_CHANGE_ASSOC_REQ 0x04
#define SCTP_ENABLE_STRRESET_MASK 0x07
#define SCTP_STREAM_RESET_INCOMING 0x01
#define SCTP_STREAM_RESET_OUTGOING 0x02
#define MSG_NOTIFICATION MSG_NOTIFICATION
#define SCTP_INIT SCTP_INIT
#define SCTP_SNDRCV SCTP_SNDRCV
#define SCTP_SNDINFO SCTP_SNDINFO
#define SCTP_RCVINFO SCTP_RCVINFO
#define SCTP_NXTINFO SCTP_NXTINFO
#define SCTP_STREAM_RESET_INCOMING_SSN 0x0001
#define SCTP_STREAM_RESET_OUTGOING_SSN 0x0002
#define SCTP_STREAM_RESET_DENIED 0x0004
#define SCTP_STREAM_RESET_FAILED 0x0008
#define SCTP_ASSOC_RESET_DENIED 0x0004
#define SCTP_ASSOC_RESET_FAILED 0x0008
#define SCTP_ASSOC_CHANGE_DENIED 0x0004
#define SCTP_ASSOC_CHANGE_FAILED 0x0008
#define SCTP_ASSOC_CHANGE SCTP_ASSOC_CHANGE
#define SCTP_PEER_ADDR_CHANGE SCTP_PEER_ADDR_CHANGE
#define SCTP_SEND_FAILED SCTP_SEND_FAILED
#define SCTP_REMOTE_ERROR SCTP_REMOTE_ERROR
#define SCTP_SHUTDOWN_EVENT SCTP_SHUTDOWN_EVENT
#define SCTP_PARTIAL_DELIVERY_EVENT SCTP_PARTIAL_DELIVERY_EVENT
#define SCTP_ADAPTATION_INDICATION SCTP_ADAPTATION_INDICATION
#define SCTP_AUTHENTICATION_INDICATION SCTP_AUTHENTICATION_EVENT
#define SCTP_SENDER_DRY_EVENT SCTP_SENDER_DRY_EVENT
#define SCTP_STREAM_RESET_EVENT SCTP_STREAM_RESET_EVENT
#define SCTP_ASSOC_RESET_EVENT SCTP_ASSOC_RESET_EVENT
#define SCTP_STREAM_CHANGE_EVENT SCTP_STREAM_CHANGE_EVENT
#define sctp_setprim sctp_prim
#define shmac_number_of_idents shmac_num_idents
#define guth_number_of_chunks gauth_number_of_chunks
#define SCTP_BINDX_ADD_ADDR 0x01
#define SCTP_BINDX_REM_ADDR 0x02
#endif
