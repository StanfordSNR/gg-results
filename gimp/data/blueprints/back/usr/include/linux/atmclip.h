// GGHASH:V9pzWc2W0ZIVyFghWlnkAjUuQHbAsf75JXFdvYdpRzAk00000240
#ifndef LINUX_ATMCLIP_H
#define LINUX_ATMCLIP_H 
#include <linux/sockios.h>
#include <linux/atmioc.h>
#define RFC1483LLC_LEN 8
#define RFC1626_MTU 9180
#define CLIP_DEFAULT_IDLETIMER 1200
#define CLIP_CHECK_INTERVAL 10
#define SIOCMKCLIP _IO('a',ATMIOC_CLIP)
#endif
