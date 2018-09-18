// GGHASH:V2CDs8DnVYtbCkyW_DEg54s5tn5rYdzvSQ.ZWtcjEijg000012da
#ifndef _PROTOCOLS_TALKD_H
#define _PROTOCOLS_TALKD_H 1
#include <sys/types.h>
#include <sys/socket.h>
#include <stdint.h>
#include <bits/types/struct_osockaddr.h>
#define NAME_SIZE 12
#define TTY_SIZE 16
#define TALK_VERSION 1
#define LEAVE_INVITE 0
#define LOOK_UP 1
#define DELETE 2
#define ANNOUNCE 3
#define SUCCESS 0
#define NOT_HERE 1
#define FAILED 2
#define MACHINE_UNKNOWN 3
#define PERMISSION_DENIED 4
#define UNKNOWN_REQUEST 5
#define BADVERSION 6
#define BADADDR 7
#define BADCTLADDR 8
#define MAX_LIFE 60
#define RING_WAIT 30
#endif
