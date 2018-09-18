// GGHASH:VBp8IpTnkzjCqVb1z_ZrvCcVR3w4CfKsLTrFqPwTCB1s000030aa
#ifndef _GLIBCXX_PARALLEL_SETTINGS_H
#define _GLIBCXX_PARALLEL_SETTINGS_H 1
#include <parallel/types.h>
#define _GLIBCXX_PARALLEL_CONDITION(__c) (__gnu_parallel::_Settings::get().algorithm_strategy != __gnu_parallel::force_sequential && ((__gnu_parallel::__get_max_threads() > 1 && (__c)) || __gnu_parallel::_Settings::get().algorithm_strategy == __gnu_parallel::force_parallel))
#endif
