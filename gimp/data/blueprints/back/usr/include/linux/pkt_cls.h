// GGHASH:VqFZqnzcm7UP_R1VgS1YBYfmHtUA2CkeWwLaRTzBRPOs00002ee6
#ifndef __LINUX_PKT_CLS_H
#define __LINUX_PKT_CLS_H 
#include <linux/types.h>
#include <linux/pkt_sched.h>
#define TC_COOKIE_MAX_SIZE 16
#define TCA_ACT_MAX __TCA_ACT_MAX
#define TCA_OLD_COMPAT (TCA_ACT_MAX+1)
#define TCA_ACT_MAX_PRIO 32
#define TCA_ACT_BIND 1
#define TCA_ACT_NOBIND 0
#define TCA_ACT_UNBIND 1
#define TCA_ACT_NOUNBIND 0
#define TCA_ACT_REPLACE 1
#define TCA_ACT_NOREPLACE 0
#define TC_ACT_UNSPEC (-1)
#define TC_ACT_OK 0
#define TC_ACT_RECLASSIFY 1
#define TC_ACT_SHOT 2
#define TC_ACT_PIPE 3
#define TC_ACT_STOLEN 4
#define TC_ACT_QUEUED 5
#define TC_ACT_REPEAT 6
#define TC_ACT_REDIRECT 7
#define TC_ACT_TRAP 8
#define __TC_ACT_EXT_SHIFT 28
#define __TC_ACT_EXT(local) ((local) << __TC_ACT_EXT_SHIFT)
#define TC_ACT_EXT_VAL_MASK ((1 << __TC_ACT_EXT_SHIFT) - 1)
#define TC_ACT_EXT_CMP(combined,opcode) (((combined) & (~TC_ACT_EXT_VAL_MASK)) == opcode)
#define TC_ACT_JUMP __TC_ACT_EXT(1)
#define TC_ACT_GOTO_CHAIN __TC_ACT_EXT(2)
#define TCA_ID_MAX __TCA_ID_MAX
#define TC_POLICE_UNSPEC TC_ACT_UNSPEC
#define TC_POLICE_OK TC_ACT_OK
#define TC_POLICE_RECLASSIFY TC_ACT_RECLASSIFY
#define TC_POLICE_SHOT TC_ACT_SHOT
#define TC_POLICE_PIPE TC_ACT_PIPE
#define tc_gen __u32 index; __u32 capab; int action; int refcnt; int bindcnt
#define TCA_POLICE_RESULT TCA_POLICE_RESULT
#define TCA_POLICE_MAX (__TCA_POLICE_MAX - 1)
#define TCA_CLS_FLAGS_SKIP_HW (1 << 0)
#define TCA_CLS_FLAGS_SKIP_SW (1 << 1)
#define TCA_CLS_FLAGS_IN_HW (1 << 2)
#define TCA_CLS_FLAGS_NOT_IN_HW (1 << 3)
#define TC_U32_HTID(h) ((h)&0xFFF00000)
#define TC_U32_USERHTID(h) (TC_U32_HTID(h)>>20)
#define TC_U32_HASH(h) (((h)>>12)&0xFF)
#define TC_U32_NODE(h) ((h)&0xFFF)
#define TC_U32_KEY(h) ((h)&0xFFFFF)
#define TC_U32_UNSPEC 0
#define TC_U32_ROOT (0xFFF00000)
#define TCA_U32_MAX (__TCA_U32_MAX - 1)
#define TC_U32_TERMINAL 1
#define TC_U32_OFFSET 2
#define TC_U32_VAROFFSET 4
#define TC_U32_EAT 8
#define TC_U32_MAXDEPTH 8
#define TCA_RSVP_MAX (__TCA_RSVP_MAX - 1 )
#define TCA_ROUTE4_MAX (__TCA_ROUTE4_MAX - 1)
#define TCA_FW_MAX (__TCA_FW_MAX - 1)
#define TCA_TCINDEX_MAX (__TCA_TCINDEX_MAX - 1)
#define FLOW_KEY_MAX (__FLOW_KEY_MAX - 1)
#define TCA_FLOW_MAX (__TCA_FLOW_MAX - 1)
#define TCA_BASIC_MAX (__TCA_BASIC_MAX - 1)
#define TCA_CGROUP_MAX (__TCA_CGROUP_MAX - 1)
#define TCA_BPF_FLAG_ACT_DIRECT (1 << 0)
#define TCA_BPF_MAX (__TCA_BPF_MAX - 1)
#define TCA_FLOWER_MAX (__TCA_FLOWER_MAX - 1)
#define TCA_MATCHALL_MAX (__TCA_MATCHALL_MAX - 1)
#define TCA_EMATCH_TREE_MAX (__TCA_EMATCH_TREE_MAX - 1)
#define TCF_EM_REL_END 0
#define TCF_EM_REL_AND (1<<0)
#define TCF_EM_REL_OR (1<<1)
#define TCF_EM_INVERT (1<<2)
#define TCF_EM_SIMPLE (1<<3)
#define TCF_EM_REL_MASK 3
#define TCF_EM_REL_VALID(v) (((v) & TCF_EM_REL_MASK) != TCF_EM_REL_MASK)
#define TCF_LAYER_MAX (__TCF_LAYER_MAX - 1)
#define TCF_EM_CONTAINER 0
#define TCF_EM_CMP 1
#define TCF_EM_NBYTE 2
#define TCF_EM_U32 3
#define TCF_EM_META 4
#define TCF_EM_TEXT 5
#define TCF_EM_VLAN 6
#define TCF_EM_CANID 7
#define TCF_EM_IPSET 8
#define TCF_EM_MAX 8
#endif
