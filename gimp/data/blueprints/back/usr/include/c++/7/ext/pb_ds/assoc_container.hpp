// GGHASH:V1_pzP246zoxNa7UjzjlmukAPFO4ORwZFfSuFFzinsDY0000759e
#ifndef PB_DS_ASSOC_CNTNR_HPP
#define PB_DS_ASSOC_CNTNR_HPP 
#include <bits/c++config.h>
#include <ext/typelist.h>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/detail/container_base_dispatch.hpp>
#include <ext/pb_ds/detail/branch_policy/traits.hpp>
#define PB_DS_HASH_BASE detail::container_base_dispatch<Key, Mapped, _Alloc, Tag, typename __gnu_cxx::typelist::append< typename __gnu_cxx::typelist::create4<Hash_Fn, Eq_Fn, Resize_Policy, detail::integral_constant<int, Store_Hash> >::type, Policy_Tl>::type>::type
#undef PB_DS_HASH_BASE
#define PB_DS_CC_HASH_BASE basic_hash_table<Key, Mapped, Hash_Fn, Eq_Fn, Resize_Policy, Store_Hash, cc_hash_tag, typename __gnu_cxx::typelist::create1<Comb_Hash_Fn>::type, _Alloc>
#undef PB_DS_CC_HASH_BASE
#define PB_DS_GP_HASH_BASE basic_hash_table<Key, Mapped, Hash_Fn, Eq_Fn, Resize_Policy, Store_Hash, gp_hash_tag, typename __gnu_cxx::typelist::create2<Comb_Probe_Fn, Probe_Fn>::type, _Alloc>
#undef PB_DS_GP_HASH_BASE
#define PB_DS_BRANCH_BASE detail::container_base_dispatch<Key, Mapped, _Alloc, Tag, Policy_Tl>::type
#undef PB_DS_BRANCH_BASE
#define PB_DS_TREE_NODE_AND_IT_TRAITS detail::tree_traits<Key, Mapped,Cmp_Fn,Node_Update,Tag,_Alloc>
#define PB_DS_TREE_BASE basic_branch<Key,Mapped, Tag, typename PB_DS_TREE_NODE_AND_IT_TRAITS::node_update, typename __gnu_cxx::typelist::create2<Cmp_Fn, PB_DS_TREE_NODE_AND_IT_TRAITS>::type, _Alloc>
#undef PB_DS_TREE_BASE
#undef PB_DS_TREE_NODE_AND_IT_TRAITS
#define PB_DS_TRIE_NODE_AND_IT_TRAITS detail::trie_traits<Key,Mapped,_ATraits,Node_Update,Tag,_Alloc>
#define PB_DS_TRIE_BASE basic_branch<Key,Mapped,Tag, typename PB_DS_TRIE_NODE_AND_IT_TRAITS::node_update, typename __gnu_cxx::typelist::create2<_ATraits, PB_DS_TRIE_NODE_AND_IT_TRAITS >::type, _Alloc>
#undef PB_DS_TRIE_BASE
#undef PB_DS_TRIE_NODE_AND_IT_TRAITS
#define PB_DS_LU_BASE detail::container_base_dispatch<Key, Mapped, _Alloc, list_update_tag, typename __gnu_cxx::typelist::create2<Eq_Fn, Update_Policy>::type>::type
#undef PB_DS_LU_BASE
#endif
