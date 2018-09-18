// GGHASH:Vl9CWPCVpaLuNP9BlAQcDd8s.x7JUhihATBD4c5wW0Bw0000518b
#ifndef _GLIBCXX_PROFILE_PROFILER_TRACE_H
#define _GLIBCXX_PROFILE_PROFILER_TRACE_H 1
#include <cstdio>
#include <cerrno>
#include <cstdlib>
#if __cplusplus >= 201103L
#include <unordered_map>
#define _GLIBCXX_IMPL_UNORDERED_MAP std::_GLIBCXX_STD_C::unordered_map
#else
#include <tr1/unordered_map>
#define _GLIBCXX_IMPL_UNORDERED_MAP std::tr1::unordered_map
#endif
#include <ext/concurrence.h>
#include <fstream>
#include <string>
#include <utility>
#include <vector>
#include "profile/impl/profiler_algos.h"
#include "profile/impl/profiler_state.h"
#include "profile/impl/profiler_node.h"
#endif
