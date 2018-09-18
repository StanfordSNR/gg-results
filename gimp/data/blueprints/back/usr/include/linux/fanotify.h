// GGHASH:V8e2NaDe4EujIYSWpp3kmcRJWZNBLwcsNt3SWeAOkb0400000e58
#ifndef _LINUX_FANOTIFY_H
#define _LINUX_FANOTIFY_H 
#include <linux/types.h>
#define FAN_ACCESS 0x00000001
#define FAN_MODIFY 0x00000002
#define FAN_CLOSE_WRITE 0x00000008
#define FAN_CLOSE_NOWRITE 0x00000010
#define FAN_OPEN 0x00000020
#define FAN_Q_OVERFLOW 0x00004000
#define FAN_OPEN_PERM 0x00010000
#define FAN_ACCESS_PERM 0x00020000
#define FAN_ONDIR 0x40000000
#define FAN_EVENT_ON_CHILD 0x08000000
#define FAN_CLOSE (FAN_CLOSE_WRITE | FAN_CLOSE_NOWRITE)
#define FAN_CLOEXEC 0x00000001
#define FAN_NONBLOCK 0x00000002
#define FAN_CLASS_NOTIF 0x00000000
#define FAN_CLASS_CONTENT 0x00000004
#define FAN_CLASS_PRE_CONTENT 0x00000008
#define FAN_ALL_CLASS_BITS (FAN_CLASS_NOTIF | FAN_CLASS_CONTENT | FAN_CLASS_PRE_CONTENT)
#define FAN_UNLIMITED_QUEUE 0x00000010
#define FAN_UNLIMITED_MARKS 0x00000020
#define FAN_ENABLE_AUDIT 0x00000040
#define FAN_ALL_INIT_FLAGS (FAN_CLOEXEC | FAN_NONBLOCK | FAN_ALL_CLASS_BITS | FAN_UNLIMITED_QUEUE | FAN_UNLIMITED_MARKS)
#define FAN_MARK_ADD 0x00000001
#define FAN_MARK_REMOVE 0x00000002
#define FAN_MARK_DONT_FOLLOW 0x00000004
#define FAN_MARK_ONLYDIR 0x00000008
#define FAN_MARK_MOUNT 0x00000010
#define FAN_MARK_IGNORED_MASK 0x00000020
#define FAN_MARK_IGNORED_SURV_MODIFY 0x00000040
#define FAN_MARK_FLUSH 0x00000080
#define FAN_ALL_MARK_FLAGS (FAN_MARK_ADD | FAN_MARK_REMOVE | FAN_MARK_DONT_FOLLOW | FAN_MARK_ONLYDIR | FAN_MARK_MOUNT | FAN_MARK_IGNORED_MASK | FAN_MARK_IGNORED_SURV_MODIFY | FAN_MARK_FLUSH)
#define FAN_ALL_EVENTS (FAN_ACCESS | FAN_MODIFY | FAN_CLOSE | FAN_OPEN)
#define FAN_ALL_PERM_EVENTS (FAN_OPEN_PERM | FAN_ACCESS_PERM)
#define FAN_ALL_OUTGOING_EVENTS (FAN_ALL_EVENTS | FAN_ALL_PERM_EVENTS | FAN_Q_OVERFLOW)
#define FANOTIFY_METADATA_VERSION 3
#define FAN_ALLOW 0x01
#define FAN_DENY 0x02
#define FAN_AUDIT 0x10
#define FAN_NOFD -1
#define FAN_EVENT_METADATA_LEN (sizeof(struct fanotify_event_metadata))
#define FAN_EVENT_NEXT(meta,len) ((len) -= (meta)->event_len, (struct fanotify_event_metadata*)(((char *)(meta)) + (meta)->event_len))
#define FAN_EVENT_OK(meta,len) ((long)(len) >= (long)FAN_EVENT_METADATA_LEN && (long)(meta)->event_len >= (long)FAN_EVENT_METADATA_LEN && (long)(meta)->event_len <= (long)(len))
#endif