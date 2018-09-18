// GGHASH:VRf57x_teF.iKbW6l3i_2PY46bo46i0KlsgDjmxR7UA40000392c
#ifndef _LINUX_LIST_H
#define _LINUX_LIST_H 
#define LIST_POISON1 ((struct list_head *) 0x00100100)
#define LIST_POISON2 ((struct list_head *) 0x00200200)
#define LIST_HEAD_INIT(name) { &(name), &(name) }
#define LIST_HEAD(name) struct list_head name = LIST_HEAD_INIT(name)
#ifndef CONFIG_DEBUG_LIST
#else
#endif
#ifndef CONFIG_DEBUG_LIST
#else
#endif
#ifndef CONFIG_DEBUG_LIST
#else
#endif
#define list_entry(ptr,type,member) container_of(ptr, type, member)
#define list_first_entry(ptr,type,member) list_entry((ptr)->next, type, member)
#define list_next_entry(ptr,member) list_entry((ptr)->member.next, typeof(*ptr), member)
#define list_for_each(pos,head) for (pos = (head)->next; pos != (head); pos = pos->next)
#define __list_for_each(pos,head) for (pos = (head)->next; pos != (head); pos = pos->next)
#define list_for_each_prev(pos,head) for (pos = (head)->prev; pos != (head); pos = pos->prev)
#define list_for_each_safe(pos,n,head) for (pos = (head)->next, n = pos->next; pos != (head); pos = n, n = pos->next)
#define list_for_each_entry(pos,head,member) for (pos = list_entry((head)->next, typeof(*pos), member); &pos->member != (head); pos = list_entry(pos->member.next, typeof(*pos), member))
#define list_for_each_entry_reverse(pos,head,member) for (pos = list_entry((head)->prev, typeof(*pos), member); &pos->member != (head); pos = list_entry(pos->member.prev, typeof(*pos), member))
#define list_prepare_entry(pos,head,member) ((pos) ? : list_entry(head, typeof(*pos), member))
#define list_for_each_entry_continue(pos,head,member) for (pos = list_entry(pos->member.next, typeof(*pos), member); &pos->member != (head); pos = list_entry(pos->member.next, typeof(*pos), member))
#define list_for_each_entry_from(pos,head,member) for (; &pos->member != (head); pos = list_entry(pos->member.next, typeof(*pos), member))
#define list_for_each_entry_safe(pos,n,head,member) for (pos = list_entry((head)->next, typeof(*pos), member), n = list_entry(pos->member.next, typeof(*pos), member); &pos->member != (head); pos = n, n = list_entry(n->member.next, typeof(*n), member))
#define list_for_each_entry_safe_continue(pos,n,head,member) for (pos = list_entry(pos->member.next, typeof(*pos), member), n = list_entry(pos->member.next, typeof(*pos), member); &pos->member != (head); pos = n, n = list_entry(n->member.next, typeof(*n), member))
#define list_for_each_entry_safe_from(pos,n,head,member) for (n = list_entry(pos->member.next, typeof(*pos), member); &pos->member != (head); pos = n, n = list_entry(n->member.next, typeof(*n), member))
#define list_for_each_entry_safe_reverse(pos,n,head,member) for (pos = list_entry((head)->prev, typeof(*pos), member), n = list_entry(pos->member.prev, typeof(*pos), member); &pos->member != (head); pos = n, n = list_entry(n->member.prev, typeof(*n), member))
#endif
