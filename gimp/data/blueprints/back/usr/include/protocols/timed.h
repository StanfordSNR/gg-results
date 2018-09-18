// GGHASH:VnPe3gy4lu7AAx.3RilX8IhuDxv_QZP3eJ.i.GkUF.Uc00000f29
#ifndef _PROTOCOLS_TIMED_H
#define _PROTOCOLS_TIMED_H 1
#include <sys/types.h>
#include <sys/time.h>
#define TSPVERSION 1
#define ANYADDR NULL
#define MAXHOSTNAMELEN 64
#define tsp_time tsp_u.tspu_time
#define tsp_hopcnt tsp_u.tspu_hopcnt
#define TSP_ANY 0
#define TSP_ADJTIME 1
#define TSP_ACK 2
#define TSP_MASTERREQ 3
#define TSP_MASTERACK 4
#define TSP_SETTIME 5
#define TSP_MASTERUP 6
#define TSP_SLAVEUP 7
#define TSP_ELECTION 8
#define TSP_ACCEPT 9
#define TSP_REFUSE 10
#define TSP_CONFLICT 11
#define TSP_RESOLVE 12
#define TSP_QUIT 13
#define TSP_DATE 14
#define TSP_DATEREQ 15
#define TSP_DATEACK 16
#define TSP_TRACEON 17
#define TSP_TRACEOFF 18
#define TSP_MSITE 19
#define TSP_MSITEREQ 20
#define TSP_TEST 21
#define TSP_SETDATE 22
#define TSP_SETDATEREQ 23
#define TSP_LOOP 24
#define TSPTYPENUMBER 25
#ifdef TSPTYPES
#endif
#endif
