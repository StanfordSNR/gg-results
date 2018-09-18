// GGHASH:VgVXqkJAVor5HJw7RocA4msStvQhXQgBlCGwFkj9Tdks00000f2e
#ifndef __siginfo_t_defined
#define __siginfo_t_defined 1
#include <bits/wordsize.h>
#include <bits/types.h>
#include <bits/types/__sigval_t.h>
#define __SI_MAX_SIZE 128
#if __WORDSIZE == 64
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#else
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 3)
#endif
#include <bits/siginfo-arch.h>
#ifndef __SI_ALIGNMENT
#define __SI_ALIGNMENT 
#endif
#ifndef __SI_BAND_TYPE
#define __SI_BAND_TYPE long int
#endif
#ifndef __SI_CLOCK_T
#define __SI_CLOCK_T __clock_t
#endif
#ifndef __SI_ERRNO_THEN_CODE
#define __SI_ERRNO_THEN_CODE 1
#endif
#ifndef __SI_HAVE_SIGSYS
#define __SI_HAVE_SIGSYS 1
#endif
#ifndef __SI_SIGFAULT_ADDL
#define __SI_SIGFAULT_ADDL 
#endif
#if __SI_ERRNO_THEN_CODE
#else
#endif
#if __WORDSIZE == 64
#endif
#if __SI_HAVE_SIGSYS
#endif
#define si_pid _sifields._kill.si_pid
#define si_uid _sifields._kill.si_uid
#define si_timerid _sifields._timer.si_tid
#define si_overrun _sifields._timer.si_overrun
#define si_status _sifields._sigchld.si_status
#define si_utime _sifields._sigchld.si_utime
#define si_stime _sifields._sigchld.si_stime
#define si_value _sifields._rt.si_sigval
#define si_int _sifields._rt.si_sigval.sival_int
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define si_addr _sifields._sigfault.si_addr
#define si_addr_lsb _sifields._sigfault.si_addr_lsb
#define si_lower _sifields._sigfault._bounds._addr_bnd._lower
#define si_upper _sifields._sigfault._bounds._addr_bnd._upper
#define si_pkey _sifields._sigfault._bounds._pkey
#define si_band _sifields._sigpoll.si_band
#define si_fd _sifields._sigpoll.si_fd
#if __SI_HAVE_SIGSYS
#define si_call_addr _sifields._sigsys._call_addr
#define si_syscall _sifields._sigsys._syscall
#define si_arch _sifields._sigsys._arch
#endif
#endif
