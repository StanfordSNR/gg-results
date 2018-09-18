// GGHASH:VEsuWJLdLu5Uwfi3v_4.AbqnCvtRyIycvXLZfAVYn7KE00002469
#ifndef _STDATOMIC_H
#define _STDATOMIC_H 
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ (*__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ (*__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ (*__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ (*__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ (*__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ (*__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#if __GCC_ATOMIC_TEST_AND_SET_TRUEVAL == 1
#else
#endif
#define ATOMIC_FLAG_INIT { 0 }
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#endif
