// GGHASH:VIogMyjVvOah1VrlVNUZePeZBLBtI.a1z9DguYgTw64000000f04
#ifndef _PROTOCOLS_ROUTED_H
#define _PROTOCOLS_ROUTED_H 1
#include <sys/socket.h>
#define RIPVERSION 1
#define rip_nets ripun.ru_nets
#define rip_tracefile ripun.ru_tracefile
#define RIPCMD_REQUEST 1
#define RIPCMD_RESPONSE 2
#define RIPCMD_TRACEON 3
#define RIPCMD_TRACEOFF 4
#define RIPCMD_MAX 5
#ifdef RIPCMDS
#endif
#define HOPCNT_INFINITY 16
#define MAXPACKETSIZE 512
#define TIMER_RATE 30
#define SUPPLY_INTERVAL 30
#define MIN_WAITTIME 2
#define MAX_WAITTIME 5
#define EXPIRE_TIME 180
#define GARBAGE_TIME 240
#endif
