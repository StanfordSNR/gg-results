// GGHASH:Vz9wHGWaNJ6DnvJnNWERxQhQuixq1fZG6y65.HH950lQ0000140e
#ifndef PB_DS_TREE_TRACE_BASE_HPP
#define PB_DS_TREE_TRACE_BASE_HPP 
#ifdef PB_DS_TREE_TRACE
#include <ext/pb_ds/detail/branch_policy/branch_policy.hpp>
#include <ext/pb_ds/detail/branch_policy/null_node_metadata.hpp>
#ifdef PB_DS_TREE_TRACE
#define PB_DS_CLASS_T_DEC template<typename Node_CItr, typename Node_Itr, typename Cmp_Fn, bool Node_Based, typename _Alloc>
#define PB_DS_CLASS_C_DEC tree_trace_base<Node_CItr, Node_Itr, Cmp_Fn, Node_Based, _Alloc>
#define PB_DS_TRACE_BASE branch_policy<Node_CItr, Node_Itr, _Alloc>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_TRACE_BASE
#endif
#endif
#endif
