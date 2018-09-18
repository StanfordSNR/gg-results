// GGHASH:VeoMievFlW1MDyvZ_L0ZfNiy70c3WD712HbZotmR2zys00018e81
#ifndef __CURL_CURL_H
#define __CURL_CURL_H 
#ifdef CURL_NO_OLDIES
#define CURL_STRICTER 
#endif
#include "curlver.h"
#include "system.h"
#if (defined(_WIN32) || defined(__WIN32__)) && !defined(WIN32) && !defined(__SYMBIAN32__)
#define WIN32 
#endif
#include <stdio.h>
#include <limits.h>
#if defined(__FreeBSD__) && (__FreeBSD__ >= 2)
#include <osreldate.h>
#endif
#include <sys/types.h>
#include <time.h>
#if defined(WIN32) && !defined(_WIN32_WCE) && !defined(__CYGWIN__)
#if !(defined(_WINSOCKAPI_) || defined(_WINSOCK_H) || defined(__LWIP_OPT_H__) || defined(LWIP_HDR_OPT_H))
#include <winsock2.h>
#include <ws2tcpip.h>
#endif
#endif
#if defined(_AIX) || defined(__NOVELL_LIBC__) || defined(__NetBSD__) || defined(__minix) || defined(__SYMBIAN32__) || defined(__INTEGRITY) || defined(ANDROID) || defined(__ANDROID__) || defined(__OpenBSD__) || defined(__CYGWIN__) || (defined(__FreeBSD_version) && (__FreeBSD_version < 800000))
#include <sys/select.h>
#endif
#if !defined(WIN32) && !defined(_WIN32_WCE)
#include <sys/socket.h>
#endif
#if !defined(WIN32) && !defined(__WATCOMC__) && !defined(__VXWORKS__)
#include <sys/time.h>
#endif
#ifdef __BEOS__
#include <support/SupportDefs.h>
#endif
#ifdef __cplusplus
#endif
#if defined(BUILDING_LIBCURL) || defined(CURL_STRICTER)
#else
#endif
#ifdef CURL_STATICLIB
#define CURL_EXTERN 
#elif defined(WIN32) || defined(_WIN32) || defined(__SYMBIAN32__)
# if defined(BUILDING_LIBCURL)
#define CURL_EXTERN __declspec(dllexport)
# else
#define CURL_EXTERN __declspec(dllimport)
# endif
#elif defined(BUILDING_LIBCURL) && defined(CURL_HIDDEN_SYMBOLS)
#define CURL_EXTERN CURL_EXTERN_SYMBOL
#else
#define CURL_EXTERN 
#endif
#ifndef curl_socket_typedef
#if defined(WIN32) && !defined(__LWIP_OPT_H__) && !defined(LWIP_HDR_OPT_H)
#define CURL_SOCKET_BAD INVALID_SOCKET
#else
#define CURL_SOCKET_BAD -1
#endif
#define curl_socket_typedef 
#endif
#define CURLSSLBACKEND_LIBRESSL CURLSSLBACKEND_OPENSSL
#define CURLSSLBACKEND_BORINGSSL CURLSSLBACKEND_OPENSSL
#define CURLSSLBACKEND_CYASSL CURLSSLBACKEND_WOLFSSL
#define CURL_HTTPPOST_FILENAME (1<<0)
#define CURL_HTTPPOST_READFILE (1<<1)
#define CURL_HTTPPOST_PTRNAME (1<<2)
#define CURL_HTTPPOST_PTRCONTENTS (1<<3)
#define CURL_HTTPPOST_BUFFER (1<<4)
#define CURL_HTTPPOST_PTRBUFFER (1<<5)
#define CURL_HTTPPOST_CALLBACK (1<<6)
#define CURL_HTTPPOST_LARGE (1<<7)
#ifndef CURL_MAX_READ_SIZE
#define CURL_MAX_READ_SIZE 524288
#endif
#ifndef CURL_MAX_WRITE_SIZE
#define CURL_MAX_WRITE_SIZE 16384
#endif
#ifndef CURL_MAX_HTTP_HEADER
#define CURL_MAX_HTTP_HEADER (100*1024)
#endif
#define CURL_WRITEFUNC_PAUSE 0x10000001
#define CURLFINFOFLAG_KNOWN_FILENAME (1<<0)
#define CURLFINFOFLAG_KNOWN_FILETYPE (1<<1)
#define CURLFINFOFLAG_KNOWN_TIME (1<<2)
#define CURLFINFOFLAG_KNOWN_PERM (1<<3)
#define CURLFINFOFLAG_KNOWN_UID (1<<4)
#define CURLFINFOFLAG_KNOWN_GID (1<<5)
#define CURLFINFOFLAG_KNOWN_SIZE (1<<6)
#define CURLFINFOFLAG_KNOWN_HLINKCOUNT (1<<7)
#define CURL_CHUNK_BGN_FUNC_OK 0
#define CURL_CHUNK_BGN_FUNC_FAIL 1
#define CURL_CHUNK_BGN_FUNC_SKIP 2
#define CURL_CHUNK_END_FUNC_OK 0
#define CURL_CHUNK_END_FUNC_FAIL 1
#define CURL_FNMATCHFUNC_MATCH 0
#define CURL_FNMATCHFUNC_NOMATCH 1
#define CURL_FNMATCHFUNC_FAIL 2
#define CURL_SEEKFUNC_OK 0
#define CURL_SEEKFUNC_FAIL 1
#define CURL_SEEKFUNC_CANTSEEK 2
#define CURL_READFUNC_ABORT 0x10000000
#define CURL_READFUNC_PAUSE 0x10000001
#define CURL_SOCKOPT_OK 0
#define CURL_SOCKOPT_ERROR 1
#define CURL_SOCKOPT_ALREADY_CONNECTED 2
#ifndef CURL_DID_MEMORY_FUNC_TYPEDEFS
#define CURL_DID_MEMORY_FUNC_TYPEDEFS 
#endif
#ifndef CURL_NO_OLDIES
#define CURLE_OBSOLETE16 CURLE_HTTP2
#define CURLE_OBSOLETE10 CURLE_FTP_ACCEPT_FAILED
#define CURLE_OBSOLETE12 CURLE_FTP_ACCEPT_TIMEOUT
#define CURLOPT_ENCODING CURLOPT_ACCEPT_ENCODING
#define CURLE_FTP_WEIRD_SERVER_REPLY CURLE_WEIRD_SERVER_REPLY
#define CURLE_UNKNOWN_TELNET_OPTION CURLE_UNKNOWN_OPTION
#define CURLE_SSL_PEER_CERTIFICATE CURLE_PEER_FAILED_VERIFICATION
#define CURLE_OBSOLETE CURLE_OBSOLETE50
#define CURLE_BAD_PASSWORD_ENTERED CURLE_OBSOLETE46
#define CURLE_BAD_CALLING_ORDER CURLE_OBSOLETE44
#define CURLE_FTP_USER_PASSWORD_INCORRECT CURLE_OBSOLETE10
#define CURLE_FTP_CANT_RECONNECT CURLE_OBSOLETE16
#define CURLE_FTP_COULDNT_GET_SIZE CURLE_OBSOLETE32
#define CURLE_FTP_COULDNT_SET_ASCII CURLE_OBSOLETE29
#define CURLE_FTP_WEIRD_USER_REPLY CURLE_OBSOLETE12
#define CURLE_FTP_WRITE_ERROR CURLE_OBSOLETE20
#define CURLE_LIBRARY_NOT_FOUND CURLE_OBSOLETE40
#define CURLE_MALFORMAT_USER CURLE_OBSOLETE24
#define CURLE_SHARE_IN_USE CURLE_OBSOLETE57
#define CURLE_URL_MALFORMAT_USER CURLE_NOT_BUILT_IN
#define CURLE_FTP_ACCESS_DENIED CURLE_REMOTE_ACCESS_DENIED
#define CURLE_FTP_COULDNT_SET_BINARY CURLE_FTP_COULDNT_SET_TYPE
#define CURLE_FTP_QUOTE_ERROR CURLE_QUOTE_ERROR
#define CURLE_TFTP_DISKFULL CURLE_REMOTE_DISK_FULL
#define CURLE_TFTP_EXISTS CURLE_REMOTE_FILE_EXISTS
#define CURLE_HTTP_RANGE_ERROR CURLE_RANGE_ERROR
#define CURLE_FTP_SSL_FAILED CURLE_USE_SSL_FAILED
#define CURLE_OPERATION_TIMEOUTED CURLE_OPERATION_TIMEDOUT
#define CURLE_HTTP_NOT_FOUND CURLE_HTTP_RETURNED_ERROR
#define CURLE_HTTP_PORT_FAILED CURLE_INTERFACE_FAILED
#define CURLE_FTP_COULDNT_STOR_FILE CURLE_UPLOAD_FAILED
#define CURLE_FTP_PARTIAL_FILE CURLE_PARTIAL_FILE
#define CURLE_FTP_BAD_DOWNLOAD_RESUME CURLE_BAD_DOWNLOAD_RESUME
#define CURLE_ALREADY_COMPLETE 99999
#define CURLOPT_FILE CURLOPT_WRITEDATA
#define CURLOPT_INFILE CURLOPT_READDATA
#define CURLOPT_WRITEHEADER CURLOPT_HEADERDATA
#define CURLOPT_WRITEINFO CURLOPT_OBSOLETE40
#define CURLOPT_CLOSEPOLICY CURLOPT_OBSOLETE72
#endif
#define CURLAUTH_NONE ((unsigned long)0)
#define CURLAUTH_BASIC (((unsigned long)1)<<0)
#define CURLAUTH_DIGEST (((unsigned long)1)<<1)
#define CURLAUTH_NEGOTIATE (((unsigned long)1)<<2)
#define CURLAUTH_GSSNEGOTIATE CURLAUTH_NEGOTIATE
#define CURLAUTH_GSSAPI CURLAUTH_NEGOTIATE
#define CURLAUTH_NTLM (((unsigned long)1)<<3)
#define CURLAUTH_DIGEST_IE (((unsigned long)1)<<4)
#define CURLAUTH_NTLM_WB (((unsigned long)1)<<5)
#define CURLAUTH_ONLY (((unsigned long)1)<<31)
#define CURLAUTH_ANY (~CURLAUTH_DIGEST_IE)
#define CURLAUTH_ANYSAFE (~(CURLAUTH_BASIC|CURLAUTH_DIGEST_IE))
#define CURLSSH_AUTH_ANY ~0
#define CURLSSH_AUTH_NONE 0
#define CURLSSH_AUTH_PUBLICKEY (1<<0)
#define CURLSSH_AUTH_PASSWORD (1<<1)
#define CURLSSH_AUTH_HOST (1<<2)
#define CURLSSH_AUTH_KEYBOARD (1<<3)
#define CURLSSH_AUTH_AGENT (1<<4)
#define CURLSSH_AUTH_GSSAPI (1<<5)
#define CURLSSH_AUTH_DEFAULT CURLSSH_AUTH_ANY
#define CURLGSSAPI_DELEGATION_NONE 0
#define CURLGSSAPI_DELEGATION_POLICY_FLAG (1<<0)
#define CURLGSSAPI_DELEGATION_FLAG (1<<1)
#define CURL_ERROR_SIZE 256
#define CURLSSLOPT_ALLOW_BEAST (1<<0)
#define CURLSSLOPT_NO_REVOKE (1<<1)
#ifndef CURL_NO_OLDIES
#define CURLFTPSSL_NONE CURLUSESSL_NONE
#define CURLFTPSSL_TRY CURLUSESSL_TRY
#define CURLFTPSSL_CONTROL CURLUSESSL_CONTROL
#define CURLFTPSSL_ALL CURLUSESSL_ALL
#define CURLFTPSSL_LAST CURLUSESSL_LAST
#define curl_ftpssl curl_usessl
#endif
#define CURLHEADER_UNIFIED 0
#define CURLHEADER_SEPARATE (1<<0)
#define CURLPROTO_HTTP (1<<0)
#define CURLPROTO_HTTPS (1<<1)
#define CURLPROTO_FTP (1<<2)
#define CURLPROTO_FTPS (1<<3)
#define CURLPROTO_SCP (1<<4)
#define CURLPROTO_SFTP (1<<5)
#define CURLPROTO_TELNET (1<<6)
#define CURLPROTO_LDAP (1<<7)
#define CURLPROTO_LDAPS (1<<8)
#define CURLPROTO_DICT (1<<9)
#define CURLPROTO_FILE (1<<10)
#define CURLPROTO_TFTP (1<<11)
#define CURLPROTO_IMAP (1<<12)
#define CURLPROTO_IMAPS (1<<13)
#define CURLPROTO_POP3 (1<<14)
#define CURLPROTO_POP3S (1<<15)
#define CURLPROTO_SMTP (1<<16)
#define CURLPROTO_SMTPS (1<<17)
#define CURLPROTO_RTSP (1<<18)
#define CURLPROTO_RTMP (1<<19)
#define CURLPROTO_RTMPT (1<<20)
#define CURLPROTO_RTMPE (1<<21)
#define CURLPROTO_RTMPTE (1<<22)
#define CURLPROTO_RTMPS (1<<23)
#define CURLPROTO_RTMPTS (1<<24)
#define CURLPROTO_GOPHER (1<<25)
#define CURLPROTO_SMB (1<<26)
#define CURLPROTO_SMBS (1<<27)
#define CURLPROTO_ALL (~0)
#define CURLOPTTYPE_LONG 0
#define CURLOPTTYPE_OBJECTPOINT 10000
#define CURLOPTTYPE_STRINGPOINT 10000
#define CURLOPTTYPE_FUNCTIONPOINT 20000
#define CURLOPTTYPE_OFF_T 30000
#ifdef CINIT
#undef CINIT
#endif
#ifdef CURL_ISOCPP
#define CINIT(na,t,nu) CURLOPT_ ## na = CURLOPTTYPE_ ## t + nu
#else
#define LONG CURLOPTTYPE_LONG
#define OBJECTPOINT CURLOPTTYPE_OBJECTPOINT
#define STRINGPOINT CURLOPTTYPE_OBJECTPOINT
#define FUNCTIONPOINT CURLOPTTYPE_FUNCTIONPOINT
#define OFF_T CURLOPTTYPE_OFF_T
#define CINIT(name,type,number) CURLOPT_ name = type + number
#endif
#define CURLOPT_XFERINFODATA CURLOPT_PROGRESSDATA
#define CURLOPT_SERVER_RESPONSE_TIMEOUT CURLOPT_FTP_RESPONSE_TIMEOUT
#ifndef CURL_NO_OLDIES
#define CURLOPT_POST301 CURLOPT_POSTREDIR
#define CURLOPT_SSLKEYPASSWD CURLOPT_KEYPASSWD
#define CURLOPT_FTPAPPEND CURLOPT_APPEND
#define CURLOPT_FTPLISTONLY CURLOPT_DIRLISTONLY
#define CURLOPT_FTP_SSL CURLOPT_USE_SSL
#define CURLOPT_SSLCERTPASSWD CURLOPT_KEYPASSWD
#define CURLOPT_KRB4LEVEL CURLOPT_KRBLEVEL
#else
#undef CURLOPT_DNS_USE_GLOBAL_CACHE
#endif
#define CURL_IPRESOLVE_WHATEVER 0
#define CURL_IPRESOLVE_V4 1
#define CURL_IPRESOLVE_V6 2
#define CURLOPT_RTSPHEADER CURLOPT_HTTPHEADER
#define CURL_HTTP_VERSION_2 CURL_HTTP_VERSION_2_0
#define CURL_REDIR_GET_ALL 0
#define CURL_REDIR_POST_301 1
#define CURL_REDIR_POST_302 2
#define CURL_REDIR_POST_303 4
#define CURL_REDIR_POST_ALL (CURL_REDIR_POST_301|CURL_REDIR_POST_302|CURL_REDIR_POST_303)
#define CURL_ZERO_TERMINATED ((size_t) -1)
#ifdef CFINIT
#undef CFINIT
#endif
#ifdef CURL_ISOCPP
#define CFINIT(name) CURLFORM_ ## name
#else
#define CFINIT(name) CURLFORM_ name
#endif
#undef CFINIT
#define CURLINFO_STRING 0x100000
#define CURLINFO_LONG 0x200000
#define CURLINFO_DOUBLE 0x300000
#define CURLINFO_SLIST 0x400000
#define CURLINFO_PTR 0x400000
#define CURLINFO_SOCKET 0x500000
#define CURLINFO_OFF_T 0x600000
#define CURLINFO_MASK 0x0fffff
#define CURLINFO_TYPEMASK 0xf00000
#define CURLINFO_HTTP_CODE CURLINFO_RESPONSE_CODE
#define CURL_GLOBAL_SSL (1<<0)
#define CURL_GLOBAL_WIN32 (1<<1)
#define CURL_GLOBAL_ALL (CURL_GLOBAL_SSL|CURL_GLOBAL_WIN32)
#define CURL_GLOBAL_NOTHING 0
#define CURL_GLOBAL_DEFAULT CURL_GLOBAL_ALL
#define CURL_GLOBAL_ACK_EINTR (1<<2)
#define CURLVERSION_NOW CURLVERSION_FIFTH
#define CURL_VERSION_IPV6 (1<<0)
#define CURL_VERSION_KERBEROS4 (1<<1)
#define CURL_VERSION_SSL (1<<2)
#define CURL_VERSION_LIBZ (1<<3)
#define CURL_VERSION_NTLM (1<<4)
#define CURL_VERSION_GSSNEGOTIATE (1<<5)
#define CURL_VERSION_DEBUG (1<<6)
#define CURL_VERSION_ASYNCHDNS (1<<7)
#define CURL_VERSION_SPNEGO (1<<8)
#define CURL_VERSION_LARGEFILE (1<<9)
#define CURL_VERSION_IDN (1<<10)
#define CURL_VERSION_SSPI (1<<11)
#define CURL_VERSION_CONV (1<<12)
#define CURL_VERSION_CURLDEBUG (1<<13)
#define CURL_VERSION_TLSAUTH_SRP (1<<14)
#define CURL_VERSION_NTLM_WB (1<<15)
#define CURL_VERSION_HTTP2 (1<<16)
#define CURL_VERSION_GSSAPI (1<<17)
#define CURL_VERSION_KERBEROS5 (1<<18)
#define CURL_VERSION_UNIX_SOCKETS (1<<19)
#define CURL_VERSION_PSL (1<<20)
#define CURL_VERSION_HTTPS_PROXY (1<<21)
#define CURL_VERSION_MULTI_SSL (1<<22)
#define CURL_VERSION_BROTLI (1<<23)
#define CURLPAUSE_RECV (1<<0)
#define CURLPAUSE_RECV_CONT (0)
#define CURLPAUSE_SEND (1<<2)
#define CURLPAUSE_SEND_CONT (0)
#define CURLPAUSE_ALL (CURLPAUSE_RECV|CURLPAUSE_SEND)
#define CURLPAUSE_CONT (CURLPAUSE_RECV_CONT|CURLPAUSE_SEND_CONT)
#ifdef __cplusplus
#endif
#include "easy.h"
#include "multi.h"
#if defined(__GNUC__) && defined(__GNUC_MINOR__) && ((__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3)) && !defined(__cplusplus) && !defined(CURL_DISABLE_TYPECHECK)
#include "typecheck-gcc.h"
#else
#if defined(__STDC__) && (__STDC__ >= 1)
#define curl_easy_setopt(handle,opt,param) curl_easy_setopt(handle,opt,param)
#define curl_easy_getinfo(handle,info,arg) curl_easy_getinfo(handle,info,arg)
#define curl_share_setopt(share,opt,param) curl_share_setopt(share,opt,param)
#define curl_multi_setopt(handle,opt,param) curl_multi_setopt(handle,opt,param)
#endif
#endif
#endif