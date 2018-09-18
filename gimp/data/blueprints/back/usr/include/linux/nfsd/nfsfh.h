// GGHASH:V_NtysfrCA3yH5MU0eX0tebNuOoPj0Bm6zWXr5YXwcOM00000dbd
#ifndef _LINUX_NFSD_FH_H
#define _LINUX_NFSD_FH_H 
#include <linux/types.h>
#include <linux/nfs.h>
#include <linux/nfs2.h>
#include <linux/nfs3.h>
#include <linux/nfs4.h>
#define ofh_dcookie fh_base.fh_old.fb_dcookie
#define ofh_ino fh_base.fh_old.fb_ino
#define ofh_dirino fh_base.fh_old.fb_dirino
#define ofh_dev fh_base.fh_old.fb_dev
#define ofh_xdev fh_base.fh_old.fb_xdev
#define ofh_xino fh_base.fh_old.fb_xino
#define ofh_generation fh_base.fh_old.fb_generation
#define fh_version fh_base.fh_new.fb_version
#define fh_fsid_type fh_base.fh_new.fb_fsid_type
#define fh_auth_type fh_base.fh_new.fb_auth_type
#define fh_fileid_type fh_base.fh_new.fb_fileid_type
#define fh_fsid fh_base.fh_new.fb_auth
#define fh_auth fh_base.fh_new.fb_auth
#endif
