// GGHASH:VA1EGQsAhKO9mDbHpKYvQKGg2OiwG6DNT6O_AiWG858M0000264f
#ifndef _XTRANS_H_
#define _XTRANS_H_ 
#include <X11/Xfuncproto.h>
#include <X11/Xos.h>
#ifndef WIN32
#include <sys/socket.h>
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-function"
#endif
#ifdef X11_t
#define TRANS(func) _X11Trans ##func
#ifdef XTRANSDEBUG
#endif
#endif
#ifdef XSERV_t
#define TRANS(func) _XSERVTrans ##func
#ifdef XTRANSDEBUG
#endif
#define X11_t 
#endif
#ifdef XIM_t
#define TRANS(func) _XimXTrans ##func
#ifdef XTRANSDEBUG
#endif
#endif
#ifdef FS_t
#define TRANS(func) _FSTrans ##func
#ifdef XTRANSDEBUG
#endif
#endif
#ifdef FONT_t
#define TRANS(func) _FontTrans ##func
#ifdef XTRANSDEBUG
#endif
#endif
#ifdef ICE_t
#define TRANS(func) _IceTrans ##func
#ifdef XTRANSDEBUG
#endif
#endif
#ifdef TEST_t
#define TRANS(func) _TESTTrans ##func
#ifdef XTRANSDEBUG
#endif
#endif
#ifdef LBXPROXY_t
#define TRANS(func) _LBXPROXYTrans ##func
#define X11_t 
#ifdef XTRANSDEBUG
#endif
#endif
#if !defined(TRANS)
#define TRANS(func) _XTrans ##func
#ifdef XTRANSDEBUG
#endif
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#if defined(IPv6) && defined(AF_INET6)
#else
#define XTRANS_MAX_ADDR_LEN 128
#endif
#ifdef LONG64
#else
#endif
#if defined(WIN32) || defined(USG)
#else
#include <sys/uio.h>
#endif
#define TRANS_NONBLOCKING 1
#define TRANS_CLOSEONEXEC 2
#define TRANS_CONNECT_FAILED -1
#define TRANS_TRY_CONNECT_AGAIN -2
#define TRANS_IN_PROGRESS -3
#define TRANS_CREATE_LISTENER_FAILED -1
#define TRANS_ADDR_IN_USE -2
#define TRANS_ACCEPT_BAD_MALLOC -1
#define TRANS_ACCEPT_FAILED -2
#define TRANS_ACCEPT_MISC_ERROR -3
#define TRANS_RESET_NOOP 1
#define TRANS_RESET_NEW_FD 2
#define TRANS_RESET_FAILURE 3
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef X11_t
#endif
#ifdef ICE_t
#endif
#if defined(WIN32) && defined(TCPCONN)
#endif
#endif
