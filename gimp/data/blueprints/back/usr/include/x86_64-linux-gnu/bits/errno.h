// GGHASH:VrsGdbuTcoXuhxBn_yilEFtwDFLD4vhFg2dVBhCA56pQ00000591
#ifndef _BITS_ERRNO_H
#define _BITS_ERRNO_H 1
#if !defined _ERRNO_H
# error "Never include <bits/errno.h> directly; use <errno.h> instead."
#endif
# include <linux/errno.h>
# ifndef ENOTSUP
#define ENOTSUP EOPNOTSUPP
# endif
# ifndef ECANCELED
#define ECANCELED 125
# endif
# ifndef EOWNERDEAD
#define EOWNERDEAD 130
# endif
#ifndef ENOTRECOVERABLE
#define ENOTRECOVERABLE 131
# endif
# ifndef ERFKILL
#define ERFKILL 132
# endif
# ifndef EHWPOISON
#define EHWPOISON 133
# endif
#endif
