// GGHASH:VMMAwfZW_2SKRM0fzC..pj0S8ZAu49Y5T_Zk_aLqlnFY00002301
#ifndef PB_DS_BIN_SEARCH_TREE_FIND_ITERATORS_HPP
#define PB_DS_BIN_SEARCH_TREE_FIND_ITERATORS_HPP 
#include <ext/pb_ds/tag_and_trait.hpp>
#include <debug/debug.h>
#define PB_DS_TREE_CONST_IT_C_DEC bin_search_tree_const_it_< Node_Pointer, Value_Type, Pointer, Const_Pointer, Reference, Const_Reference, Is_Forward_Iterator, _Alloc>
#define PB_DS_TREE_CONST_ODIR_IT_C_DEC bin_search_tree_const_it_< Node_Pointer, Value_Type, Pointer, Const_Pointer, Reference, Const_Reference, !Is_Forward_Iterator, _Alloc>
#define PB_DS_TREE_IT_C_DEC bin_search_tree_it_< Node_Pointer, Value_Type, Pointer, Const_Pointer, Reference, Const_Reference, Is_Forward_Iterator, _Alloc>
#define PB_DS_TREE_ODIR_IT_C_DEC bin_search_tree_it_< Node_Pointer, Value_Type, Pointer, Const_Pointer, Reference, Const_Reference, !Is_Forward_Iterator, _Alloc>
#undef PB_DS_TREE_CONST_IT_C_DEC
#undef PB_DS_TREE_CONST_ODIR_IT_C_DEC
#undef PB_DS_TREE_IT_C_DEC
#undef PB_DS_TREE_ODIR_IT_C_DEC
#endif
