// GGHASH:VoW9f5jqmyd73aQCY.4y6YR0m5aMNz6aUNTG1FTYt5N800000830
#ifndef _CXXABI_TWEAKS_H
#define _CXXABI_TWEAKS_H 1
#ifdef __cplusplus
#endif
#define _GLIBCXX_GUARD_TEST(x) (*(char *) (x) != 0)
#define _GLIBCXX_GUARD_SET(x) *(char *) (x) = 1
#define _GLIBCXX_GUARD_BIT __guard_test_bit (0, 1)
#define _GLIBCXX_GUARD_PENDING_BIT __guard_test_bit (1, 1)
#define _GLIBCXX_GUARD_WAITING_BIT __guard_test_bit (2, 1)
#define _GLIBCXX_CXA_VEC_CTOR_RETURN(x) return
#ifdef __cplusplus
#endif
#endif
