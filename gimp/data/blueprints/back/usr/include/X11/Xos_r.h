// GGHASH:VQ7vM8DffrTie90LDgnJcBSNcyuMcMUJZG3j.RiLelms0000839d
#ifndef _XOS_R_H_
#define _XOS_R_H_ 
# include <X11/Xos.h>
# include <X11/Xfuncs.h>
# ifndef X_NOT_POSIX
# ifdef _POSIX_SOURCE
# include <limits.h>
# else
#define _POSIX_SOURCE 
# include <limits.h>
#undef _POSIX_SOURCE
# endif
# ifndef LINE_MAX
#define X_LINE_MAX 2048
# else
#define X_LINE_MAX LINE_MAX
# endif
# endif
#endif
#ifndef WIN32
#ifdef __cplusplus
#endif
# if defined(XOS_USE_XLIB_LOCKING)
# ifndef XAllocIDs
# endif
# ifndef _Xos_isThreadInitialized
#define _Xos_isThreadInitialized (_Xglobal_lock)
# endif
# if defined(XTHREADS_WARN) || defined(XTHREADS_FILE_LINE)
# ifndef XAllocIDs
# include <X11/Xfuncproto.h>
# if NeedFunctionPrototypes
# endif
# if NeedFunctionPrototypes
# endif
# endif
# ifndef _Xos_processLock
#define _Xos_processLock (_XLockMutex_fn ? (*_XLockMutex_fn)(_Xglobal_lock,__FILE__,__LINE__) : 0)
# endif
# ifndef _Xos_processUnlock
#define _Xos_processUnlock (_XUnlockMutex_fn ? (*_XUnlockMutex_fn)(_Xglobal_lock,__FILE__,__LINE__) : 0)
# endif
# else
# ifndef XAllocIDs
# include <X11/Xfuncproto.h>
# if NeedFunctionPrototypes
# endif
# if NeedFunctionPrototypes
# endif
# endif
# ifndef _Xos_processLock
#define _Xos_processLock (_XLockMutex_fn ? ((*_XLockMutex_fn)(_Xglobal_lock), 0) : 0)
# endif
# ifndef _Xos_processUnlock
#define _Xos_processUnlock (_XUnlockMutex_fn ? ((*_XUnlockMutex_fn)(_Xglobal_lock), 0) : 0)
# endif
# endif
# elif defined(XOS_USE_XT_LOCKING)
# ifndef _XtThreadsI_h
# endif
# ifndef _XtintrinsicP_h
# include <X11/Xfuncproto.h>
# if NeedFunctionPrototypes
# endif
# if NeedFunctionPrototypes
# endif
# endif
# ifndef _Xos_isThreadInitialized
#define _Xos_isThreadInitialized _XtProcessLock
# endif
# ifndef _Xos_processLock
#define _Xos_processLock XtProcessLock()
# endif
# ifndef _Xos_processUnlock
#define _Xos_processUnlock XtProcessUnlock()
# endif
# elif defined(XOS_USE_NO_LOCKING)
# ifndef _Xos_isThreadInitialized
#define _Xos_isThreadInitialized 0
# endif
# ifndef _Xos_processLock
#define _Xos_processLock 0
# endif
# ifndef _Xos_processUnlock
#define _Xos_processUnlock 0
# endif
# endif
#endif
#if defined(__sun) && defined(_POSIX_THREAD_SAFE_FUNCTIONS) && (_POSIX_C_SOURCE - 0 < 199506L) && !defined(_POSIX_PTHREAD_SEMANTICS)
#undef _POSIX_THREAD_SAFE_FUNCTIONS
#endif
#if defined(X_INCLUDE_PWD_H) && !defined(_XOS_INCLUDED_PWD_H)
# include <pwd.h>
# if defined(XUSE_MTSAFE_API) || defined(XUSE_MTSAFE_PWDAPI)
#define XOS_USE_MTSAFE_PWDAPI 1
# endif
#endif
#undef X_NEEDS_PWPARAMS
#if !defined(X_INCLUDE_PWD_H) || defined(_XOS_INCLUDED_PWD_H)
#elif !defined(XTHREADS) && !defined(X_FORCE_USE_MTSAFE_API)
# if defined(X_NOT_POSIX) && !defined(__i386__) && !defined(SYSV)
# endif
#define _XGetpwuid(u,p) getpwuid((u))
#define _XGetpwnam(u,p) getpwnam((u))
#elif !defined(XOS_USE_MTSAFE_PWDAPI) || defined(XNO_MTSAFE_PWDAPI)
#define X_NEEDS_PWPARAMS 
#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__DragonFly__)
#else
#define _Xpw_copyPasswd(p) (memcpy(&(p).pws, (p).pwp, sizeof(struct passwd)), ((p).pws.pw_name = (p).pwbuf), ((p).len = strlen((p).pwp->pw_name)), strcpy((p).pws.pw_name, (p).pwp->pw_name), ((p).pws.pw_passwd = (p).pws.pw_name + (p).len + 1), ((p).len = strlen((p).pwp->pw_passwd)), strcpy((p).pws.pw_passwd,(p).pwp->pw_passwd), ((p).pws.pw_age = (p).pws.pw_passwd + (p).len + 1), ((p).len = strlen((p).pwp->pw_age)), strcpy((p).pws.pw_age, (p).pwp->pw_age), ((p).pws.pw_comment = (p).pws.pw_age + (p).len + 1), ((p).len = strlen((p).pwp->pw_comment)), strcpy((p).pws.pw_comment, (p).pwp->pw_comment), ((p).pws.pw_gecos = (p).pws.pw_comment + (p).len + 1), ((p).len = strlen((p).pwp->pw_gecos)), strcpy((p).pws.pw_gecos, (p).pwp->pw_gecos), ((p).pws.pw_dir = (p).pws.pw_comment + (p).len + 1), ((p).len = strlen((p).pwp->pw_dir)), strcpy((p).pws.pw_dir, (p).pwp->pw_dir), ((p).pws.pw_shell = (p).pws.pw_dir + (p).len + 1), ((p).len = strlen((p).pwp->pw_shell)), strcpy((p).pws.pw_shell, (p).pwp->pw_shell), ((p).pwp = &(p).pws), 0 )
#endif
#define _XGetpwuid(u,p) ( (_Xos_processLock), (((p).pwp = getpwuid((u))) ? _Xpw_copyPasswd(p), 0 : 0), (_Xos_processUnlock), (p).pwp )
#define _XGetpwnam(u,p) ( (_Xos_processLock), (((p).pwp = getpwnam((u))) ? _Xpw_copyPasswd(p), 0 : 0), (_Xos_processUnlock), (p).pwp )
#elif !defined(_POSIX_THREAD_SAFE_FUNCTIONS) && !defined(__APPLE__)
#define X_NEEDS_PWPARAMS 
# if defined(_POSIX_REENTRANT_FUNCTIONS) || !defined(SVR4)
#define _XGetpwuid(u,p) ((getpwuid_r((u),&(p).pws,(p).pwbuf,sizeof((p).pwbuf)) == -1) ? NULL : &(p).pws)
#define _XGetpwnam(u,p) ((getpwnam_r((u),&(p).pws,(p).pwbuf,sizeof((p).pwbuf)) == -1) ? NULL : &(p).pws)
# else
#define _XGetpwuid(u,p) ((getpwuid_r((u),&(p).pws,(p).pwbuf,sizeof((p).pwbuf)) == NULL) ? NULL : &(p).pws)
#define _XGetpwnam(u,p) ((getpwnam_r((u),&(p).pws,(p).pwbuf,sizeof((p).pwbuf)) == NULL) ? NULL : &(p).pws)
# endif
#else
#define X_NEEDS_PWPARAMS 
#define _XGetpwuid(u,p) ((getpwuid_r((u),&(p).pws,(p).pwbuf,sizeof((p).pwbuf),&(p).pwp) == 0) ? (p).pwp : NULL)
#define _XGetpwnam(u,p) ((getpwnam_r((u),&(p).pws,(p).pwbuf,sizeof((p).pwbuf),&(p).pwp) == 0) ? (p).pwp : NULL)
#endif
#if defined(X_INCLUDE_PWD_H) && !defined(_XOS_INCLUDED_PWD_H)
#define _XOS_INCLUDED_PWD_H 
#endif
#undef XTHREADS_NEEDS_BYNAMEPARAMS
#if defined(X_INCLUDE_NETDB_H) && !defined(_XOS_INCLUDED_NETDB_H) && !defined(WIN32)
# include <netdb.h>
# if defined(XUSE_MTSAFE_API) || defined(XUSE_MTSAFE_NETDBAPI)
#define XOS_USE_MTSAFE_NETDBAPI 1
# endif
#endif
#if !defined(X_INCLUDE_NETDB_H) || defined(_XOS_INCLUDED_NETDB_H)
#elif !defined(XTHREADS) && !defined(X_FORCE_USE_MTSAFE_API)
#define _XGethostbyname(h,hp) gethostbyname((h))
#define _XGethostbyaddr(a,al,t,hp) gethostbyaddr((a),(al),(t))
#define _XGetservbyname(s,p,sp) getservbyname((s),(p))
#elif !defined(XOS_USE_MTSAFE_NETDBAPI) || defined(XNO_MTSAFE_NETDBAPI)
#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
#include <sys/param.h>
#endif
#define XTHREADS_NEEDS_BYNAMEPARAMS 
#define _Xg_copyHostent(hp) (memcpy(&(hp).hent, (hp).hptr, sizeof(struct hostent)), strcpy((hp).h_name, (hp).hptr->h_name), ((hp).hent.h_name = (hp).h_name), ((hp).hptr = &(hp).hent), 0 )
#define _Xg_copyServent(sp) (memcpy(&(sp).sent, (sp).sptr, sizeof(struct servent)), strcpy((sp).s_name, (sp).sptr->s_name), ((sp).sent.s_name = (sp).s_name), strcpy((sp).s_proto, (sp).sptr->s_proto), ((sp).sent.s_proto = (sp).s_proto), ((sp).sptr = &(sp).sent), 0 )
#define _XGethostbyname(h,hp) ((_Xos_processLock), (((hp).hptr = gethostbyname((h))) ? _Xg_copyHostent(hp) : 0), (_Xos_processUnlock), (hp).hptr )
#define _XGethostbyaddr(a,al,t,hp) ((_Xos_processLock), (((hp).hptr = gethostbyaddr((a),(al),(t))) ? _Xg_copyHostent(hp) : 0), (_Xos_processUnlock), (hp).hptr )
#define _XGetservbyname(s,p,sp) ((_Xos_processLock), (((sp).sptr = getservbyname((s),(p))) ? _Xg_copyServent(sp) : 0), (_Xos_processUnlock), (sp).sptr )
#elif defined(XUSE_NETDB_R_API)
# ifdef _POSIX_REENTRANT_FUNCTIONS
# ifndef _POSIX_THREAD_SAFE_FUNCTIONS
# endif
# endif
# ifdef _POSIX_THREAD_SAFE_FUNCTIONS
#define X_POSIX_THREAD_SAFE_FUNCTIONS 1
# endif
#define XTHREADS_NEEDS_BYNAMEPARAMS 
# ifndef X_POSIX_THREAD_SAFE_FUNCTIONS
#define _XGethostbyname(h,hp) gethostbyname_r((h),&(hp).hent,(hp).hbuf,sizeof((hp).hbuf),&(hp).herr)
#define _XGethostbyaddr(a,al,t,hp) gethostbyaddr_r((a),(al),(t),&(hp).hent,(hp).hbuf,sizeof((hp).hbuf),&(hp).herr)
#define _XGetservbyname(s,p,sp) getservbyname_r((s),(p),&(sp).sent,(sp).sbuf,sizeof((sp).sbuf))
# else
#define _XGethostbyname(h,hp) (bzero((char*)&(hp).hdata,sizeof((hp).hdata)), ((gethostbyname_r((h),&(hp).hent,&(hp).hdata) == -1) ? NULL : &(hp).hent))
#define _XGethostbyaddr(a,al,t,hp) (bzero((char*)&(hp).hdata,sizeof((hp).hdata)), ((gethostbyaddr_r((a),(al),(t),&(hp).hent,&(hp).hdata) == -1) ? NULL : &(hp).hent))
#define _XGetservbyname(s,p,sp) (bzero((char*)&(sp).sdata,sizeof((sp).sdata)), ((getservbyname_r((s),(p),&(sp).sent,&(sp).sdata) == -1) ? NULL : &(sp).sent) )
# endif
# ifdef X_POSIX_THREAD_SAFE_FUNCTIONS
#undef X_POSIX_THREAD_SAFE_FUNCTIONS
# endif
#else
#define _XGethostbyname(h,hp) gethostbyname((h))
#define _XGethostbyaddr(a,al,t,hp) gethostbyaddr((a),(al),(t))
#define _XGetservbyname(s,p,sp) getservbyname((s),(p))
#endif
#if defined(X_INCLUDE_NETDB_H) && !defined(_XOS_INCLUDED_NETDB_H)
#define _XOS_INCLUDED_NETDB_H 
#endif
#if defined(X_INCLUDE_DIRENT_H) && !defined(_XOS_INCLUDED_DIRENT_H)
# include <sys/types.h>
# if !defined(X_NOT_POSIX) || defined(SYSV)
# include <dirent.h>
# else
# include <sys/dir.h>
# ifndef dirent
#define dirent direct
# endif
# endif
# if defined(XUSE_MTSAFE_API) || defined(XUSE_MTSAFE_DIRENTAPI)
#define XOS_USE_MTSAFE_DIRENTAPI 1
# endif
#endif
#if !defined(X_INCLUDE_DIRENT_H) || defined(_XOS_INCLUDED_DIRENT_H)
#elif !defined(XTHREADS) && !defined(X_FORCE_USE_MTSAFE_API)
#define _XReaddir(d,p) readdir(d)
#elif !defined(XOS_USE_MTSAFE_DIRENTAPI) || defined(XNO_MTSAFE_DIRENTAPI)
# ifdef _POSIX_PATH_MAX
# elif defined(NAME_MAX)
# else
# endif
#define _XReaddir(d,p) ( (_Xos_processLock), (((p).result = readdir((d))) ? (memcpy(&((p).dir_entry), (p).result, (p).result->d_reclen), ((p).result = &(p).dir_entry), 0) : 0), (_Xos_processUnlock), (p).result )
#else
# ifdef _POSIX_PATH_MAX
# elif defined(NAME_MAX)
# else
# endif
# if defined(_POSIX_THREAD_SAFE_FUNCTIONS) || defined(__APPLE__)
#define _XReaddir(d,p) (readdir_r((d), &((p).dir_entry), &((p).result)) ? NULL : (p).result)
# elif defined(_POSIX_REENTRANT_FUNCTIONS)
#define _XReaddir(d,p) (readdir_r((d),&((p).dir_entry)) ? NULL : &((p).dir_entry))
# elif defined(SVR4)
#define _XReaddir(d,p) (readdir_r((d), &(p).dir_entry))
# else
#define _XReaddir(d,p) ( (_Xos_processLock), (((p).result = readdir((d))) ? (memcpy(&((p).dir_entry), (p).result, (p).result->d_reclen), ((p).result = &(p).dir_entry), 0) : 0), (_Xos_processUnlock), (p).result )
# endif
#endif
#if defined(X_INCLUDE_DIRENT_H) && !defined(_XOS_INCLUDED_DIRENT_H)
#define _XOS_INCLUDED_DIRENT_H 
#endif
#if defined(X_INCLUDE_UNISTD_H) && !defined(_XOS_INCLUDED_UNISTD_H)
# if defined(XUSE_MTSAFE_API) || defined(XUSE_MTSAFE_UNISTDAPI)
#define XOS_USE_MTSAFE_UNISTDAPI 1
# endif
#endif
#if !defined(X_INCLUDE_UNISTD_H) || defined(_XOS_INCLUDED_UNISTD_H)
#elif !defined(XTHREADS) && !defined(X_FORCE_USE_MTSAFE_API)
#define _XGetlogin(p) getlogin()
#define _XTtyname(f) ttyname((f))
#elif !defined(XOS_USE_MTSAFE_UNISTDAPI) || defined(XNO_MTSAFE_UNISTDAPI)
# if defined(MAXLOGNAME)
# elif defined(LOGIN_NAME_MAX)
# else
# endif
# ifdef TTY_NAME_MAX
# elif defined(_POSIX_TTY_NAME_MAX)
# elif defined(_POSIX_PATH_MAX)
# else
# endif
#define _XGetlogin(p) ( (_Xos_processLock), (((p).result = getlogin()) ? (strncpy((p).buf, (p).result, sizeof((p).buf)), ((p).buf[sizeof((p).buf)-1] = '\0'), ((p).result = (p).buf), 0) : 0), (_Xos_processUnlock), (p).result )
#define _XTtyname(f,p) ( (_Xos_processLock), (((p).result = ttyname(f)) ? (strncpy((p).buf, (p).result, sizeof((p).buf)), ((p).buf[sizeof((p).buf)-1] = '\0'), ((p).result = (p).buf), 0) : 0), (_Xos_processUnlock), (p).result )
#elif defined(_POSIX_THREAD_SAFE_FUNCTIONS) || defined(_POSIX_REENTRANT_FUNCTIONS)
# if defined(MAXLOGNAME)
# elif defined(LOGIN_NAME_MAX)
# else
# endif
# ifdef TTY_NAME_MAX
# elif defined(_POSIX_TTY_NAME_MAX)
# elif defined(_POSIX_PATH_MAX)
# else
# endif
#define _XGetlogin(p) (getlogin_r((p).buf, sizeof((p).buf)) ? NULL : (p).buf)
#define _XTtyname(f,p) (ttyname_r((f), (p).buf, sizeof((p).buf)) ? NULL : (p).buf)
#else
# if defined(MAXLOGNAME)
# elif defined(LOGIN_NAME_MAX)
# else
# endif
# ifdef TTY_NAME_MAX
# elif defined(_POSIX_TTY_NAME_MAX)
# elif defined(_POSIX_PATH_MAX)
# else
# endif
#define _XGetlogin(p) getlogin_r((p).buf, sizeof((p).buf))
#define _XTtyname(f,p) ttyname_r((f), (p).buf, sizeof((p).buf))
#endif
#if defined(X_INCLUDE_UNISTD_H) && !defined(_XOS_INCLUDED_UNISTD_H)
#define _XOS_INCLUDED_UNISTD_H 
#endif
#if defined(X_INCLUDE_STRING_H) && !defined(_XOS_INCLUDED_STRING_H)
# if defined(XUSE_MTSAFE_API) || defined(XUSE_MTSAFE_STRINGAPI)
#define XOS_USE_MTSAFE_STRINGAPI 1
# endif
#endif
#if !defined(X_INCLUDE_STRING_H) || defined(_XOS_INCLUDED_STRING_H)
#elif !defined(XTHREADS) && !defined(X_FORCE_USE_MTSAFE_API)
#define _XStrtok(s1,s2,p) ( p = 0, (void)p, strtok((s1),(s2)) )
#elif !defined(XOS_USE_MTSAFE_STRINGAPI) || defined(XNO_MTSAFE_STRINGAPI)
#define _XStrtok(s1,s2,p) ( (_Xos_processLock), ((p) = strtok((s1),(s2))), (_Xos_processUnlock), (p) )
#else
#define _XStrtok(s1,s2,p) strtok_r((s1),(s2),&(p))
#endif
#if defined(X_INCLUDE_TIME_H) && !defined(_XOS_INCLUDED_TIME_H)
# include <time.h>
# if defined(XUSE_MTSAFE_API) || defined(XUSE_MTSAFE_TIMEAPI)
#define XOS_USE_MTSAFE_TIMEAPI 1
# endif
#endif
#if !defined(X_INCLUDE_TIME_H) || defined(_XOS_INCLUDED_TIME_H)
#elif !defined(XTHREADS) && !defined(X_FORCE_USE_MTSAFE_API)
#define _XAsctime(t,p) asctime((t))
#define _XCtime(t,p) ctime((t))
#define _XGmtime(t,p) gmtime((t))
#define _XLocaltime(t,p) localtime((t))
#elif !defined(XOS_USE_MTSAFE_TIMEAPI) || defined(XNO_MTSAFE_TIMEAPI)
# ifdef TIMELEN
# else
# endif
#define _XAsctime(t,p) ( (_Xos_processLock), (((p).result = asctime((t))) ? (strncpy((p).buf, (p).result, sizeof((p).buf)), (p).result = &(p).buf) : 0), (_Xos_processUnlock), (p).result )
#define _XCtime(t,p) ( (_Xos_processLock), (((p).result = ctime((t))) ? (strncpy((p).buf, (p).result, sizeof((p).buf)), (p).result = &(p).buf) : 0), (_Xos_processUnlock), (p).result )
#define _XGmtime(t,p) ( (_Xos_processLock), (((p).result = gmtime(t)) ? (memcpy(&(p).buf, (p).result, sizeof((p).buf)), (p).result = &(p).buf) : 0), (_Xos_processUnlock), (p).result )
#define _XLocaltime(t,p) ( (_Xos_processLock), (((p).result = localtime(t)) ? (memcpy(&(p).buf, (p).result, sizeof((p).buf)), (p).result = &(p).buf) : 0), (_Xos_processUnlock), (p).result )
#elif !defined(_POSIX_THREAD_SAFE_FUNCTIONS) && defined(hpV4)
# ifdef TIMELEN
# else
# endif
#define _XAsctime(t,p) (asctime_r((t),(p),sizeof((p))) ? NULL : (p))
#define _XCtime(t,p) (ctime_r((t),(p),sizeof((p))) ? NULL : (p))
#define _XGmtime(t,p) (gmtime_r((t),&(p)) ? NULL : &(p))
#define _XLocaltime(t,p) (localtime_r((t),&(p)) ? NULL : &(p))
#elif !defined(_POSIX_THREAD_SAFE_FUNCTIONS) && defined(__sun)
# ifdef TIMELEN
# else
# endif
#define _XAsctime(t,p) asctime_r((t),(p),sizeof((p)))
#define _XCtime(t,p) ctime_r((t),(p),sizeof((p)))
#define _XGmtime(t,p) gmtime_r((t),&(p))
#define _XLocaltime(t,p) localtime_r((t),&(p))
#else
# ifdef TIMELEN
# else
# endif
#define _XAsctime(t,p) asctime_r((t),(p))
#define _XCtime(t,p) ctime_r((t),(p))
#define _XGmtime(t,p) gmtime_r((t),&(p))
#define _XLocaltime(t,p) localtime_r((t),&(p))
#endif
#if defined(X_INCLUDE_TIME_H) && !defined(_XOS_INCLUDED_TIME_H)
#define _XOS_INCLUDED_TIME_H 
#endif
#if defined(X_INCLUDE_GRP_H) && !defined(_XOS_INCLUDED_GRP_H)
# include <grp.h>
# if defined(XUSE_MTSAFE_API) || defined(XUSE_MTSAFE_GRPAPI)
#define XOS_USE_MTSAFE_GRPAPI 1
# endif
#endif
#if !defined(X_INCLUDE_GRP_H) || defined(_XOS_INCLUDED_GRP_H)
#elif !defined(XTHREADS) && !defined(X_FORCE_USE_MTSAFE_API)
#define _XGetgrgid(g,p) getgrgid((g))
#define _XGetgrnam(n,p) getgrnam((n))
#elif !defined(XOS_USE_MTSAFE_GRPAPI) || defined(XNO_MTSAFE_GRPAPI)
#ifdef SVR4
#define _Xgrp_copyGroup(p) ( memcpy(&(p).grp, (p).pgrp, sizeof(struct group)), ((p).grp.gr_name = (p).buf), ((p).len = strlen((p).pgrp->gr_name)), strcpy((p).grp.gr_name, (p).pgrp->gr_name), ((p).grp.gr_passwd = (p).grp.gr_name + (p).len + 1), ((p).pgrp = &(p).grp), 0 )
#else
#define _Xgrp_copyGroup(p) ( memcpy(&(p).grp, (p).pgrp, sizeof(struct group)), ((p).grp.gr_name = (p).buf), strcpy((p).grp.gr_name, (p).pgrp->gr_name), ((p).pgrp = &(p).grp), 0 )
#endif
#define _XGetgrgid(g,p) ( (_Xos_processLock), (((p).pgrp = getgrgid((g))) ? _Xgrp_copyGroup(p) : 0), (_Xos_processUnlock), (p).pgrp )
#define _XGetgrnam(n,p) ( (_Xos_processLock), (((p).pgrp = getgrnam((n))) ? _Xgrp_copyGroup(p) : 0), (_Xos_processUnlock), (p).pgrp )
#elif !defined(_POSIX_THREAD_SAFE_FUNCTIONS) && defined(__sun)
#define _XGetgrgid(g,p) getgrgid_r((g), &(p).grp, (p).buf, sizeof((p).buf))
#define _XGetgrnam(n,p) getgrnam_r((n), &(p).grp, (p).buf, sizeof((p).buf))
#elif !defined(_POSIX_THREAD_SAFE_FUNCTIONS)
#define _XGetgrgid(g,p) ((getgrgid_r((g), &(p).grp, (p).buf, sizeof((p).buf)) ? NULL : &(p).grp))
#define _XGetgrnam(n,p) ((getgrnam_r((n), &(p).grp, (p).buf, sizeof((p).buf)) ? NULL : &(p).grp))
#else
#define _XGetgrgid(g,p) ((getgrgid_r((g), &(p).grp, (p).buf, sizeof((p).buf), &(p).result) ? NULL : (p).result))
#define _XGetgrnam(n,p) ((getgrnam_r((n), &(p).grp, (p).buf, sizeof((p).buf), &(p).result) ? NULL : (p).result))
#endif
#if defined(X_INCLUDE_GRP_H) && !defined(_XOS_INCLUDED_GRP_H)
#define _XOS_INCLUDED_GRP_H 
#endif
#ifdef __cplusplus
#endif
