// GGHASH:VKD4F_0osIeWE8lW2MowrUXnhwjw3g8Q0QPP9vuRr8UU00009301
#ifndef PB_DS_PAT_TRIE_BASE
#define PB_DS_PAT_TRIE_BASE 
#include <debug/debug.h>
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#ifdef _GLIBCXX_DEBUG
#endif
#define PB_DS_CONST_IT_C_DEC _CIter<Node, Leaf, Head, Inode, Is_Forward_Iterator>
#define PB_DS_CONST_ODIR_IT_C_DEC _CIter<Node, Leaf, Head, Inode, !Is_Forward_Iterator>
#define PB_DS_IT_C_DEC _Iter<Node, Leaf, Head, Inode, Is_Forward_Iterator>
#define PB_DS_ODIR_IT_C_DEC _Iter<Node, Leaf, Head, Inode, !Is_Forward_Iterator>
#undef PB_DS_CONST_ODIR_IT_C_DEC
#undef PB_DS_ODIR_IT_C_DEC
#define PB_DS_PAT_TRIE_NODE_CONST_ITERATOR_C_DEC _Node_citer<Node, Leaf, Head, Inode, _CIterator, Iterator, _ATraits, _Alloc>
#define PB_DS_PAT_TRIE_NODE_ITERATOR_C_DEC _Node_iter<Node, Leaf, Head, Inode, _CIterator, Iterator, _ATraits, _Alloc>
#define PB_DS_CLASS_T_DEC template<typename _ATraits, typename Metadata>
#define PB_DS_CLASS_C_DEC pat_trie_base::_Inode<_ATraits, Metadata>
#ifdef _GLIBCXX_DEBUG
#endif
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#endif
