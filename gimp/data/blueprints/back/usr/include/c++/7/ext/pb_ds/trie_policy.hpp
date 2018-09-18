// GGHASH:V.ycGipelb5Phy51iM4A7aXCgPLXXZHsTcnDJE1sQ8ZY00002fc1
#ifndef PB_DS_TRIE_POLICY_HPP
#define PB_DS_TRIE_POLICY_HPP 
#include <bits/c++config.h>
#include <string>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/trie_policy/trie_policy_base.hpp>
#define PB_DS_CLASS_T_DEC template<typename String, typename String::value_type Min_E_Val, typename String::value_type Max_E_Val, bool Reverse, typename _Alloc>
#define PB_DS_CLASS_C_DEC trie_string_access_traits<String, Min_E_Val,Max_E_Val,Reverse,_Alloc>
#include <ext/pb_ds/detail/trie_policy/trie_string_access_traits_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Node_CItr,typename Node_Itr, typename _ATraits, typename _Alloc>
#define PB_DS_CLASS_C_DEC trie_prefix_search_node_update<Node_CItr, Node_Itr, _ATraits,_Alloc>
#define PB_DS_TRIE_POLICY_BASE detail::trie_policy_base<Node_CItr,Node_Itr,_ATraits, _Alloc>
#include <ext/pb_ds/detail/trie_policy/prefix_search_node_update_imp.hpp>
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_C_DEC trie_order_statistics_node_update<Node_CItr, Node_Itr, _ATraits, _Alloc>
#include <ext/pb_ds/detail/trie_policy/order_statistics_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_TRIE_POLICY_BASE
#endif
