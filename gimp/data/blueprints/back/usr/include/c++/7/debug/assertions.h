// GGHASH:VqFSKU_QGz47aQqZZU_2XUalylaAAsJF9jH5GPc4h3ao0000096b
#ifndef _GLIBCXX_DEBUG_ASSERTIONS_H
#define _GLIBCXX_DEBUG_ASSERTIONS_H 1
#ifndef _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_ASSERT(_Condition) 
#define _GLIBCXX_DEBUG_PEDASSERT(_Condition) 
#define _GLIBCXX_DEBUG_ONLY(_Statement) 
#endif
#ifndef _GLIBCXX_ASSERTIONS
#define __glibcxx_requires_non_empty_range(_First,_Last) 
#define __glibcxx_requires_nonempty() 
#define __glibcxx_requires_subscript(_N) 
#else
#define __glibcxx_requires_non_empty_range(_First,_Last) __glibcxx_assert(__builtin_expect(_First != _Last, true))
#define __glibcxx_requires_subscript(_N) __glibcxx_assert(__builtin_expect(_N < this->size(), true))
#define __glibcxx_requires_nonempty() __glibcxx_assert(__builtin_expect(!this->empty(), true))
#endif
#ifdef _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_ASSERT(_Condition) __glibcxx_assert(_Condition)
# ifdef _GLIBCXX_DEBUG_PEDANTIC
#define _GLIBCXX_DEBUG_PEDASSERT(_Condition) _GLIBCXX_DEBUG_ASSERT(_Condition)
# else
#define _GLIBCXX_DEBUG_PEDASSERT(_Condition) 
# endif
#define _GLIBCXX_DEBUG_ONLY(_Statement) _Statement
#endif
#endif
