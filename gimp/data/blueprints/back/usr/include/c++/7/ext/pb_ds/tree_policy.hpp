// GGHASH:V.7Xa93fuFhAr5831JBhd_iEuOJ_wXhO66huVpUCqriA000015c9
#ifndef PB_DS_TREE_POLICY_HPP
#define PB_DS_TREE_POLICY_HPP 
#include <bits/c++config.h>
#include <iterator>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/branch_policy/branch_policy.hpp>
#define PB_DS_CLASS_T_DEC template<typename Node_CItr, typename Node_Itr, typename Cmp_Fn, typename _Alloc>
#define PB_DS_CLASS_C_DEC tree_order_statistics_node_update<Node_CItr, Node_Itr, Cmp_Fn, _Alloc>
#define PB_DS_BRANCH_POLICY_BASE detail::branch_policy<Node_CItr, Node_Itr, _Alloc>
#include <ext/pb_ds/detail/tree_policy/order_statistics_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_BRANCH_POLICY_BASE
#endif
