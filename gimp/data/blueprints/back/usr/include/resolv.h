// GGHASH:V7gAY54cn0J.E7mpNG1XmN8Uu8yYBBbeGwscTKE.cjVw00002eec
#ifndef _RESOLV_H_
#define _RESOLV_H_ 
#include <sys/cdefs.h>
#include <sys/param.h>
#include <sys/types.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/nameser.h>
#include <bits/types/res_state.h>
#define LOCALDOMAINPARTS 2
#define RES_TIMEOUT 5
#define RES_MAXNDOTS 15
#define RES_MAXRETRANS 30
#define RES_MAXRETRY 5
#define RES_DFLRETRY 2
#define RES_MAXTIME 65535
#define nsaddr nsaddr_list[0]
#define __RES 19991006
#ifndef _PATH_RESCONF
#define _PATH_RESCONF "/etc/resolv.conf"
#endif
#define RES_INIT 0x00000001
#define RES_DEBUG 0x00000002
#define RES_AAONLY __glibc_macro_warning ("RES_AAONLY is deprecated") 0x00000004
#define RES_USEVC 0x00000008
#define RES_PRIMARY __glibc_macro_warning ("RES_PRIMARY is deprecated") 0x00000010
#define RES_IGNTC 0x00000020
#define RES_RECURSE 0x00000040
#define RES_DEFNAMES 0x00000080
#define RES_STAYOPEN 0x00000100
#define RES_DNSRCH 0x00000200
#define RES_INSECURE1 0x00000400
#define RES_INSECURE2 0x00000800
#define RES_NOALIASES 0x00001000
#define RES_USE_INET6 __glibc_macro_warning ("RES_USE_INET6 is deprecated") 0x00002000
#define RES_ROTATE 0x00004000
#define RES_NOCHECKNAME __glibc_macro_warning ("RES_NOCHECKNAME is deprecated") 0x00008000
#define RES_KEEPTSIG __glibc_macro_warning ("RES_KEEPTSIG is deprecated") 0x00010000
#define RES_BLAST __glibc_macro_warning ("RES_BLAST is deprecated") 0x00020000
#define RES_USE_EDNS0 0x00100000
#define RES_SNGLKUP 0x00200000
#define RES_SNGLKUPREOP 0x00400000
#define RES_USE_DNSSEC 0x00800000
#define RES_NOTLDQUERY 0x01000000
#define RES_NORELOAD 0x02000000
#define RES_DEFAULT (RES_RECURSE|RES_DEFNAMES|RES_DNSRCH)
#define RES_PRF_STATS 0x00000001
#define RES_PRF_UPDATE 0x00000002
#define RES_PRF_CLASS 0x00000004
#define RES_PRF_CMD 0x00000008
#define RES_PRF_QUES 0x00000010
#define RES_PRF_ANS 0x00000020
#define RES_PRF_AUTH 0x00000040
#define RES_PRF_ADD 0x00000080
#define RES_PRF_HEAD1 0x00000100
#define RES_PRF_HEAD2 0x00000200
#define RES_PRF_TTLID 0x00000400
#define RES_PRF_HEADX 0x00000800
#define RES_PRF_QUERY 0x00001000
#define RES_PRF_REPLY 0x00002000
#define RES_PRF_INIT 0x00004000
#define _res (*__res_state())
#define fp_nquery __fp_nquery
#define fp_query __fp_query
#define hostalias __hostalias
#define p_query __p_query
#define res_close __res_close
#define res_init __res_init
#define res_isourserver __res_isourserver
#define res_mkquery __res_mkquery
#define res_query __res_query
#define res_querydomain __res_querydomain
#define res_search __res_search
#define res_send __res_send
#define b64_ntop __b64_ntop
#define b64_pton __b64_pton
#define dn_comp __dn_comp
#define dn_count_labels __dn_count_labels
#define dn_expand __dn_expand
#define dn_skipname __dn_skipname
#define fp_resstat __fp_resstat
#define loc_aton __loc_aton
#define loc_ntoa __loc_ntoa
#define p_cdname __p_cdname
#define p_cdnname __p_cdnname
#define p_class __p_class
#define p_fqname __p_fqname
#define p_fqnname __p_fqnname
#define p_option __p_option
#define p_time __p_time
#define p_type __p_type
#define p_rcode __p_rcode
#define putlong __putlong
#define putshort __putshort
#define res_dnok __res_dnok
#define res_hnok __res_hnok
#define res_hostalias __res_hostalias
#define res_mailok __res_mailok
#define res_nameinquery __res_nameinquery
#define res_nclose __res_nclose
#define res_ninit __res_ninit
#define res_nmkquery __res_nmkquery
#define res_nquery __res_nquery
#define res_nquerydomain __res_nquerydomain
#define res_nsearch __res_nsearch
#define res_nsend __res_nsend
#define res_ownok __res_ownok
#define res_queriesmatch __res_queriesmatch
#define res_randomid __res_randomid
#define sym_ntop __sym_ntop
#define sym_ntos __sym_ntos
#define sym_ston __sym_ston
#endif
