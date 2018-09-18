// GGHASH:Ve5KgkqtkA7JNhGRAzNx.8Ab029Lna_t754BgmFatQrY0000226b
#ifndef PB_DS_OV_TREE_NODE_ITERATORS_HPP
#define PB_DS_OV_TREE_NODE_ITERATORS_HPP 
#include <ext/pb_ds/tag_and_trait.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <debug/debug.h>
#define PB_DS_OV_TREE_CONST_NODE_ITERATOR_C_DEC ov_tree_node_const_it_<Value_Type, Metadata_Type, _Alloc>
#define PB_DS_OV_TREE_NODE_ITERATOR_C_DEC ov_tree_node_it_<Value_Type, Metadata_Type, _Alloc>
#undef PB_DS_OV_TREE_NODE_ITERATOR_C_DEC
#undef PB_DS_OV_TREE_CONST_NODE_ITERATOR_C_DEC
#endif
