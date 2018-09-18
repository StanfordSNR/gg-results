// GGHASH:VpMfcSs.TNogUkqgV.L4l5TY6p0S02wtGbaod_s3jvVg0000794a
#ifndef __LINUX_BPF_H__
#define __LINUX_BPF_H__ 
#include <linux/types.h>
#include <linux/bpf_common.h>
#define BPF_ALU64 0x07
#define BPF_DW 0x18
#define BPF_XADD 0xc0
#define BPF_MOV 0xb0
#define BPF_ARSH 0xc0
#define BPF_END 0xd0
#define BPF_TO_LE 0x00
#define BPF_TO_BE 0x08
#define BPF_FROM_LE BPF_TO_LE
#define BPF_FROM_BE BPF_TO_BE
#define BPF_JNE 0x50
#define BPF_JLT 0xa0
#define BPF_JLE 0xb0
#define BPF_JSGT 0x60
#define BPF_JSGE 0x70
#define BPF_JSLT 0xc0
#define BPF_JSLE 0xd0
#define BPF_CALL 0x80
#define BPF_EXIT 0x90
#define MAX_BPF_REG __MAX_BPF_REG
#define MAX_BPF_ATTACH_TYPE __MAX_BPF_ATTACH_TYPE
#define BPF_F_ALLOW_OVERRIDE (1U << 0)
#define BPF_F_ALLOW_MULTI (1U << 1)
#define BPF_F_STRICT_ALIGNMENT (1U << 0)
#define BPF_PSEUDO_MAP_FD 1
#define BPF_ANY 0
#define BPF_NOEXIST 1
#define BPF_EXIST 2
#define BPF_F_NO_PREALLOC (1U << 0)
#define BPF_F_NO_COMMON_LRU (1U << 1)
#define BPF_F_NUMA_NODE (1U << 2)
#define BPF_F_QUERY_EFFECTIVE (1U << 0)
#define BPF_OBJ_NAME_LEN 16U
#define BPF_F_RDONLY (1U << 3)
#define BPF_F_WRONLY (1U << 4)
#define __BPF_FUNC_MAPPER(FN) FN(unspec), FN(map_lookup_elem), FN(map_update_elem), FN(map_delete_elem), FN(probe_read), FN(ktime_get_ns), FN(trace_printk), FN(get_prandom_u32), FN(get_smp_processor_id), FN(skb_store_bytes), FN(l3_csum_replace), FN(l4_csum_replace), FN(tail_call), FN(clone_redirect), FN(get_current_pid_tgid), FN(get_current_uid_gid), FN(get_current_comm), FN(get_cgroup_classid), FN(skb_vlan_push), FN(skb_vlan_pop), FN(skb_get_tunnel_key), FN(skb_set_tunnel_key), FN(perf_event_read), FN(redirect), FN(get_route_realm), FN(perf_event_output), FN(skb_load_bytes), FN(get_stackid), FN(csum_diff), FN(skb_get_tunnel_opt), FN(skb_set_tunnel_opt), FN(skb_change_proto), FN(skb_change_type), FN(skb_under_cgroup), FN(get_hash_recalc), FN(get_current_task), FN(probe_write_user), FN(current_task_under_cgroup), FN(skb_change_tail), FN(skb_pull_data), FN(csum_update), FN(set_hash_invalid), FN(get_numa_node_id), FN(skb_change_head), FN(xdp_adjust_head), FN(probe_read_str), FN(get_socket_cookie), FN(get_socket_uid), FN(set_hash), FN(setsockopt), FN(skb_adjust_room), FN(redirect_map), FN(sk_redirect_map), FN(sock_map_update), FN(xdp_adjust_meta), FN(perf_event_read_value), FN(perf_prog_read_value), FN(getsockopt),
#define __BPF_ENUM_FN(x) BPF_FUNC_ ## x
#undef __BPF_ENUM_FN
#define BPF_F_RECOMPUTE_CSUM (1ULL << 0)
#define BPF_F_INVALIDATE_HASH (1ULL << 1)
#define BPF_F_HDR_FIELD_MASK 0xfULL
#define BPF_F_PSEUDO_HDR (1ULL << 4)
#define BPF_F_MARK_MANGLED_0 (1ULL << 5)
#define BPF_F_MARK_ENFORCE (1ULL << 6)
#define BPF_F_INGRESS (1ULL << 0)
#define BPF_F_TUNINFO_IPV6 (1ULL << 0)
#define BPF_F_SKIP_FIELD_MASK 0xffULL
#define BPF_F_USER_STACK (1ULL << 8)
#define BPF_F_FAST_STACK_CMP (1ULL << 9)
#define BPF_F_REUSE_STACKID (1ULL << 10)
#define BPF_F_ZERO_CSUM_TX (1ULL << 1)
#define BPF_F_DONT_FRAGMENT (1ULL << 2)
#define BPF_F_INDEX_MASK 0xffffffffULL
#define BPF_F_CURRENT_CPU BPF_F_INDEX_MASK
#define BPF_F_CTXLEN_MASK (0xfffffULL << 32)
#define XDP_PACKET_HEADROOM 256
#define BPF_TAG_SIZE 8
#define TCP_BPF_IW 1001
#define TCP_BPF_SNDCWND_CLAMP 1002
#define BPF_DEVCG_ACC_MKNOD (1ULL << 0)
#define BPF_DEVCG_ACC_READ (1ULL << 1)
#define BPF_DEVCG_ACC_WRITE (1ULL << 2)
#define BPF_DEVCG_DEV_BLOCK (1ULL << 0)
#define BPF_DEVCG_DEV_CHAR (1ULL << 1)
#endif
