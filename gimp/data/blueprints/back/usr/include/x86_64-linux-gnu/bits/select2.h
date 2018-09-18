// GGHASH:V8zScDrdnWfUfNrtfDym.Lm3dliAN4zxhCH546r0_bwI0000059d
#ifndef _SYS_SELECT_H
# error "Never include <bits/select2.h> directly; use <sys/select.h> instead."
#endif
#undef __FD_ELT
#define __FD_ELT(d) __extension__ ({ long int __d = (d); (__builtin_constant_p (__d) ? (0 <= __d && __d < __FD_SETSIZE ? (__d / __NFDBITS) : __fdelt_warn (__d)) : __fdelt_chk (__d)); })
