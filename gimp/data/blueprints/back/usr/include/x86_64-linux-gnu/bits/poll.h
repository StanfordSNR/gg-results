// GGHASH:VqhZ2eueKR0nb40CXXqAKwlmPO7.nOQudaxU9iaQjzQw0000081b
#ifndef _SYS_POLL_H
# error "Never use <bits/poll.h> directly; include <sys/poll.h> instead."
#endif
#define POLLIN 0x001
#define POLLPRI 0x002
#define POLLOUT 0x004
#if defined __USE_XOPEN || defined __USE_XOPEN2K8
#define POLLRDNORM 0x040
#define POLLRDBAND 0x080
#define POLLWRNORM 0x100
#define POLLWRBAND 0x200
#endif
#ifdef __USE_GNU
#define POLLMSG 0x400
#define POLLREMOVE 0x1000
#define POLLRDHUP 0x2000
#endif
#define POLLERR 0x008
#define POLLHUP 0x010
#define POLLNVAL 0x020
