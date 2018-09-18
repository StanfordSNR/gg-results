// GGHASH:VCLLF_t_ZT7gsyiJM5wj9uWZHmV1bOSScHMej3Em6IRI00003773
#ifndef _ARPA_NAMESER_H_
#define _ARPA_NAMESER_H_ 
#include <sys/param.h>
#include <sys/types.h>
#include <stdint.h>
#define NS_PACKETSZ 512
#define NS_MAXDNAME 1025
#define NS_MAXMSG 65535
#define NS_MAXCDNAME 255
#define NS_MAXLABEL 63
#define NS_HFIXEDSZ 12
#define NS_QFIXEDSZ 4
#define NS_RRFIXEDSZ 10
#define NS_INT32SZ 4
#define NS_INT16SZ 2
#define NS_INT8SZ 1
#define NS_INADDRSZ 4
#define NS_IN6ADDRSZ 16
#define NS_CMPRSFLGS 0xc0
#define NS_DEFAULTPORT 53
#define ns_msg_id(handle) ((handle)._id + 0)
#define ns_msg_base(handle) ((handle)._msg + 0)
#define ns_msg_end(handle) ((handle)._eom + 0)
#define ns_msg_size(handle) ((handle)._eom - (handle)._msg)
#define ns_msg_count(handle,section) ((handle)._counts[section] + 0)
#define ns_rr_name(rr) (((rr).name[0] != '\0') ? (rr).name : ".")
#define ns_rr_type(rr) ((ns_type)((rr).type + 0))
#define ns_rr_class(rr) ((ns_class)((rr).rr_class + 0))
#define ns_rr_ttl(rr) ((rr).ttl + 0)
#define ns_rr_rdlen(rr) ((rr).rdlength + 0)
#define ns_rr_rdata(rr) ((rr).rdata + 0)
#define NS_TSIG_FUDGE 300
#define NS_TSIG_TCP_COUNT 100
#define NS_TSIG_ALG_HMAC_MD5 "HMAC-MD5.SIG-ALG.REG.INT"
#define NS_TSIG_ERROR_NO_TSIG -10
#define NS_TSIG_ERROR_NO_SPACE -11
#define NS_TSIG_ERROR_FORMERR -12
#define NS_OPT_DNSSEC_OK 0x8000U
#define NS_OPT_NSID 3
#define NS_GET16(s,cp) do { const unsigned char *t_cp = (const unsigned char *)(cp); (s) = ((uint16_t)t_cp[0] << 8) | ((uint16_t)t_cp[1]) ; (cp) += NS_INT16SZ; } while (0)
#define NS_GET32(l,cp) do { const unsigned char *t_cp = (const unsigned char *)(cp); (l) = ((uint32_t)t_cp[0] << 24) | ((uint32_t)t_cp[1] << 16) | ((uint32_t)t_cp[2] << 8) | ((uint32_t)t_cp[3]) ; (cp) += NS_INT32SZ; } while (0)
#define NS_PUT16(s,cp) do { uint16_t t_s = (uint16_t)(s); unsigned char *t_cp = (unsigned char *)(cp); *t_cp++ = t_s >> 8; *t_cp = t_s; (cp) += NS_INT16SZ; } while (0)
#define NS_PUT32(l,cp) do { uint32_t t_l = (uint32_t)(l); unsigned char *t_cp = (unsigned char *)(cp); *t_cp++ = t_l >> 24; *t_cp++ = t_l >> 16; *t_cp++ = t_l >> 8; *t_cp = t_l; (cp) += NS_INT32SZ; } while (0)
#include <arpa/nameser_compat.h>
#endif
