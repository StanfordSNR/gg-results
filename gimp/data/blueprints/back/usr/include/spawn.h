// GGHASH:VfIFKlCncLdM4cH6vajh05oqi_E9nNGyWXLoCJUO_i3800001a22
#ifndef _SPAWN_H
#define _SPAWN_H 1
#include <features.h>
#include <sched.h>
#include <sys/types.h>
#include <bits/types/sigset_t.h>
#define POSIX_SPAWN_RESETIDS 0x01
#define POSIX_SPAWN_SETPGROUP 0x02
#define POSIX_SPAWN_SETSIGDEF 0x04
#define POSIX_SPAWN_SETSIGMASK 0x08
#define POSIX_SPAWN_SETSCHEDPARAM 0x10
#define POSIX_SPAWN_SETSCHEDULER 0x20
#ifdef __USE_GNU
#define POSIX_SPAWN_USEVFORK 0x40
#define POSIX_SPAWN_SETSID 0x80
#endif
#endif
