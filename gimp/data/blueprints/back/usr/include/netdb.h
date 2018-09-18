// GGHASH:VFb0CqKWSPAW8y9ojS0NlQ5V3CpuosC6YTAeEfCgF5xY00006d93
#ifndef _NETDB_H
#define _NETDB_H 1
#include <features.h>
#include <netinet/in.h>
#include <bits/stdint-uintn.h>
#ifdef __USE_MISC
# include <rpc/netdb.h>
#endif
#ifdef __USE_GNU
# include <bits/types/sigevent_t.h>
# include <bits/types/struct_timespec.h>
#endif
#include <bits/netdb.h>
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define _PATH_HOSTS "/etc/hosts"
#define _PATH_NETWORKS "/etc/networks"
#define _PATH_NSSWITCH_CONF "/etc/nsswitch.conf"
#define _PATH_PROTOCOLS "/etc/protocols"
#define _PATH_SERVICES "/etc/services"
#if defined __USE_MISC || !defined __USE_XOPEN2K8
#define h_errno (*__h_errno_location ())
#define HOST_NOT_FOUND 1
#define TRY_AGAIN 2
#define NO_RECOVERY 3
#define NO_DATA 4
#endif
#ifdef __USE_MISC
#define NETDB_INTERNAL -1
#define NETDB_SUCCESS 0
#define NO_ADDRESS NO_DATA
#endif
#if defined __USE_XOPEN2K || defined __USE_XOPEN_EXTENDED
#define IPPORT_RESERVED 1024
#endif
#ifdef __USE_GNU
#define SCOPE_DELIMITER '%'
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_MISC
#define h_addr h_addr_list[0]
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_MISC
#endif
#ifdef __USE_XOPEN2K
# ifdef __USE_GNU
#define GAI_WAIT 0
#define GAI_NOWAIT 1
# endif
#define AI_PASSIVE 0x0001
#define AI_CANONNAME 0x0002
#define AI_NUMERICHOST 0x0004
#define AI_V4MAPPED 0x0008
#define AI_ALL 0x0010
#define AI_ADDRCONFIG 0x0020
# ifdef __USE_GNU
#define AI_IDN 0x0040
#define AI_CANONIDN 0x0080
#define AI_IDN_ALLOW_UNASSIGNED 0x0100
#define AI_IDN_USE_STD3_ASCII_RULES 0x0200
# endif
#define AI_NUMERICSERV 0x0400
#define EAI_BADFLAGS -1
#define EAI_NONAME -2
#define EAI_AGAIN -3
#define EAI_FAIL -4
#define EAI_FAMILY -6
#define EAI_SOCKTYPE -7
#define EAI_SERVICE -8
#define EAI_MEMORY -10
#define EAI_SYSTEM -11
#define EAI_OVERFLOW -12
# ifdef __USE_GNU
#define EAI_NODATA -5
#define EAI_ADDRFAMILY -9
#define EAI_INPROGRESS -100
#define EAI_CANCELED -101
#define EAI_NOTCANCELED -102
#define EAI_ALLDONE -103
#define EAI_INTR -104
#define EAI_IDN_ENCODE -105
# endif
# ifdef __USE_MISC
#define NI_MAXHOST 1025
#define NI_MAXSERV 32
# endif
#define NI_NUMERICHOST 1
#define NI_NUMERICSERV 2
#define NI_NOFQDN 4
#define NI_NAMEREQD 8
#define NI_DGRAM 16
# ifdef __USE_GNU
#define NI_IDN 32
#define NI_IDN_ALLOW_UNASSIGNED 64
#define NI_IDN_USE_STD3_ASCII_RULES 128
# endif
#endif
#ifdef __USE_GNU
#endif
#endif
