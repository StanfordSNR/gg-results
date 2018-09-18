// GGHASH:VlmsGGs6PNLI3Xps05EsuiMpELfaOx1GqdCS3YGkpCkk000011e3
#ifndef _LIBINTL_H
#define _LIBINTL_H 1
#include <features.h>
#define __USE_GNU_GETTEXT 1
#define __GNU_GETTEXT_SUPPORTED_REVISION(major) ((major) == 0 ? 1 : -1)
#if defined __OPTIMIZE__ && !defined __cplusplus
#define __need_NULL 
# include <stddef.h>
# include <locale.h>
#define gettext(msgid) dgettext (NULL, msgid)
#define dgettext(domainname,msgid) dcgettext (domainname, msgid, LC_MESSAGES)
#define ngettext(msgid1,msgid2,n) dngettext (NULL, msgid1, msgid2, n)
#define dngettext(domainname,msgid1,msgid2,n) dcngettext (domainname, msgid1, msgid2, n, LC_MESSAGES)
#endif
#endif
