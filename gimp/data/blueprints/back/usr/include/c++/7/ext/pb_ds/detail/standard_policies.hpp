// GGHASH:VOKt8BCc6oK54mGvvlJe1eJMn0Bz1u2Saqsl3zwjMx6A000013a7
#ifndef PB_DS_STANDARD_POLICIES_HPP
#define PB_DS_STANDARD_POLICIES_HPP 
#include <memory>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/pb_ds/list_update_policy.hpp>
#include <ext/pb_ds/detail/branch_policy/null_node_metadata.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#include <ext/pb_ds/tag_and_trait.hpp>
#include <tr1/functional>
#define __dtrie_alloc std::allocator<char>
#define __dtrie_string std::basic_string<Char, Char_Traits, __dtrie_alloc>
#undef __dtrie_alloc
#undef __dtrie_string
#endif
