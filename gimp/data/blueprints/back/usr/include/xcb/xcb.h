// GGHASH:V.yJE4Zjcx.MAvXTwmP66NyDfEYVTD2GmlNJxJOIsJdQ000053d5
#ifndef __XCB_H__
#define __XCB_H__ 
#include <sys/types.h>
#if defined(__solaris__)
#include <inttypes.h>
#else
#include <stdint.h>
#endif
#ifndef _WIN32
#include <sys/uio.h>
#else
#include "xcb_windefs.h"
#endif
#include <pthread.h>
#ifdef __cplusplus
#endif
#define XCB_PACKED __attribute__((__packed__))
#define X_PROTOCOL 11
#define X_PROTOCOL_REVISION 0
#define X_TCP_PORT 6000
#define XCB_CONN_ERROR 1
#define XCB_CONN_CLOSED_EXT_NOTSUPPORTED 2
#define XCB_CONN_CLOSED_MEM_INSUFFICIENT 3
#define XCB_CONN_CLOSED_REQ_LEN_EXCEED 4
#define XCB_CONN_CLOSED_PARSE_ERR 5
#define XCB_CONN_CLOSED_INVALID_SCREEN 6
#define XCB_CONN_CLOSED_FDPASSING_FAILED 7
#define XCB_TYPE_PAD(T,I) (-(I) & (sizeof(T) > 4 ? 3 : sizeof(T) - 1))
#include "xproto.h"
#define XCB_NONE 0L
#define XCB_COPY_FROM_PARENT 0L
#define XCB_CURRENT_TIME 0L
#define XCB_NO_SYMBOL 0L
#ifdef __cplusplus
#endif
#endif
