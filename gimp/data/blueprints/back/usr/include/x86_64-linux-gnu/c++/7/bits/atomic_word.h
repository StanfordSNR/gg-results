// GGHASH:VL7RxjWMk2Cx782pVCMiQUVpSRytNUaozfPxEXPx07yI000005ee
#ifndef _GLIBCXX_ATOMIC_WORD_H
#define _GLIBCXX_ATOMIC_WORD_H 1
#define _GLIBCXX_READ_MEM_BARRIER __atomic_thread_fence (__ATOMIC_ACQUIRE)
#define _GLIBCXX_WRITE_MEM_BARRIER __atomic_thread_fence (__ATOMIC_RELEASE)
#endif