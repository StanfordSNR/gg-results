// GGHASH:VbOmAwpkkp_Irl1PgImaqoy.1AZTh199KhROELU9FSaU00001432
#ifndef _SYS_QUOTA_H
#define _SYS_QUOTA_H 1
#include <features.h>
#include <sys/types.h>
#include <linux/quota.h>
#define dbtob(num) ((num) << 10)
#define btodb(num) ((num) >> 10)
#define fs_to_dq_blocks(num,blksize) (((num) * (blksize)) / 1024)
#define MAX_IQ_TIME 604800
#define MAX_DQ_TIME 604800
#define QUOTAFILENAME "quota"
#define QUOTAGROUP "staff"
#define NR_DQHASH 43
#define NR_DQUOTS 256
#define dq_bhardlimit dq_dqb.dqb_bhardlimit
#define dq_bsoftlimit dq_dqb.dqb_bsoftlimit
#define dq_curspace dq_dqb.dqb_curspace
#define dq_valid dq_dqb.dqb_valid
#define dq_ihardlimit dq_dqb.dqb_ihardlimit
#define dq_isoftlimit dq_dqb.dqb_isoftlimit
#define dq_curinodes dq_dqb.dqb_curinodes
#define dq_btime dq_dqb.dqb_btime
#define dq_itime dq_dqb.dqb_itime
#define dqoff(UID) ((loff_t)((UID) * sizeof (struct dqblk)))
#endif
