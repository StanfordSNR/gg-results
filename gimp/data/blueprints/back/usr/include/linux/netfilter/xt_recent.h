// GGHASH:VBZ9sWYD6HfP_zjQCbcMBdFL_TTn1AtVtGD0GPlMK.V800000422
#ifndef _LINUX_NETFILTER_XT_RECENT_H
#define _LINUX_NETFILTER_XT_RECENT_H 1
#include <linux/types.h>
#include <linux/netfilter.h>
#define XT_RECENT_MODIFIERS (XT_RECENT_TTL|XT_RECENT_REAP)
#define XT_RECENT_VALID_FLAGS (XT_RECENT_CHECK|XT_RECENT_SET|XT_RECENT_UPDATE| XT_RECENT_REMOVE|XT_RECENT_TTL|XT_RECENT_REAP)
#endif
