// GGHASH:Vl_KK1pcDEOq7ym_VTUk1xd8LBlWhHFasMKNmpzXuK.00000bea6
#ifndef __Inc__IPerl___
#define __Inc__IPerl___ 
#include "perlio.h"
#ifndef Sighandler_t
# if defined(HAS_SIGACTION) && defined(SA_SIGINFO)
# else
# endif
#endif
#if defined(PERL_IMPLICIT_SYS)
#ifndef NETWARE
#elif defined(NETWARE)
#endif
#ifdef USE_STDIO_PTR
#define PerlSIO_has_cntptr(f) 1
# ifdef STDIO_PTR_LVALUE
# ifdef STDIO_CNT_LVALUE
#define PerlSIO_canset_cnt(f) 1
# ifdef STDIO_PTR_LVAL_NOCHANGE_CNT
#define PerlSIO_fast_gets(f) 1
# endif
# else
#define PerlSIO_canset_cnt(f) 0
# endif
# else
# ifdef STDIO_PTR_LVAL_SETS_CNT
#define PerlSIO_fast_gets(f) 1
# endif
# endif
#else
#define PerlSIO_has_cntptr(f) 0
#define PerlSIO_canset_cnt(f) 0
#endif
#ifndef PerlSIO_fast_gets
#define PerlSIO_fast_gets(f) 0
#endif
#ifdef FILE_base
#define PerlSIO_has_base(f) 1
#else
#define PerlSIO_has_base(f) 0
#endif
#define PerlSIO_stdin (*PL_StdIO->pStdin)(PL_StdIO)
#define PerlSIO_stdout (*PL_StdIO->pStdout)(PL_StdIO)
#define PerlSIO_stderr (*PL_StdIO->pStderr)(PL_StdIO)
#define PerlSIO_fopen(x,y) (*PL_StdIO->pOpen)(PL_StdIO, (x),(y))
#define PerlSIO_fclose(f) (*PL_StdIO->pClose)(PL_StdIO, (f))
#define PerlSIO_feof(f) (*PL_StdIO->pEof)(PL_StdIO, (f))
#define PerlSIO_ferror(f) (*PL_StdIO->pError)(PL_StdIO, (f))
#define PerlSIO_clearerr(f) (*PL_StdIO->pClearerr)(PL_StdIO, (f))
#define PerlSIO_fgetc(f) (*PL_StdIO->pGetc)(PL_StdIO, (f))
#define PerlSIO_get_base(f) (*PL_StdIO->pGetBase)(PL_StdIO, (f))
#define PerlSIO_get_bufsiz(f) (*PL_StdIO->pGetBufsiz)(PL_StdIO, (f))
#define PerlSIO_get_cnt(f) (*PL_StdIO->pGetCnt)(PL_StdIO, (f))
#define PerlSIO_get_ptr(f) (*PL_StdIO->pGetPtr)(PL_StdIO, (f))
#define PerlSIO_fputc(c,f) (*PL_StdIO->pPutc)(PL_StdIO, (c),(f))
#define PerlSIO_fputs(s,f) (*PL_StdIO->pPuts)(PL_StdIO, (s),(f))
#define PerlSIO_fflush(f) (*PL_StdIO->pFlush)(PL_StdIO, (f))
#define PerlSIO_fgets(s,n,f) (*PL_StdIO->pGets)(PL_StdIO, s, n, (f))
#define PerlSIO_ungetc(c,f) (*PL_StdIO->pUngetc)(PL_StdIO, (c),(f))
#define PerlSIO_fileno(f) (*PL_StdIO->pFileno)(PL_StdIO, (f))
#define PerlSIO_fdopen(f,s) (*PL_StdIO->pFdopen)(PL_StdIO, (f),(s))
#define PerlSIO_freopen(p,m,f) (*PL_StdIO->pReopen)(PL_StdIO, (p), (m), (f))
#define PerlSIO_fread(buf,sz,count,f) (*PL_StdIO->pRead)(PL_StdIO, (buf), (sz), (count), (f))
#define PerlSIO_fwrite(buf,sz,count,f) (*PL_StdIO->pWrite)(PL_StdIO, (buf), (sz), (count), (f))
#define PerlSIO_setbuf(f,b) (*PL_StdIO->pSetBuf)(PL_StdIO, (f), (b))
#define PerlSIO_setvbuf(f,b,t,s) (*PL_StdIO->pSetVBuf)(PL_StdIO, (f),(b),(t),(s))
#define PerlSIO_set_cnt(f,c) (*PL_StdIO->pSetCnt)(PL_StdIO, (f), (c))
#define PerlSIO_set_ptr(f,p) (*PL_StdIO->pSetPtr)(PL_StdIO, (f), (p))
#define PerlSIO_setlinebuf(f) (*PL_StdIO->pSetlinebuf)(PL_StdIO, (f))
#define PerlSIO_printf Perl_fprintf_nocontext
#define PerlSIO_stdoutf Perl_printf_nocontext
#define PerlSIO_vprintf(f,fmt,a) (*PL_StdIO->pVprintf)(PL_StdIO, (f),(fmt),a)
#define PerlSIO_ftell(f) (*PL_StdIO->pTell)(PL_StdIO, (f))
#define PerlSIO_fseek(f,o,w) (*PL_StdIO->pSeek)(PL_StdIO, (f),(o),(w))
#define PerlSIO_fgetpos(f,p) (*PL_StdIO->pGetpos)(PL_StdIO, (f),(p))
#define PerlSIO_fsetpos(f,p) (*PL_StdIO->pSetpos)(PL_StdIO, (f),(p))
#define PerlSIO_rewind(f) (*PL_StdIO->pRewind)(PL_StdIO, (f))
#define PerlSIO_tmpfile() (*PL_StdIO->pTmpfile)(PL_StdIO)
#define PerlSIO_init() (*PL_StdIO->pInit)(PL_StdIO)
#undef init_os_extras
#define init_os_extras() (*PL_StdIO->pInitOSExtras)(PL_StdIO)
#define PerlSIO_fdupopen(f) (*PL_StdIO->pFdupopen)(PL_StdIO, (f))
#else
#define PerlSIO_stdin stdin
#define PerlSIO_stdout stdout
#define PerlSIO_stderr stderr
#define PerlSIO_fopen(x,y) fopen(x,y)
#ifdef __VOS__
#define PerlSIO_fclose(f) (((errno==1025)?errno=0:0),fclose(f))
#define PerlSIO_feof(f) (((errno==1025)?errno=0:0),feof(f))
#define PerlSIO_ferror(f) (((errno==1025)?errno=0:0),ferror(f))
#else
#define PerlSIO_fclose(f) fclose(f)
#define PerlSIO_feof(f) feof(f)
#define PerlSIO_ferror(f) ferror(f)
#endif
#define PerlSIO_clearerr(f) clearerr(f)
#define PerlSIO_fgetc(f) fgetc(f)
#ifdef FILE_base
#define PerlSIO_get_base(f) FILE_base(f)
#define PerlSIO_get_bufsiz(f) FILE_bufsiz(f)
#else
#define PerlSIO_get_base(f) NULL
#define PerlSIO_get_bufsiz(f) 0
#endif
#ifdef USE_STDIO_PTR
#define PerlSIO_get_cnt(f) FILE_cnt(f)
#define PerlSIO_get_ptr(f) FILE_ptr(f)
#else
#define PerlSIO_get_cnt(f) 0
#define PerlSIO_get_ptr(f) NULL
#endif
#define PerlSIO_fputc(c,f) fputc(c,f)
#define PerlSIO_fputs(s,f) fputs(s,f)
#define PerlSIO_fflush(f) Fflush(f)
#define PerlSIO_fgets(s,n,f) fgets(s,n,f)
#if defined(__VMS)
#define PerlSIO_ungetc(c,f) ((c) == EOF ? EOF : ((*(f) && !((*(f))->_flag & _IONBF) && ((*(f))->_ptr > (*(f))->_base)) ? ((*(f))->_cnt++, *(--(*(f))->_ptr) = (c)) : decc$ungetc(c,f)))
#else
#define PerlSIO_ungetc(c,f) ungetc(c,f)
#endif
#define PerlSIO_fileno(f) fileno(f)
#define PerlSIO_fdopen(f,s) fdopen(f,s)
#define PerlSIO_freopen(p,m,f) freopen(p,m,f)
#define PerlSIO_fread(buf,sz,count,f) fread(buf,sz,count,f)
#define PerlSIO_fwrite(buf,sz,count,f) fwrite(buf,sz,count,f)
#define PerlSIO_setbuf(f,b) setbuf(f,b)
#define PerlSIO_setvbuf(f,b,t,s) setvbuf(f,b,t,s)
#if defined(USE_STDIO_PTR) && defined(STDIO_CNT_LVALUE)
#define PerlSIO_set_cnt(f,c) FILE_cnt(f) = (c)
#else
#define PerlSIO_set_cnt(f,c) PerlIOProc_abort()
#endif
#if defined(USE_STDIO_PTR) && defined(STDIO_PTR_LVALUE)
#define PerlSIO_set_ptr(f,p) (FILE_ptr(f) = (p))
#else
#define PerlSIO_set_ptr(f,p) PerlIOProc_abort()
#endif
#define PerlSIO_setlinebuf(f) setlinebuf(f)
#define PerlSIO_printf fprintf
#define PerlSIO_stdoutf printf
#define PerlSIO_vprintf(f,fmt,a) vfprintf(f,fmt,a)
#define PerlSIO_ftell(f) ftell(f)
#define PerlSIO_fseek(f,o,w) fseek(f,o,w)
#define PerlSIO_fgetpos(f,p) fgetpos(f,p)
#define PerlSIO_fsetpos(f,p) fsetpos(f,p)
#define PerlSIO_rewind(f) rewind(f)
#define PerlSIO_tmpfile() tmpfile()
#define PerlSIO_fdupopen(f) (f)
#endif
#if defined(PERL_IMPLICIT_SYS)
#ifdef WIN32
#endif
#ifdef WIN32
#endif
#define PerlDir_mkdir(name,mode) (*PL_Dir->pMakedir)(PL_Dir, (name), (mode))
#define PerlDir_chdir(name) (*PL_Dir->pChdir)(PL_Dir, (name))
#define PerlDir_rmdir(name) (*PL_Dir->pRmdir)(PL_Dir, (name))
#define PerlDir_close(dir) (*PL_Dir->pClose)(PL_Dir, (dir))
#define PerlDir_open(name) (*PL_Dir->pOpen)(PL_Dir, (name))
#define PerlDir_read(dir) (*PL_Dir->pRead)(PL_Dir, (dir))
#define PerlDir_rewind(dir) (*PL_Dir->pRewind)(PL_Dir, (dir))
#define PerlDir_seek(dir,loc) (*PL_Dir->pSeek)(PL_Dir, (dir), (loc))
#define PerlDir_tell(dir) (*PL_Dir->pTell)(PL_Dir, (dir))
#ifdef WIN32
#define PerlDir_mapA(dir) (*PL_Dir->pMapPathA)(PL_Dir, (dir))
#define PerlDir_mapW(dir) (*PL_Dir->pMapPathW)(PL_Dir, (dir))
#endif
#else
#define PerlDir_mkdir(name,mode) Mkdir((name), (mode))
#ifdef VMS
#define PerlDir_chdir(n) Chdir((n))
#else
#define PerlDir_chdir(name) chdir((name))
#endif
#define PerlDir_rmdir(name) rmdir((name))
#define PerlDir_close(dir) closedir((dir))
#define PerlDir_open(name) opendir((name))
#define PerlDir_read(dir) readdir((dir))
#define PerlDir_rewind(dir) rewinddir((dir))
#define PerlDir_seek(dir,loc) seekdir((dir), (loc))
#define PerlDir_tell(dir) telldir((dir))
#ifdef WIN32
#define PerlDir_mapA(dir) dir
#define PerlDir_mapW(dir) dir
#endif
#endif
#if defined(PERL_IMPLICIT_SYS)
#ifdef HAS_ENVGETENV
#endif
#ifdef WIN32
#endif
#ifdef HAS_ENVGETENV
#endif
#ifdef WIN32
#endif
#define PerlEnv_putenv(str) (*PL_Env->pPutenv)(PL_Env,(str))
#define PerlEnv_getenv(str) (*PL_Env->pGetenv)(PL_Env,(str))
#define PerlEnv_getenv_len(str,l) (*PL_Env->pGetenv_len)(PL_Env,(str), (l))
#define PerlEnv_clearenv() (*PL_Env->pClearenv)(PL_Env)
#define PerlEnv_get_childenv() (*PL_Env->pGetChildenv)(PL_Env)
#define PerlEnv_free_childenv(e) (*PL_Env->pFreeChildenv)(PL_Env, (e))
#define PerlEnv_get_childdir() (*PL_Env->pGetChilddir)(PL_Env)
#define PerlEnv_free_childdir(d) (*PL_Env->pFreeChilddir)(PL_Env, (d))
#ifdef HAS_ENVGETENV
#define PerlEnv_ENVgetenv(str) (*PL_Env->pENVGetenv)(PL_Env,(str))
#define PerlEnv_ENVgetenv_len(str,l) (*PL_Env->pENVGetenv_len)(PL_Env,(str), (l))
#else
#define PerlEnv_ENVgetenv(str) PerlEnv_getenv((str))
#define PerlEnv_ENVgetenv_len(str,l) PerlEnv_getenv_len((str),(l))
#endif
#define PerlEnv_uname(name) (*PL_Env->pEnvUname)(PL_Env,(name))
#ifdef WIN32
#define PerlEnv_os_id() (*PL_Env->pEnvOsID)(PL_Env)
#define PerlEnv_lib_path(str,lenp) (*PL_Env->pLibPath)(PL_Env,WIN32_NO_REGISTRY_M_(str)(lenp))
#define PerlEnv_sitelib_path(str,lenp) (*PL_Env->pSiteLibPath)(PL_Env,(str),(lenp))
#define PerlEnv_vendorlib_path(str,lenp) (*PL_Env->pVendorLibPath)(PL_Env,(str),(lenp))
#define PerlEnv_get_child_IO(ptr) (*PL_Env->pGetChildIO)(PL_Env, ptr)
#endif
#else
#define PerlEnv_putenv(str) putenv((str))
#define PerlEnv_getenv(str) getenv((str))
#define PerlEnv_getenv_len(str,l) getenv_len((str), (l))
#ifdef HAS_ENVGETENV
#define PerlEnv_ENVgetenv(str) ENVgetenv((str))
#define PerlEnv_ENVgetenv_len(str,l) ENVgetenv_len((str), (l))
#else
#define PerlEnv_ENVgetenv(str) PerlEnv_getenv((str))
#define PerlEnv_ENVgetenv_len(str,l) PerlEnv_getenv_len((str), (l))
#endif
#define PerlEnv_uname(name) uname((name))
#ifdef WIN32
#define PerlEnv_os_id() win32_os_id()
#define PerlEnv_lib_path(str,lenp) win32_get_privlib(WIN32_NO_REGISTRY_M_(str) lenp)
#define PerlEnv_sitelib_path(str,lenp) win32_get_sitelib(str, lenp)
#define PerlEnv_vendorlib_path(str,lenp) win32_get_vendorlib(str, lenp)
#define PerlEnv_get_child_IO(ptr) win32_get_child_IO(ptr)
#define PerlEnv_clearenv() win32_clearenv()
#define PerlEnv_get_childenv() win32_get_childenv()
#define PerlEnv_free_childenv(e) win32_free_childenv((e))
#define PerlEnv_get_childdir() win32_get_childdir()
#define PerlEnv_free_childdir(d) win32_free_childdir((d))
#else
#define PerlEnv_clearenv() clearenv()
#define PerlEnv_get_childenv() get_childenv()
#define PerlEnv_free_childenv(e) free_childenv((e))
#define PerlEnv_get_childdir() get_childdir()
#define PerlEnv_free_childdir(d) free_childdir((d))
#endif
#endif
#if defined(PERL_IMPLICIT_SYS)
#ifdef NETWARE
#else
#endif
#define PerlLIO_access(file,mode) (*PL_LIO->pAccess)(PL_LIO, (file), (mode))
#define PerlLIO_chmod(file,mode) (*PL_LIO->pChmod)(PL_LIO, (file), (mode))
#define PerlLIO_chown(file,owner,group) (*PL_LIO->pChown)(PL_LIO, (file), (owner), (group))
#define PerlLIO_chsize(fd,size) (*PL_LIO->pChsize)(PL_LIO, (fd), (size))
#define PerlLIO_close(fd) (*PL_LIO->pClose)(PL_LIO, (fd))
#define PerlLIO_dup(fd) (*PL_LIO->pDup)(PL_LIO, (fd))
#define PerlLIO_dup2(fd1,fd2) (*PL_LIO->pDup2)(PL_LIO, (fd1), (fd2))
#define PerlLIO_flock(fd,op) (*PL_LIO->pFlock)(PL_LIO, (fd), (op))
#define PerlLIO_fstat(fd,buf) (*PL_LIO->pFileStat)(PL_LIO, (fd), (buf))
#define PerlLIO_ioctl(fd,u,buf) (*PL_LIO->pIOCtl)(PL_LIO, (fd), (u), (buf))
#define PerlLIO_isatty(fd) (*PL_LIO->pIsatty)(PL_LIO, (fd))
#define PerlLIO_link(oldname,newname) (*PL_LIO->pLink)(PL_LIO, (oldname), (newname))
#define PerlLIO_lseek(fd,offset,mode) (*PL_LIO->pLseek)(PL_LIO, (fd), (offset), (mode))
#define PerlLIO_lstat(name,buf) (*PL_LIO->pLstat)(PL_LIO, (name), (buf))
#define PerlLIO_mktemp(file) (*PL_LIO->pMktemp)(PL_LIO, (file))
#define PerlLIO_open(file,flag) (*PL_LIO->pOpen)(PL_LIO, (file), (flag))
#define PerlLIO_open3(file,flag,perm) (*PL_LIO->pOpen3)(PL_LIO, (file), (flag), (perm))
#define PerlLIO_read(fd,buf,count) (*PL_LIO->pRead)(PL_LIO, (fd), (buf), (count))
#define PerlLIO_rename(oname,newname) (*PL_LIO->pRename)(PL_LIO, (oname), (newname))
#define PerlLIO_setmode(fd,mode) (*PL_LIO->pSetmode)(PL_LIO, (fd), (mode))
#define PerlLIO_stat(name,buf) (*PL_LIO->pNameStat)(PL_LIO, (name), (buf))
#define PerlLIO_tmpnam(str) (*PL_LIO->pTmpnam)(PL_LIO, (str))
#define PerlLIO_umask(mode) (*PL_LIO->pUmask)(PL_LIO, (mode))
#define PerlLIO_unlink(file) (*PL_LIO->pUnlink)(PL_LIO, (file))
#define PerlLIO_utime(file,time) (*PL_LIO->pUtime)(PL_LIO, (file), (time))
#define PerlLIO_write(fd,buf,count) (*PL_LIO->pWrite)(PL_LIO, (fd), (buf), (count))
#else
#define PerlLIO_access(file,mode) access((file), (mode))
#define PerlLIO_chmod(file,mode) chmod((file), (mode))
#define PerlLIO_chown(file,owner,grp) chown((file), (owner), (grp))
#if defined(HAS_TRUNCATE)
#define PerlLIO_chsize(fd,size) ftruncate((fd), (size))
#elif defined(HAS_CHSIZE)
#define PerlLIO_chsize(fd,size) chsize((fd), (size))
#else
#define PerlLIO_chsize(fd,size) my_chsize((fd), (size))
#endif
#define PerlLIO_close(fd) close((fd))
#define PerlLIO_dup(fd) dup((fd))
#define PerlLIO_dup2(fd1,fd2) dup2((fd1), (fd2))
#define PerlLIO_flock(fd,op) FLOCK((fd), (op))
#define PerlLIO_fstat(fd,buf) Fstat((fd), (buf))
#define PerlLIO_ioctl(fd,u,buf) ioctl((fd), (u), (buf))
#define PerlLIO_isatty(fd) isatty((fd))
#define PerlLIO_link(oldname,newname) link((oldname), (newname))
#define PerlLIO_lseek(fd,offset,mode) lseek((fd), (offset), (mode))
#define PerlLIO_stat(name,buf) Stat((name), (buf))
#ifdef HAS_LSTAT
#define PerlLIO_lstat(name,buf) lstat((name), (buf))
#else
#define PerlLIO_lstat(name,buf) PerlLIO_stat((name), (buf))
#endif
#define PerlLIO_mktemp(file) mktemp((file))
#define PerlLIO_mkstemp(file) mkstemp((file))
#define PerlLIO_open(file,flag) open((file), (flag))
#define PerlLIO_open3(file,flag,perm) open((file), (flag), (perm))
#define PerlLIO_read(fd,buf,count) read((fd), (buf), (count))
#define PerlLIO_rename(old,new) rename((old), (new))
#define PerlLIO_setmode(fd,mode) setmode((fd), (mode))
#define PerlLIO_tmpnam(str) tmpnam((str))
#define PerlLIO_umask(mode) umask((mode))
#define PerlLIO_unlink(file) unlink((file))
#define PerlLIO_utime(file,time) utime((file), (time))
#define PerlLIO_write(fd,buf,count) write((fd), (buf), (count))
#endif
#if defined(PERL_IMPLICIT_SYS)
#define PerlMem_malloc(size) (*PL_Mem->pMalloc)(PL_Mem, (size))
#define PerlMem_realloc(buf,size) (*PL_Mem->pRealloc)(PL_Mem, (buf), (size))
#define PerlMem_free(buf) (*PL_Mem->pFree)(PL_Mem, (buf))
#define PerlMem_calloc(num,size) (*PL_Mem->pCalloc)(PL_Mem, (num), (size))
#define PerlMem_get_lock() (*PL_Mem->pGetLock)(PL_Mem)
#define PerlMem_free_lock() (*PL_Mem->pFreeLock)(PL_Mem)
#define PerlMem_is_locked() (*PL_Mem->pIsLocked)(PL_Mem)
#ifdef NETWARE
#define PerlMemShared_malloc(size) (*PL_Mem->pMalloc)(PL_Mem, (size))
#define PerlMemShared_realloc(buf,size) (*PL_Mem->pRealloc)(PL_Mem, (buf), (size))
#define PerlMemShared_free(buf) (*PL_Mem->pFree)(PL_Mem, (buf))
#define PerlMemShared_calloc(num,size) (*PL_Mem->pCalloc)(PL_Mem, (num), (size))
#define PerlMemShared_get_lock() (*PL_Mem->pGetLock)(PL_Mem)
#define PerlMemShared_free_lock() (*PL_Mem->pFreeLock)(PL_Mem)
#define PerlMemShared_is_locked() (*PL_Mem->pIsLocked)(PL_Mem)
#else
#define PerlMemShared_malloc(size) (*PL_MemShared->pMalloc)(PL_MemShared, (size))
#define PerlMemShared_realloc(buf,size) (*PL_MemShared->pRealloc)(PL_MemShared, (buf), (size))
#define PerlMemShared_free(buf) (*PL_MemShared->pFree)(PL_MemShared, (buf))
#define PerlMemShared_calloc(num,size) (*PL_MemShared->pCalloc)(PL_MemShared, (num), (size))
#define PerlMemShared_get_lock() (*PL_MemShared->pGetLock)(PL_MemShared)
#define PerlMemShared_free_lock() (*PL_MemShared->pFreeLock)(PL_MemShared)
#define PerlMemShared_is_locked() (*PL_MemShared->pIsLocked)(PL_MemShared)
#endif
#define PerlMemParse_malloc(size) (*PL_MemParse->pMalloc)(PL_MemParse, (size))
#define PerlMemParse_realloc(buf,size) (*PL_MemParse->pRealloc)(PL_MemParse, (buf), (size))
#define PerlMemParse_free(buf) (*PL_MemParse->pFree)(PL_MemParse, (buf))
#define PerlMemParse_calloc(num,size) (*PL_MemParse->pCalloc)(PL_MemParse, (num), (size))
#define PerlMemParse_get_lock() (*PL_MemParse->pGetLock)(PL_MemParse)
#define PerlMemParse_free_lock() (*PL_MemParse->pFreeLock)(PL_MemParse)
#define PerlMemParse_is_locked() (*PL_MemParse->pIsLocked)(PL_MemParse)
#else
#define PerlMem_malloc(size) malloc((size))
#define PerlMem_realloc(buf,size) realloc((buf), (size))
#define PerlMem_free(buf) free((buf))
#define PerlMem_calloc(num,size) calloc((num), (size))
#define PerlMem_get_lock() 
#define PerlMem_free_lock() 
#define PerlMem_is_locked() 0
#define PerlMemShared_malloc(size) malloc((size))
#define PerlMemShared_realloc(buf,size) realloc((buf), (size))
#define PerlMemShared_free(buf) free((buf))
#define PerlMemShared_calloc(num,size) calloc((num), (size))
#define PerlMemShared_get_lock() 
#define PerlMemShared_free_lock() 
#define PerlMemShared_is_locked() 0
#define PerlMemParse_malloc(size) malloc((size))
#define PerlMemParse_realloc(buf,size) realloc((buf), (size))
#define PerlMemParse_free(buf) free((buf))
#define PerlMemParse_calloc(num,size) calloc((num), (size))
#define PerlMemParse_get_lock() 
#define PerlMemParse_free_lock() 
#define PerlMemParse_is_locked() 0
#endif
#if defined(PERL_IMPLICIT_SYS)
#ifndef jmp_buf
#include <setjmp.h>
#endif
#ifdef WIN32
#endif
#ifdef WIN32
#endif
#define PerlProc_abort() (*PL_Proc->pAbort)(PL_Proc)
#define PerlProc_crypt(c,s) (*PL_Proc->pCrypt)(PL_Proc, (c), (s))
#define PerlProc_exit(s) (*PL_Proc->pExit)(PL_Proc, (s))
#define PerlProc__exit(s) (*PL_Proc->p_Exit)(PL_Proc, (s))
#define PerlProc_execl(c,w,x,y,z) (*PL_Proc->pExecl)(PL_Proc, (c), (w), (x), (y), (z))
#define PerlProc_execv(c,a) (*PL_Proc->pExecv)(PL_Proc, (c), (a))
#define PerlProc_execvp(c,a) (*PL_Proc->pExecvp)(PL_Proc, (c), (a))
#define PerlProc_getuid() (*PL_Proc->pGetuid)(PL_Proc)
#define PerlProc_geteuid() (*PL_Proc->pGeteuid)(PL_Proc)
#define PerlProc_getgid() (*PL_Proc->pGetgid)(PL_Proc)
#define PerlProc_getegid() (*PL_Proc->pGetegid)(PL_Proc)
#define PerlProc_getlogin() (*PL_Proc->pGetlogin)(PL_Proc)
#define PerlProc_kill(i,a) (*PL_Proc->pKill)(PL_Proc, (i), (a))
#define PerlProc_killpg(i,a) (*PL_Proc->pKillpg)(PL_Proc, (i), (a))
#define PerlProc_pause() (*PL_Proc->pPauseProc)(PL_Proc)
#define PerlProc_popen(c,m) (*PL_Proc->pPopen)(PL_Proc, (c), (m))
#define PerlProc_popen_list(m,n,a) (*PL_Proc->pPopenList)(PL_Proc, (m), (n), (a))
#define PerlProc_pclose(f) (*PL_Proc->pPclose)(PL_Proc, (f))
#define PerlProc_pipe(fd) (*PL_Proc->pPipe)(PL_Proc, (fd))
#define PerlProc_setuid(u) (*PL_Proc->pSetuid)(PL_Proc, (u))
#define PerlProc_setgid(g) (*PL_Proc->pSetgid)(PL_Proc, (g))
#define PerlProc_sleep(t) (*PL_Proc->pSleep)(PL_Proc, (t))
#define PerlProc_times(t) (*PL_Proc->pTimes)(PL_Proc, (t))
#define PerlProc_wait(t) (*PL_Proc->pWait)(PL_Proc, (t))
#define PerlProc_waitpid(p,s,f) (*PL_Proc->pWaitpid)(PL_Proc, (p), (s), (f))
#define PerlProc_signal(n,h) (*PL_Proc->pSignal)(PL_Proc, (n), (h))
#define PerlProc_fork() (*PL_Proc->pFork)(PL_Proc)
#define PerlProc_getpid() (*PL_Proc->pGetpid)(PL_Proc)
#define PerlProc_setjmp(b,n) Sigsetjmp((b), (n))
#define PerlProc_longjmp(b,n) Siglongjmp((b), (n))
#ifdef WIN32
#define PerlProc_DynaLoad(f) (*PL_Proc->pDynaLoader)(PL_Proc, (f))
#define PerlProc_GetOSError(s,e) (*PL_Proc->pGetOSError)(PL_Proc, (s), (e))
#define PerlProc_spawnvp(m,c,a) (*PL_Proc->pSpawnvp)(PL_Proc, (m), (c), (a))
#endif
#define PerlProc_lasthost() (*PL_Proc->pLastHost)(PL_Proc)
#define PerlProc_gettimeofday(t,z) (*PL_Proc->pGetTimeOfDay)(PL_Proc,(t),(z))
#else
#define PerlProc_abort() abort()
#define PerlProc_crypt(c,s) crypt((c), (s))
#define PerlProc_exit(s) exit((s))
#define PerlProc__exit(s) _exit((s))
#define PerlProc_execl(c,w,x,y,z) execl((c), (w), (x), (y), (z))
#define PerlProc_execv(c,a) execv((c), (a))
#define PerlProc_execvp(c,a) execvp((c), (a))
#define PerlProc_getuid() getuid()
#define PerlProc_geteuid() geteuid()
#define PerlProc_getgid() getgid()
#define PerlProc_getegid() getegid()
#define PerlProc_getlogin() getlogin()
#define PerlProc_kill(i,a) kill((i), (a))
#define PerlProc_killpg(i,a) killpg((i), (a))
#define PerlProc_pause() Pause()
#define PerlProc_popen(c,m) my_popen((c), (m))
#define PerlProc_popen_list(m,n,a) my_popen_list((m),(n),(a))
#define PerlProc_pclose(f) my_pclose((f))
#define PerlProc_pipe(fd) pipe((fd))
#define PerlProc_setuid(u) setuid((u))
#define PerlProc_setgid(g) setgid((g))
#define PerlProc_sleep(t) sleep((t))
#define PerlProc_times(t) times((t))
#define PerlProc_wait(t) wait((t))
#define PerlProc_waitpid(p,s,f) waitpid((p), (s), (f))
#define PerlProc_setjmp(b,n) Sigsetjmp((b), (n))
#define PerlProc_longjmp(b,n) Siglongjmp((b), (n))
#define PerlProc_signal(n,h) signal((n), (h))
#define PerlProc_fork() my_fork()
#define PerlProc_getpid() getpid()
#define PerlProc_gettimeofday(t,z) gettimeofday((t),(z))
#ifdef WIN32
#define PerlProc_DynaLoad(f) win32_dynaload((f))
#define PerlProc_GetOSError(s,e) win32_str_os_error((s), (e))
#define PerlProc_spawnvp(m,c,a) win32_spawnvp((m), (c), (a))
#undef PerlProc_signal
#define PerlProc_signal(n,h) win32_signal((n), (h))
#endif
#endif
#if defined(PERL_IMPLICIT_SYS)
#ifdef WIN32
#endif
#ifdef WIN32
#endif
#define PerlSock_htonl(x) (*PL_Sock->pHtonl)(PL_Sock, x)
#define PerlSock_htons(x) (*PL_Sock->pHtons)(PL_Sock, x)
#define PerlSock_ntohl(x) (*PL_Sock->pNtohl)(PL_Sock, x)
#define PerlSock_ntohs(x) (*PL_Sock->pNtohs)(PL_Sock, x)
#define PerlSock_accept(s,a,l) (*PL_Sock->pAccept)(PL_Sock, s, a, l)
#define PerlSock_bind(s,n,l) (*PL_Sock->pBind)(PL_Sock, s, n, l)
#define PerlSock_connect(s,n,l) (*PL_Sock->pConnect)(PL_Sock, s, n, l)
#define PerlSock_endhostent() (*PL_Sock->pEndhostent)(PL_Sock)
#define PerlSock_endnetent() (*PL_Sock->pEndnetent)(PL_Sock)
#define PerlSock_endprotoent() (*PL_Sock->pEndprotoent)(PL_Sock)
#define PerlSock_endservent() (*PL_Sock->pEndservent)(PL_Sock)
#define PerlSock_gethostbyaddr(a,l,t) (*PL_Sock->pGethostbyaddr)(PL_Sock, a, l, t)
#define PerlSock_gethostbyname(n) (*PL_Sock->pGethostbyname)(PL_Sock, n)
#define PerlSock_gethostent() (*PL_Sock->pGethostent)(PL_Sock)
#define PerlSock_gethostname(n,l) (*PL_Sock->pGethostname)(PL_Sock, n, l)
#define PerlSock_getnetbyaddr(n,t) (*PL_Sock->pGetnetbyaddr)(PL_Sock, n, t)
#define PerlSock_getnetbyname(c) (*PL_Sock->pGetnetbyname)(PL_Sock, c)
#define PerlSock_getnetent() (*PL_Sock->pGetnetent)(PL_Sock)
#define PerlSock_getpeername(s,n,l) (*PL_Sock->pGetpeername)(PL_Sock, s, n, l)
#define PerlSock_getprotobyname(n) (*PL_Sock->pGetprotobyname)(PL_Sock, n)
#define PerlSock_getprotobynumber(n) (*PL_Sock->pGetprotobynumber)(PL_Sock, n)
#define PerlSock_getprotoent() (*PL_Sock->pGetprotoent)(PL_Sock)
#define PerlSock_getservbyname(n,p) (*PL_Sock->pGetservbyname)(PL_Sock, n, p)
#define PerlSock_getservbyport(port,p) (*PL_Sock->pGetservbyport)(PL_Sock, port, p)
#define PerlSock_getservent() (*PL_Sock->pGetservent)(PL_Sock)
#define PerlSock_getsockname(s,n,l) (*PL_Sock->pGetsockname)(PL_Sock, s, n, l)
#define PerlSock_getsockopt(s,l,n,v,i) (*PL_Sock->pGetsockopt)(PL_Sock, s, l, n, v, i)
#define PerlSock_inet_addr(c) (*PL_Sock->pInetAddr)(PL_Sock, c)
#define PerlSock_inet_ntoa(i) (*PL_Sock->pInetNtoa)(PL_Sock, i)
#define PerlSock_listen(s,b) (*PL_Sock->pListen)(PL_Sock, s, b)
#define PerlSock_recv(s,b,l,f) (*PL_Sock->pRecv)(PL_Sock, s, b, l, f)
#define PerlSock_recvfrom(s,b,l,f,from,fromlen) (*PL_Sock->pRecvfrom)(PL_Sock, s, b, l, f, from, fromlen)
#define PerlSock_select(n,r,w,e,t) (*PL_Sock->pSelect)(PL_Sock, n, (char*)r, (char*)w, (char*)e, t)
#define PerlSock_send(s,b,l,f) (*PL_Sock->pSend)(PL_Sock, s, b, l, f)
#define PerlSock_sendto(s,b,l,f,t,tlen) (*PL_Sock->pSendto)(PL_Sock, s, b, l, f, t, tlen)
#define PerlSock_sethostent(f) (*PL_Sock->pSethostent)(PL_Sock, f)
#define PerlSock_setnetent(f) (*PL_Sock->pSetnetent)(PL_Sock, f)
#define PerlSock_setprotoent(f) (*PL_Sock->pSetprotoent)(PL_Sock, f)
#define PerlSock_setservent(f) (*PL_Sock->pSetservent)(PL_Sock, f)
#define PerlSock_setsockopt(s,l,n,v,len) (*PL_Sock->pSetsockopt)(PL_Sock, s, l, n, v, len)
#define PerlSock_shutdown(s,h) (*PL_Sock->pShutdown)(PL_Sock, s, h)
#define PerlSock_socket(a,t,p) (*PL_Sock->pSocket)(PL_Sock, a, t, p)
#define PerlSock_socketpair(a,t,p,f) (*PL_Sock->pSocketpair)(PL_Sock, a, t, p, f)
#ifdef WIN32
#define PerlSock_closesocket(s) (*PL_Sock->pClosesocket)(PL_Sock, s)
#endif
#else
#define PerlSock_htonl(x) htonl(x)
#define PerlSock_htons(x) htons(x)
#define PerlSock_ntohl(x) ntohl(x)
#define PerlSock_ntohs(x) ntohs(x)
#define PerlSock_accept(s,a,l) accept(s, a, l)
#define PerlSock_bind(s,n,l) bind(s, n, l)
#define PerlSock_connect(s,n,l) connect(s, n, l)
#define PerlSock_gethostbyaddr(a,l,t) gethostbyaddr(a, l, t)
#define PerlSock_gethostbyname(n) gethostbyname(n)
#define PerlSock_gethostent gethostent
#define PerlSock_endhostent endhostent
#define PerlSock_gethostname(n,l) gethostname(n, l)
#define PerlSock_getnetbyaddr(n,t) getnetbyaddr(n, t)
#define PerlSock_getnetbyname(n) getnetbyname(n)
#define PerlSock_getnetent getnetent
#define PerlSock_endnetent endnetent
#define PerlSock_getpeername(s,n,l) getpeername(s, n, l)
#define PerlSock_getprotobyname(n) getprotobyname(n)
#define PerlSock_getprotobynumber(n) getprotobynumber(n)
#define PerlSock_getprotoent getprotoent
#define PerlSock_endprotoent endprotoent
#define PerlSock_getservbyname(n,p) getservbyname(n, p)
#define PerlSock_getservbyport(port,p) getservbyport(port, p)
#define PerlSock_getservent getservent
#define PerlSock_endservent endservent
#define PerlSock_getsockname(s,n,l) getsockname(s, n, l)
#define PerlSock_getsockopt(s,l,n,v,i) getsockopt(s, l, n, v, i)
#define PerlSock_inet_addr(c) inet_addr(c)
#define PerlSock_inet_ntoa(i) inet_ntoa(i)
#define PerlSock_listen(s,b) listen(s, b)
#define PerlSock_recv(s,b,l,f) recv(s, b, l, f)
#define PerlSock_recvfrom(s,b,l,f,from,fromlen) recvfrom(s, b, l, f, from, fromlen)
#define PerlSock_select(n,r,w,e,t) select(n, r, w, e, t)
#define PerlSock_send(s,b,l,f) send(s, b, l, f)
#define PerlSock_sendto(s,b,l,f,t,tlen) sendto(s, b, l, f, t, tlen)
#define PerlSock_sethostent(f) sethostent(f)
#define PerlSock_setnetent(f) setnetent(f)
#define PerlSock_setprotoent(f) setprotoent(f)
#define PerlSock_setservent(f) setservent(f)
#define PerlSock_setsockopt(s,l,n,v,len) setsockopt(s, l, n, v, len)
#define PerlSock_shutdown(s,h) shutdown(s, h)
#define PerlSock_socket(a,t,p) socket(a, t, p)
#define PerlSock_socketpair(a,t,p,f) socketpair(a, t, p, f)
#ifdef WIN32
#define PerlSock_closesocket(s) closesocket(s)
#endif
#endif
#endif
