// GGHASH:V7pHWEKz6AsWfKj8J9ZoVdixzVIQHbFM8V2u_i2cyPyo00003ede
#ifndef __CURL_MULTI_H
#define __CURL_MULTI_H 
#include "curl.h"
#ifdef __cplusplus
#endif
#if defined(BUILDING_LIBCURL) || defined(CURL_STRICTER)
#else
#endif
#define CURLM_CALL_MULTI_SOCKET CURLM_CALL_MULTI_PERFORM
#define CURLPIPE_NOTHING 0L
#define CURLPIPE_HTTP1 1L
#define CURLPIPE_MULTIPLEX 2L
#define CURL_WAIT_POLLIN 0x0001
#define CURL_WAIT_POLLPRI 0x0002
#define CURL_WAIT_POLLOUT 0x0004
#define CURL_POLL_NONE 0
#define CURL_POLL_IN 1
#define CURL_POLL_OUT 2
#define CURL_POLL_INOUT 3
#define CURL_POLL_REMOVE 4
#define CURL_SOCKET_TIMEOUT CURL_SOCKET_BAD
#define CURL_CSELECT_IN 0x01
#define CURL_CSELECT_OUT 0x02
#define CURL_CSELECT_ERR 0x04
#ifndef CURL_ALLOW_OLD_MULTI_SOCKET
#define curl_multi_socket(x,y,z) curl_multi_socket_action(x,y,0,z)
#endif
#undef CINIT
#ifdef CURL_ISOCPP
#define CINIT(name,type,num) CURLMOPT_ ## name = CURLOPTTYPE_ ## type + num
#else
#define LONG CURLOPTTYPE_LONG
#define OBJECTPOINT CURLOPTTYPE_OBJECTPOINT
#define FUNCTIONPOINT CURLOPTTYPE_FUNCTIONPOINT
#define OFF_T CURLOPTTYPE_OFF_T
#define CINIT(name,type,number) CURLMOPT_ name = type + number
#endif
#define CURL_PUSH_OK 0
#define CURL_PUSH_DENY 1
#ifdef __cplusplus
#endif
#endif
