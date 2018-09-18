// GGHASH:VTYmwhWLP2sP0q44Tj2XwjbdAJhOtVpeolUrLOLSDfxE0000e0eb
#include <errno.h>
#include <ctype.h>
#include <sys/signal.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#if defined(SVR4) || defined(__SVR4)
#include <sys/filio.h>
#endif
#ifdef sun
# include <stropts.h>
#else
# include <sys/stropts.h>
#endif
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/socket.h>
#ifndef X_NO_SYS_UN
#include <sys/un.h>
#endif
#if !defined(sun)
#define LOCAL_TRANS_PTS 
#endif
#if defined(SVR4) || defined(__SVR4)
#define LOCAL_TRANS_NAMED 
#endif
#if defined(__SCO__) || defined(__UNIXWARE__)
#define LOCAL_TRANS_SCO 
#endif
#ifdef TRANS_REOPEN
#endif
#if XTRANS_SEND_FDS
#endif
#if defined(BSD44SOCKETS)
#endif
#if defined(BSD44SOCKETS)
#endif
#ifdef LOCAL_TRANS_PTS
#if defined(SYSV) && !defined(__SCO__)
#define SIGNAL_T int
#else
#define SIGNAL_T void
#endif
#endif
#ifndef sun
#define X_STREAMS_DIR "/dev/X"
#define DEV_SPX "/dev/spx"
#else
#ifndef X11_t
#define X_STREAMS_DIR "/dev/X"
#else
#define X_STREAMS_DIR "/tmp/.X11-pipe"
#endif
#endif
#define DEV_PTMX "/dev/ptmx"
#if defined(X11_t)
#define PTSNODENAME "/dev/X/server."
#ifdef sun
#define NAMEDNODENAME "/tmp/.X11-pipe/X"
#else
#define NAMEDNODENAME "/dev/X/Nserver."
#define SCORNODENAME "/dev/X%1sR"
#define SCOSNODENAME "/dev/X%1sS"
#endif
#endif
#if defined(XIM_t)
#ifdef sun
#define NAMEDNODENAME "/tmp/.XIM-pipe/XIM"
#else
#define PTSNODENAME "/dev/X/XIM."
#define NAMEDNODENAME "/dev/X/NXIM."
#define SCORNODENAME "/dev/XIM.%sR"
#define SCOSNODENAME "/dev/XIM.%sS"
#endif
#endif
#if defined(FS_t) || defined (FONT_t)
#ifdef sun
#define NAMEDNODENAME "/tmp/.font-pipe/fs"
#else
#define PTSNODENAME "/dev/X/fontserver."
#define NAMEDNODENAME "/dev/X/Nfontserver."
#define SCORNODENAME "/dev/fontserver.%sR"
#define SCOSNODENAME "/dev/fontserver.%sS"
#endif
#endif
#if defined(ICE_t)
#ifdef sun
#define NAMEDNODENAME "/tmp/.ICE-pipe/"
#else
#define PTSNODENAME "/dev/X/ICE."
#define NAMEDNODENAME "/dev/X/NICE."
#define SCORNODENAME "/dev/ICE.%sR"
#define SCOSNODENAME "/dev/ICE.%sS"
#endif
#endif
#if defined(TEST_t)
#ifdef sun
#define NAMEDNODENAME "/tmp/.Test-unix/test"
#endif
#define PTSNODENAME "/dev/X/transtest."
#define NAMEDNODENAME "/dev/X/Ntranstest."
#define SCORNODENAME "/dev/transtest.%sR"
#define SCOSNODENAME "/dev/transtest.%sS"
#endif
#ifdef LOCAL_TRANS_PTS
#ifdef TRANS_CLIENT
#ifdef PTSNODENAME
#endif
#if !defined(PTSNODENAME)
#else
#endif
#endif
#ifdef TRANS_SERVER
#ifdef PTSNODENAME
#endif
#if !defined(PTSNODENAME)
#else
#ifdef HAS_STICKY_DIR_BIT
#else
#endif
#if 0
#else
#endif
#endif
#if defined(BSD44SOCKETS)
#endif
#endif
#endif
#ifdef LOCAL_TRANS_NAMED
#ifdef TRANS_CLIENT
#ifdef NAMEDNODENAME
# ifndef sun
# endif
#endif
#if !defined(NAMEDNODENAME)
#else
#endif
#endif
#ifdef TRANS_SERVER
#ifdef NAMEDNODENAME
#ifdef HAS_STICKY_DIR_BIT
#else
#endif
#endif
#ifdef NAMEDNODENAME
#endif
#if !defined(NAMEDNODENAME)
#else
#endif
#endif
#endif
#if defined(LOCAL_TRANS_SCO)
#endif
#ifdef LOCAL_TRANS_SCO
#ifdef TRANS_CLIENT
#ifdef SCORNODENAME
#endif
#if !defined(SCORNODENAME)
#else
#if defined(X11_t) && defined(__SCO__)
#endif
#endif
#endif
#ifdef TRANS_SERVER
#ifdef SCORNODENAME
#endif
#if !defined(SCORNODENAME)
#else
#if !defined(X11_t) || !defined(__SCO__)
#else
#endif
#if defined(X11_t) && defined(__SCO__)
#endif
#endif
#if defined(__SCO__)
#endif
#endif
#endif
#ifdef TRANS_REOPEN
#ifdef LOCAL_TRANS_PTS
#ifdef PTSNODENAME
#endif
#if !defined(PTSNODENAME)
#else
#endif
#endif
#ifdef LOCAL_TRANS_NAMED
#ifdef NAMEDNODENAME
#endif
#if !defined(NAMEDNODENAME)
#else
#endif
#endif
#ifdef LOCAL_TRANS_SCO
#ifdef SCORNODENAME
#endif
#if !defined(SCORNODENAME)
#else
#if defined(X11_t) && defined(__SCO__)
#endif
#endif
#endif
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef LOCAL_TRANS_PTS
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#else
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#endif
#ifdef LOCAL_TRANS_NAMED
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef sun
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#endif
#endif
#ifdef LOCAL_TRANS_SCO
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#endif
#define NUMTRANSPORTS (sizeof(LOCALtrans2devtab)/sizeof(LOCALtrans2dev))
#if defined(__SCO__)
#define DEF_XLOCAL "SCO:UNIX:PTS"
#elif defined(__UNIXWARE__)
#define DEF_XLOCAL "UNIX:PTS:NAMED:SCO"
#elif defined(sun)
#define DEF_XLOCAL "UNIX:NAMED"
#else
#define DEF_XLOCAL "UNIX:PTS:NAMED:SCO"
#endif
#define TYPEBUFSIZE 32
#ifdef TRANS_CLIENT
#if 0
#endif
#ifdef NEED_UTSNAME
#include <sys/utsname.h>
#endif
#ifdef NEED_UTSNAME
#endif
#ifdef NEED_UTSNAME
#endif
#if defined(X11_t)
#endif
#endif
#ifdef TRANS_SERVER
#if defined(X11_t)
#endif
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if defined(SCO325)
#else
#endif
#ifdef TRANS_SERVER
# ifdef LOCAL_TRANS_PTS
# endif
# ifdef sun
# endif
# ifdef LOCAL_TRANS_SCO
# endif
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#ifdef LOCAL_TRANS_PTS
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#endif
#ifdef LOCAL_TRANS_NAMED
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#ifdef sun
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#endif
#endif
#ifdef LOCAL_TRANS_SCO
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_REOPEN
#endif
#ifdef TRANS_SERVER
#endif
#ifdef TRANS_CLIENT
#endif
#if XTRANS_SEND_FDS
#endif
#endif
