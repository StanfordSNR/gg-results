// GGHASH:V4Wm2iElVVmJ4nZPMI_vsPmRPPZQtiq_KWPq6OFtd0fM00003e97
#ifndef _THREAD_DB_H
#define _THREAD_DB_H 1
#include <pthread.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/procfs.h>
#define TD_THR_ANY_USER_FLAGS 0xffffffff
#define TD_THR_LOWEST_PRIORITY -20
#define TD_SIGNO_MASK NULL
#define TD_EVENTSIZE 2
#define BT_UISHIFT 5
#define BT_NBIPUI (1 << BT_UISHIFT)
#define BT_UIMASK (BT_NBIPUI - 1)
#define __td_eventmask(n) (UINT32_C (1) << (((n) - 1) & BT_UIMASK))
#define __td_eventword(n) ((UINT32_C ((n) - 1)) >> BT_UISHIFT)
#define td_event_emptyset(setp) do { int __i; for (__i = TD_EVENTSIZE; __i > 0; --__i) (setp)->event_bits[__i - 1] = 0; } while (0)
#define td_event_fillset(setp) do { int __i; for (__i = TD_EVENTSIZE; __i > 0; --__i) (setp)->event_bits[__i - 1] = UINT32_C (0xffffffff); } while (0)
#define td_event_addset(setp,n) (((setp)->event_bits[__td_eventword (n)]) |= __td_eventmask (n))
#define td_event_delset(setp,n) (((setp)->event_bits[__td_eventword (n)]) &= ~__td_eventmask (n))
#define td_eventismember(setp,n) (__td_eventmask (n) & ((setp)->event_bits[__td_eventword (n)]))
#if TD_EVENTSIZE == 2
#define td_eventisempty(setp) (!((setp)->event_bits[0]) && !((setp)->event_bits[1]))
#else
# error "td_eventisempty must be changed to match TD_EVENTSIZE"
#endif
# if 0
#endif
#endif
