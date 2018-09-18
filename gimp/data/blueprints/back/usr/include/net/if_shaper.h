// GGHASH:VVyQImo_yKwpHN9L4jK1tmUc4HbRUHToJJHEerudndTI00000658
#ifndef _NET_IF_SHAPER_H
#define _NET_IF_SHAPER_H 1
#include <sys/types.h>
#include <stdint.h>
#include <net/if.h>
#include <sys/ioctl.h>
#define SHAPER_QLEN 10
#define SHAPER_LATENCY (5 * HZ)
#define SHAPER_MAXSLIP 2
#define SHAPER_BURST (HZ / 50)
#define SHAPER_SET_DEV 0x0001
#define SHAPER_SET_SPEED 0x0002
#define SHAPER_GET_DEV 0x0003
#define SHAPER_GET_SPEED 0x0004
#define ss_speed ss_u.ssu_speed
#define ss_name ss_u.ssu_name
#endif
