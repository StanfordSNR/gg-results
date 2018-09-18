// GGHASH:V.cfW2PN3oh_qqTD1N0hASsyiksrYqwf6L2x3QZwjbNs00002023
#ifndef STRINGPREP_H
#define STRINGPREP_H 
# ifndef IDNAPI
# if defined LIBIDN_BUILDING && defined HAVE_VISIBILITY && HAVE_VISIBILITY
#define IDNAPI __attribute__((__visibility__("default")))
# elif defined LIBIDN_BUILDING && defined _MSC_VER && ! defined LIBIDN_STATIC
#define IDNAPI __declspec(dllexport)
# elif defined _MSC_VER && ! defined LIBIDN_STATIC
#define IDNAPI __declspec(dllimport)
# else
#define IDNAPI 
# endif
# endif
# include <stddef.h>
# include <sys/types.h>
# include <idn-int.h>
# ifdef __cplusplus
# endif
#define STRINGPREP_VERSION "1.33"
#define STRINGPREP_MAX_MAP_CHARS 4
#define stringprep_nameprep(in,maxlen) stringprep(in, maxlen, 0, stringprep_nameprep)
#define stringprep_nameprep_no_unassigned(in,maxlen) stringprep(in, maxlen, STRINGPREP_NO_UNASSIGNED, stringprep_nameprep)
#define stringprep_plain(in,maxlen) stringprep(in, maxlen, 0, stringprep_plain)
#define stringprep_kerberos5(in,maxlen) stringprep(in, maxlen, 0, stringprep_kerberos5)
#define stringprep_xmpp_nodeprep(in,maxlen) stringprep(in, maxlen, 0, stringprep_xmpp_nodeprep)
#define stringprep_xmpp_resourceprep(in,maxlen) stringprep(in, maxlen, 0, stringprep_xmpp_resourceprep)
#define stringprep_iscsi(in,maxlen) stringprep(in, maxlen, 0, stringprep_iscsi)
# ifdef __cplusplus
# endif
#endif
