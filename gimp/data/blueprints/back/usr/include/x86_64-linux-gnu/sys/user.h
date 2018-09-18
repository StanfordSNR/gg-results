// GGHASH:VdXus5_ZLm_0z0SqqFJBCuxjWGXFFhSXX0ndHYRqzrVc00001457
#ifndef _SYS_USER_H
#define _SYS_USER_H 1
#ifdef __x86_64__
#else
#endif
#define PAGE_SHIFT 12
#define PAGE_SIZE (1UL << PAGE_SHIFT)
#define PAGE_MASK (~(PAGE_SIZE-1))
#define NBPG PAGE_SIZE
#define UPAGES 1
#define HOST_TEXT_START_ADDR (u.start_code)
#define HOST_STACK_END_ADDR (u.start_stack + u.u_ssize * NBPG)
#endif
