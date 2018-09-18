// GGHASH:VlCA0jsqFH8OfQFo0LpKiGJAfCHawPf.2FjPx1E3SsZE000041af
#ifndef PB_DS_HASH_POLICY_HPP
#define PB_DS_HASH_POLICY_HPP 
#include <bits/c++config.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <ext/pb_ds/exception.hpp>
#include <ext/pb_ds/detail/type_utils.hpp>
#include <ext/pb_ds/detail/hash_fn/mask_based_range_hashing.hpp>
#include <ext/pb_ds/detail/hash_fn/mod_based_range_hashing.hpp>
#include <ext/pb_ds/detail/resize_policy/hash_load_check_resize_trigger_size_base.hpp>
#define PB_DS_CLASS_T_DEC template<typename Size_Type>
#define PB_DS_CLASS_C_DEC linear_probe_fn<Size_Type>
#include <ext/pb_ds/detail/hash_fn/linear_probe_fn_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Size_Type>
#define PB_DS_CLASS_C_DEC quadratic_probe_fn<Size_Type>
#include <ext/pb_ds/detail/hash_fn/quadratic_probe_fn_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Size_Type>
#define PB_DS_CLASS_C_DEC direct_mask_range_hashing<Size_Type>
#include <ext/pb_ds/detail/hash_fn/direct_mask_range_hashing_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Size_Type>
#define PB_DS_CLASS_C_DEC direct_mod_range_hashing<Size_Type>
#include <ext/pb_ds/detail/hash_fn/direct_mod_range_hashing_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<bool External_Load_Access, typename Size_Type>
#define PB_DS_CLASS_C_DEC hash_load_check_resize_trigger<External_Load_Access, Size_Type>
#define PB_DS_SIZE_BASE_C_DEC detail::hash_load_check_resize_trigger_size_base<Size_Type, External_Load_Access>
#ifdef _GLIBCXX_DEBUG
#endif
#include <ext/pb_ds/detail/resize_policy/hash_load_check_resize_trigger_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#undef PB_DS_SIZE_BASE_C_DEC
#define PB_DS_CLASS_T_DEC template<bool External_Load_Access, typename Size_Type>
#define PB_DS_CLASS_C_DEC cc_hash_max_collision_check_resize_trigger<External_Load_Access, Size_Type>
#include <ext/pb_ds/detail/resize_policy/cc_hash_max_collision_check_resize_trigger_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Size_Type>
#define PB_DS_CLASS_C_DEC hash_exponential_size_policy<Size_Type>
#include <ext/pb_ds/detail/resize_policy/hash_exponential_size_policy_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC 
#define PB_DS_CLASS_C_DEC hash_prime_size_policy
#include <ext/pb_ds/detail/resize_policy/hash_prime_size_policy_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#define PB_DS_CLASS_T_DEC template<typename Size_Policy, typename Trigger_Policy, bool External_Size_Access, typename Size_Type>
#define PB_DS_CLASS_C_DEC hash_standard_resize_policy<Size_Policy, Trigger_Policy, External_Size_Access, Size_Type>
#include <ext/pb_ds/detail/resize_policy/hash_standard_resize_policy_imp.hpp>
#undef PB_DS_CLASS_T_DEC
#undef PB_DS_CLASS_C_DEC
#endif
