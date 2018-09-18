// GGHASH:VibRLzNdv2M7QvxT45rhDa5ZEa2b6dhunGx1m0uphKk400002065
#ifndef _LINUX_TCP_H
#define _LINUX_TCP_H 
#include <linux/types.h>
#include <asm/byteorder.h>
#include <linux/socket.h>
#if defined(__LITTLE_ENDIAN_BITFIELD)
#elif defined(__BIG_ENDIAN_BITFIELD)
#else
#error "Adjust your <asm/byteorder.h> defines"
#endif
#define tcp_flag_word(tp) ( ((union tcp_word_hdr *)(tp))->words [3])
#define TCP_MSS_DEFAULT 536U
#define TCP_MSS_DESIRED 1220U
#define TCP_NODELAY 1
#define TCP_MAXSEG 2
#define TCP_CORK 3
#define TCP_KEEPIDLE 4
#define TCP_KEEPINTVL 5
#define TCP_KEEPCNT 6
#define TCP_SYNCNT 7
#define TCP_LINGER2 8
#define TCP_DEFER_ACCEPT 9
#define TCP_WINDOW_CLAMP 10
#define TCP_INFO 11
#define TCP_QUICKACK 12
#define TCP_CONGESTION 13
#define TCP_MD5SIG 14
#define TCP_THIN_LINEAR_TIMEOUTS 16
#define TCP_THIN_DUPACK 17
#define TCP_USER_TIMEOUT 18
#define TCP_REPAIR 19
#define TCP_REPAIR_QUEUE 20
#define TCP_QUEUE_SEQ 21
#define TCP_REPAIR_OPTIONS 22
#define TCP_FASTOPEN 23
#define TCP_TIMESTAMP 24
#define TCP_NOTSENT_LOWAT 25
#define TCP_CC_INFO 26
#define TCP_SAVE_SYN 27
#define TCP_SAVED_SYN 28
#define TCP_REPAIR_WINDOW 29
#define TCP_FASTOPEN_CONNECT 30
#define TCP_ULP 31
#define TCP_MD5SIG_EXT 32
#define TCP_FASTOPEN_KEY 33
#define TCP_FASTOPEN_NO_COOKIE 34
#define TCPI_OPT_TIMESTAMPS 1
#define TCPI_OPT_SACK 2
#define TCPI_OPT_WSCALE 4
#define TCPI_OPT_ECN 8
#define TCPI_OPT_ECN_SEEN 16
#define TCPI_OPT_SYN_DATA 32
#define TCPF_CA_Open (1<<TCP_CA_Open)
#define TCPF_CA_Disorder (1<<TCP_CA_Disorder)
#define TCPF_CA_CWR (1<<TCP_CA_CWR)
#define TCPF_CA_Recovery (1<<TCP_CA_Recovery)
#define TCPF_CA_Loss (1<<TCP_CA_Loss)
#define TCP_MD5SIG_MAXKEYLEN 80
#define TCP_MD5SIG_FLAG_PREFIX 1
#endif
