// GGHASH:V1dMd40ucd3dgNudg6J4dg7vgv8dquEVDMxNWioxbg2k000020b4
#ifndef _FTS_H
#define _FTS_H 1
#include <features.h>
#include <sys/types.h>
#define FTS_COMFOLLOW 0x0001
#define FTS_LOGICAL 0x0002
#define FTS_NOCHDIR 0x0004
#define FTS_NOSTAT 0x0008
#define FTS_PHYSICAL 0x0010
#define FTS_SEEDOT 0x0020
#define FTS_XDEV 0x0040
#define FTS_WHITEOUT 0x0080
#define FTS_OPTIONMASK 0x00ff
#define FTS_NAMEONLY 0x0100
#define FTS_STOP 0x0200
#ifdef __USE_LARGEFILE64
#endif
#define FTS_ROOTPARENTLEVEL -1
#define FTS_ROOTLEVEL 0
#define FTS_D 1
#define FTS_DC 2
#define FTS_DEFAULT 3
#define FTS_DNR 4
#define FTS_DOT 5
#define FTS_DP 6
#define FTS_ERR 7
#define FTS_F 8
#define FTS_INIT 9
#define FTS_NS 10
#define FTS_NSOK 11
#define FTS_SL 12
#define FTS_SLNONE 13
#define FTS_W 14
#define FTS_DONTCHDIR 0x01
#define FTS_SYMFOLLOW 0x02
#define FTS_AGAIN 1
#define FTS_FOLLOW 2
#define FTS_NOINSTR 3
#define FTS_SKIP 4
#ifdef __USE_LARGEFILE64
#endif
#ifndef __USE_FILE_OFFSET64
#else
# ifdef __REDIRECT
# else
#define fts_children fts64_children
#define fts_close fts64_close
#define fts_open fts64_open
#define fts_read fts64_read
#define fts_set fts64_set
# endif
#endif
#ifdef __USE_LARGEFILE64
#endif
#endif
