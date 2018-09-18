// GGHASH:Vb7Y0surs8QY0QpcYtlXrbzeFo57ArFtfk0LIpKkf_gc000131be
#ifndef REENTR_H
#define REENTR_H 
#ifndef PERL_REENTR_API
# if defined(PERL_CORE) || defined(PERL_EXT)
#define PERL_REENTR_API 1
# else
#define PERL_REENTR_API 0
# endif
#endif
#ifdef USE_REENTRANT_API
#ifdef __hpux
#undef HAS_CRYPT_R
#undef HAS_ENDGRENT_R
#undef HAS_ENDPWENT_R
#undef HAS_GETGRENT_R
#undef HAS_GETPWENT_R
#undef HAS_SETLOCALE_R
#undef HAS_STRERROR_R
#define NETDB_R_OBSOLETE 
#endif
#if defined(__osf__) && defined(__alpha)
#undef HAS_CRYPT_R
#undef HAS_STRERROR_R
#define NETDB_R_OBSOLETE 
#endif
#if defined(__OpenBSD__)
#define REENTR_MEMZERO(a,b) memzero(a,b)
#else
#define REENTR_MEMZERO(a,b) 0
#endif
#ifdef NETDB_R_OBSOLETE
#undef HAS_ENDHOSTENT_R
#undef HAS_ENDNETENT_R
#undef HAS_ENDPROTOENT_R
#undef HAS_ENDSERVENT_R
#undef HAS_GETHOSTBYADDR_R
#undef HAS_GETHOSTBYNAME_R
#undef HAS_GETHOSTENT_R
#undef HAS_GETNETBYADDR_R
#undef HAS_GETNETBYNAME_R
#undef HAS_GETNETENT_R
#undef HAS_GETPROTOBYNAME_R
#undef HAS_GETPROTOBYNUMBER_R
#undef HAS_GETPROTOENT_R
#undef HAS_GETSERVBYNAME_R
#undef HAS_GETSERVBYPORT_R
#undef HAS_GETSERVENT_R
#undef HAS_SETHOSTENT_R
#undef HAS_SETNETENT_R
#undef HAS_SETPROTOENT_R
#undef HAS_SETSERVENT_R
#endif
#ifdef I_PWD
# include <pwd.h>
#endif
#ifdef I_GRP
# include <grp.h>
#endif
#ifdef I_NETDB
# include <netdb.h>
#endif
#ifdef I_CRYPT
# ifdef I_CRYPT
# include <crypt.h>
# endif
#endif
#ifdef HAS_GETSPNAM_R
# ifdef I_SHADOW
# include <shadow.h>
# endif
#endif
#define REENTRANT_PROTO_B_B 1
#define REENTRANT_PROTO_B_BI 2
#define REENTRANT_PROTO_B_BW 3
#define REENTRANT_PROTO_B_CCD 4
#define REENTRANT_PROTO_B_CCS 5
#define REENTRANT_PROTO_B_IBI 6
#define REENTRANT_PROTO_B_IBW 7
#define REENTRANT_PROTO_B_SB 8
#define REENTRANT_PROTO_B_SBI 9
#define REENTRANT_PROTO_I_BI 10
#define REENTRANT_PROTO_I_BW 11
#define REENTRANT_PROTO_I_CCSBWR 12
#define REENTRANT_PROTO_I_CCSD 13
#define REENTRANT_PROTO_I_CII 14
#define REENTRANT_PROTO_I_CIISD 15
#define REENTRANT_PROTO_I_CSBI 16
#define REENTRANT_PROTO_I_CSBIR 17
#define REENTRANT_PROTO_I_CSBWR 18
#define REENTRANT_PROTO_I_CSBWRE 19
#define REENTRANT_PROTO_I_CSD 20
#define REENTRANT_PROTO_I_CWISBWRE 21
#define REENTRANT_PROTO_I_CWISD 22
#define REENTRANT_PROTO_I_D 23
#define REENTRANT_PROTO_I_H 24
#define REENTRANT_PROTO_I_IBI 25
#define REENTRANT_PROTO_I_IBW 26
#define REENTRANT_PROTO_I_ICBI 27
#define REENTRANT_PROTO_I_ICSBWR 28
#define REENTRANT_PROTO_I_ICSD 29
#define REENTRANT_PROTO_I_ID 30
#define REENTRANT_PROTO_I_IISD 31
#define REENTRANT_PROTO_I_ISBWR 32
#define REENTRANT_PROTO_I_ISD 33
#define REENTRANT_PROTO_I_LISBI 34
#define REENTRANT_PROTO_I_LISD 35
#define REENTRANT_PROTO_I_SB 36
#define REENTRANT_PROTO_I_SBI 37
#define REENTRANT_PROTO_I_SBIE 38
#define REENTRANT_PROTO_I_SBIH 39
#define REENTRANT_PROTO_I_SBIR 40
#define REENTRANT_PROTO_I_SBWR 41
#define REENTRANT_PROTO_I_SBWRE 42
#define REENTRANT_PROTO_I_SD 43
#define REENTRANT_PROTO_I_TISD 44
#define REENTRANT_PROTO_I_TS 45
#define REENTRANT_PROTO_I_TSBI 46
#define REENTRANT_PROTO_I_TSBIR 47
#define REENTRANT_PROTO_I_TSBWR 48
#define REENTRANT_PROTO_I_TSR 49
#define REENTRANT_PROTO_I_TsISBWRE 50
#define REENTRANT_PROTO_I_UISBWRE 51
#define REENTRANT_PROTO_I_uISBWRE 52
#define REENTRANT_PROTO_S_CBI 53
#define REENTRANT_PROTO_S_CCSBI 54
#define REENTRANT_PROTO_S_CIISBIE 55
#define REENTRANT_PROTO_S_CSBI 56
#define REENTRANT_PROTO_S_CSBIE 57
#define REENTRANT_PROTO_S_CWISBIE 58
#define REENTRANT_PROTO_S_CWISBWIE 59
#define REENTRANT_PROTO_S_ICSBI 60
#define REENTRANT_PROTO_S_ISBI 61
#define REENTRANT_PROTO_S_LISBI 62
#define REENTRANT_PROTO_S_SBI 63
#define REENTRANT_PROTO_S_SBIE 64
#define REENTRANT_PROTO_S_SBW 65
#define REENTRANT_PROTO_S_TISBI 66
#define REENTRANT_PROTO_S_TSBI 67
#define REENTRANT_PROTO_S_TSBIE 68
#define REENTRANT_PROTO_S_TWISBIE 69
#define REENTRANT_PROTO_V_D 70
#define REENTRANT_PROTO_V_H 71
#define REENTRANT_PROTO_V_ID 72
#if defined(HAS_GETGRENT_R) && (GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBWR || GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBIR || GETGRENT_R_PROTO == REENTRANT_PROTO_S_SBW || GETGRENT_R_PROTO == REENTRANT_PROTO_S_SBI || GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBI || GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBIH)
#define GETGRENT_R_HAS_BUFFER 
#else
#undef GETGRENT_R_HAS_BUFFER
#endif
#if defined(HAS_GETGRGID_R) && (GETGRGID_R_PROTO == REENTRANT_PROTO_I_TSBWR || GETGRGID_R_PROTO == REENTRANT_PROTO_I_TSBIR || GETGRGID_R_PROTO == REENTRANT_PROTO_I_TSBI || GETGRGID_R_PROTO == REENTRANT_PROTO_S_TSBI)
#define GETGRGID_R_HAS_BUFFER 
#else
#undef GETGRGID_R_HAS_BUFFER
#endif
#if defined(HAS_GETGRNAM_R) && (GETGRNAM_R_PROTO == REENTRANT_PROTO_I_CSBWR || GETGRNAM_R_PROTO == REENTRANT_PROTO_I_CSBIR || GETGRNAM_R_PROTO == REENTRANT_PROTO_S_CBI || GETGRNAM_R_PROTO == REENTRANT_PROTO_I_CSBI || GETGRNAM_R_PROTO == REENTRANT_PROTO_S_CSBI)
#define GETGRNAM_R_HAS_BUFFER 
#else
#undef GETGRNAM_R_HAS_BUFFER
#endif
#if (defined(GETGRENT_R_HAS_BUFFER) || defined(GETGRGID_R_HAS_BUFFER) || defined(GETGRNAM_R_HAS_BUFFER))
#define USE_GRENT_BUFFER 
#else
#undef USE_GRENT_BUFFER
#endif
#if defined(HAS_GETGRENT_R) && (GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBWR || GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBIR)
#define GETGRENT_R_HAS_PTR 
#else
#undef GETGRENT_R_HAS_PTR
#endif
#if defined(HAS_GETGRGID_R) && (GETGRGID_R_PROTO == REENTRANT_PROTO_I_TSBWR || GETGRGID_R_PROTO == REENTRANT_PROTO_I_TSBIR)
#define GETGRGID_R_HAS_PTR 
#else
#undef GETGRGID_R_HAS_PTR
#endif
#if defined(HAS_GETGRNAM_R) && (GETGRNAM_R_PROTO == REENTRANT_PROTO_I_CSBWR || GETGRNAM_R_PROTO == REENTRANT_PROTO_I_CSBIR)
#define GETGRNAM_R_HAS_PTR 
#else
#undef GETGRNAM_R_HAS_PTR
#endif
#if (defined(GETGRENT_R_HAS_PTR) || defined(GETGRGID_R_HAS_PTR) || defined(GETGRNAM_R_HAS_PTR))
#define USE_GRENT_PTR 
#else
#undef USE_GRENT_PTR
#endif
#if defined(HAS_GETPWENT_R) && (GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBWR || GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBIR)
#define GETPWENT_R_HAS_PTR 
#else
#undef GETPWENT_R_HAS_PTR
#endif
#if defined(HAS_GETPWNAM_R) && (GETPWNAM_R_PROTO == REENTRANT_PROTO_I_CSBWR || GETPWNAM_R_PROTO == REENTRANT_PROTO_I_CSBIR)
#define GETPWNAM_R_HAS_PTR 
#else
#undef GETPWNAM_R_HAS_PTR
#endif
#if defined(HAS_GETPWUID_R) && (GETPWUID_R_PROTO == REENTRANT_PROTO_I_TSBWR || GETPWUID_R_PROTO == REENTRANT_PROTO_I_TSBIR)
#define GETPWUID_R_HAS_PTR 
#else
#undef GETPWUID_R_HAS_PTR
#endif
#if (defined(GETPWENT_R_HAS_PTR) || defined(GETPWNAM_R_HAS_PTR) || defined(GETPWUID_R_HAS_PTR))
#define USE_PWENT_PTR 
#else
#undef USE_PWENT_PTR
#endif
#if defined(HAS_GETSPNAM_R) && (GETSPNAM_R_PROTO == REENTRANT_PROTO_I_CSBWR)
#define GETSPNAM_R_HAS_PTR 
#else
#undef GETSPNAM_R_HAS_PTR
#endif
#if (defined(GETSPENT_R_HAS_PTR) || defined(GETSPNAM_R_HAS_PTR))
#define USE_SPENT_PTR 
#else
#undef USE_SPENT_PTR
#endif
#if defined(HAS_GETGRENT_R) && (GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBIH)
#define GETGRENT_R_HAS_FPTR 
#else
#undef GETGRENT_R_HAS_FPTR
#endif
#if defined(HAS_SETGRENT_R) && (SETGRENT_R_PROTO == REENTRANT_PROTO_I_H || SETGRENT_R_PROTO == REENTRANT_PROTO_V_H)
#define SETGRENT_R_HAS_FPTR 
#else
#undef SETGRENT_R_HAS_FPTR
#endif
#if defined(HAS_ENDGRENT_R) && (ENDGRENT_R_PROTO == REENTRANT_PROTO_I_H || ENDGRENT_R_PROTO == REENTRANT_PROTO_V_H)
#define ENDGRENT_R_HAS_FPTR 
#else
#undef ENDGRENT_R_HAS_FPTR
#endif
#if (defined(GETGRENT_R_HAS_FPTR) || defined(GETGRGID_R_HAS_FPTR) || defined(GETGRNAM_R_HAS_FPTR) || defined(SETGRENT_R_HAS_FPTR) || defined(ENDGRENT_R_HAS_FPTR))
#define USE_GRENT_FPTR 
#else
#undef USE_GRENT_FPTR
#endif
#if defined(HAS_GETPWENT_R) && (GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBIH)
#define GETPWENT_R_HAS_FPTR 
#else
#undef GETPWENT_R_HAS_FPTR
#endif
#if defined(HAS_SETPWENT_R) && (SETPWENT_R_PROTO == REENTRANT_PROTO_I_H || SETPWENT_R_PROTO == REENTRANT_PROTO_V_H)
#define SETPWENT_R_HAS_FPTR 
#else
#undef SETPWENT_R_HAS_FPTR
#endif
#if defined(HAS_ENDPWENT_R) && (ENDPWENT_R_PROTO == REENTRANT_PROTO_I_H || ENDPWENT_R_PROTO == REENTRANT_PROTO_V_H)
#define ENDPWENT_R_HAS_FPTR 
#else
#undef ENDPWENT_R_HAS_FPTR
#endif
#if (defined(GETPWENT_R_HAS_FPTR) || defined(GETPWNAM_R_HAS_FPTR) || defined(GETPWUID_R_HAS_FPTR) || defined(SETPWENT_R_HAS_FPTR) || defined(ENDPWENT_R_HAS_FPTR))
#define USE_PWENT_FPTR 
#else
#undef USE_PWENT_FPTR
#endif
#if defined(HAS_GETPWENT_R) && (GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBWR || GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBIR || GETPWENT_R_PROTO == REENTRANT_PROTO_S_SBW || GETPWENT_R_PROTO == REENTRANT_PROTO_S_SBI || GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBI || GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBIH)
#define GETPWENT_R_HAS_BUFFER 
#else
#undef GETPWENT_R_HAS_BUFFER
#endif
#if defined(HAS_GETPWNAM_R) && (GETPWNAM_R_PROTO == REENTRANT_PROTO_I_CSBWR || GETPWNAM_R_PROTO == REENTRANT_PROTO_I_CSBIR || GETPWNAM_R_PROTO == REENTRANT_PROTO_S_CSBI || GETPWNAM_R_PROTO == REENTRANT_PROTO_I_CSBI)
#define GETPWNAM_R_HAS_BUFFER 
#else
#undef GETPWNAM_R_HAS_BUFFER
#endif
#if (defined(GETPWENT_R_HAS_BUFFER) || defined(GETPWGID_R_HAS_BUFFER) || defined(GETPWNAM_R_HAS_BUFFER))
#define USE_PWENT_BUFFER 
#else
#undef USE_PWENT_BUFFER
#endif
#if defined(HAS_GETHOSTENT_R) && (GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBWRE)
#define GETHOSTENT_R_HAS_PTR 
#else
#undef GETHOSTENT_R_HAS_PTR
#endif
#if defined(HAS_GETHOSTBYADDR_R) && (GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_CWISBWRE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_TsISBWRE)
#define GETHOSTBYADDR_R_HAS_PTR 
#else
#undef GETHOSTBYADDR_R_HAS_PTR
#endif
#if defined(HAS_GETHOSTBYNAME_R) && (GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWRE)
#define GETHOSTBYNAME_R_HAS_PTR 
#else
#undef GETHOSTBYNAME_R_HAS_PTR
#endif
#if (defined(GETHOSTENT_R_HAS_PTR) || defined(GETHOSTBYADDR_R_HAS_PTR) || defined(GETHOSTBYNAME_R_HAS_PTR))
#define USE_HOSTENT_PTR 
#else
#undef USE_HOSTENT_PTR
#endif
#if defined(HAS_GETNETENT_R) && (GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBWRE)
#define GETNETENT_R_HAS_PTR 
#else
#undef GETNETENT_R_HAS_PTR
#endif
#if defined(HAS_GETNETBYADDR_R) && (GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_UISBWRE || GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_uISBWRE)
#define GETNETBYADDR_R_HAS_PTR 
#else
#undef GETNETBYADDR_R_HAS_PTR
#endif
#if defined(HAS_GETNETBYNAME_R) && (GETNETBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWRE)
#define GETNETBYNAME_R_HAS_PTR 
#else
#undef GETNETBYNAME_R_HAS_PTR
#endif
#if (defined(GETNETENT_R_HAS_PTR) || defined(GETNETBYADDR_R_HAS_PTR) || defined(GETNETBYNAME_R_HAS_PTR))
#define USE_NETENT_PTR 
#else
#undef USE_NETENT_PTR
#endif
#if defined(HAS_GETPROTOENT_R) && (GETPROTOENT_R_PROTO == REENTRANT_PROTO_I_SBWR)
#define GETPROTOENT_R_HAS_PTR 
#else
#undef GETPROTOENT_R_HAS_PTR
#endif
#if defined(HAS_GETPROTOBYNAME_R) && (GETPROTOBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWR)
#define GETPROTOBYNAME_R_HAS_PTR 
#else
#undef GETPROTOBYNAME_R_HAS_PTR
#endif
#if defined(HAS_GETPROTOBYNUMBER_R) && (GETPROTOBYNUMBER_R_PROTO == REENTRANT_PROTO_I_ISBWR)
#define GETPROTOBYNUMBER_R_HAS_PTR 
#else
#undef GETPROTOBYNUMBER_R_HAS_PTR
#endif
#if (defined(GETPROTOENT_R_HAS_PTR) || defined(GETPROTOBYNAME_R_HAS_PTR) || defined(GETPROTOBYNUMBER_R_HAS_PTR))
#define USE_PROTOENT_PTR 
#else
#undef USE_PROTOENT_PTR
#endif
#if defined(HAS_GETSERVENT_R) && (GETSERVENT_R_PROTO == REENTRANT_PROTO_I_SBWR)
#define GETSERVENT_R_HAS_PTR 
#else
#undef GETSERVENT_R_HAS_PTR
#endif
#if defined(HAS_GETSERVBYNAME_R) && (GETSERVBYNAME_R_PROTO == REENTRANT_PROTO_I_CCSBWR)
#define GETSERVBYNAME_R_HAS_PTR 
#else
#undef GETSERVBYNAME_R_HAS_PTR
#endif
#if defined(HAS_GETSERVBYPORT_R) && (GETSERVBYPORT_R_PROTO == REENTRANT_PROTO_I_ICSBWR)
#define GETSERVBYPORT_R_HAS_PTR 
#else
#undef GETSERVBYPORT_R_HAS_PTR
#endif
#if (defined(GETSERVENT_R_HAS_PTR) || defined(GETSERVBYNAME_R_HAS_PTR) || defined(GETSERVBYPORT_R_HAS_PTR))
#define USE_SERVENT_PTR 
#else
#undef USE_SERVENT_PTR
#endif
#if defined(HAS_GETHOSTENT_R) && (GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBWRE || GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBIE || GETHOSTENT_R_PROTO == REENTRANT_PROTO_S_SBIE || GETHOSTENT_R_PROTO == REENTRANT_PROTO_S_SBI || GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBI)
#define GETHOSTENT_R_HAS_BUFFER 
#else
#undef GETHOSTENT_R_HAS_BUFFER
#endif
#if defined(HAS_GETHOSTBYADDR_R) && (GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_CWISBWRE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CWISBWIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CWISBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_TWISBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CIISBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CSBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_TSBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_TsISBWRE)
#define GETHOSTBYADDR_R_HAS_BUFFER 
#else
#undef GETHOSTBYADDR_R_HAS_BUFFER
#endif
#if defined(HAS_GETHOSTBYNAME_R) && (GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWRE || GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_S_CSBIE)
#define GETHOSTBYNAME_R_HAS_BUFFER 
#else
#undef GETHOSTBYNAME_R_HAS_BUFFER
#endif
#if (defined(GETHOSTENT_R_HAS_BUFFER) || defined(GETHOSTBYADDR_R_HAS_BUFFER) || defined(GETHOSTBYNAME_R_HAS_BUFFER))
#define USE_HOSTENT_BUFFER 
#else
#undef USE_HOSTENT_BUFFER
#endif
#if defined(HAS_GETNETENT_R) && (GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBWRE || GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBIE || GETNETENT_R_PROTO == REENTRANT_PROTO_S_SBIE || GETNETENT_R_PROTO == REENTRANT_PROTO_S_SBI || GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBI)
#define GETNETENT_R_HAS_BUFFER 
#else
#undef GETNETENT_R_HAS_BUFFER
#endif
#if defined(HAS_GETNETBYADDR_R) && (GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_UISBWRE || GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_LISBI || GETNETBYADDR_R_PROTO == REENTRANT_PROTO_S_TISBI || GETNETBYADDR_R_PROTO == REENTRANT_PROTO_S_LISBI || GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_uISBWRE)
#define GETNETBYADDR_R_HAS_BUFFER 
#else
#undef GETNETBYADDR_R_HAS_BUFFER
#endif
#if defined(HAS_GETNETBYNAME_R) && (GETNETBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWRE || GETNETBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBI || GETNETBYNAME_R_PROTO == REENTRANT_PROTO_S_CSBI)
#define GETNETBYNAME_R_HAS_BUFFER 
#else
#undef GETNETBYNAME_R_HAS_BUFFER
#endif
#if (defined(GETNETENT_R_HAS_BUFFER) || defined(GETNETBYADDR_R_HAS_BUFFER) || defined(GETNETBYNAME_R_HAS_BUFFER))
#define USE_NETENT_BUFFER 
#else
#undef USE_NETENT_BUFFER
#endif
#if defined(HAS_GETPROTOENT_R) && (GETPROTOENT_R_PROTO == REENTRANT_PROTO_I_SBWR || GETPROTOENT_R_PROTO == REENTRANT_PROTO_I_SBI || GETPROTOENT_R_PROTO == REENTRANT_PROTO_S_SBI)
#define GETPROTOENT_R_HAS_BUFFER 
#else
#undef GETPROTOENT_R_HAS_BUFFER
#endif
#if defined(HAS_GETPROTOBYNAME_R) && (GETPROTOBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWR || GETPROTOBYNAME_R_PROTO == REENTRANT_PROTO_S_CSBI)
#define GETPROTOBYNAME_R_HAS_BUFFER 
#else
#undef GETPROTOBYNAME_R_HAS_BUFFER
#endif
#if defined(HAS_GETPROTOBYNUMBER_R) && (GETPROTOBYNUMBER_R_PROTO == REENTRANT_PROTO_I_ISBWR || GETPROTOBYNUMBER_R_PROTO == REENTRANT_PROTO_S_ISBI)
#define GETPROTOBYNUMBER_R_HAS_BUFFER 
#else
#undef GETPROTOBYNUMBER_R_HAS_BUFFER
#endif
#if (defined(GETPROTOENT_R_HAS_BUFFER) || defined(GETPROTOBYNAME_R_HAS_BUFFER) || defined(GETPROTOBYNUMBER_R_HAS_BUFFER))
#define USE_PROTOENT_BUFFER 
#else
#undef USE_PROTOENT_BUFFER
#endif
#if defined(HAS_GETSERVENT_R) && (GETSERVENT_R_PROTO == REENTRANT_PROTO_I_SBWR || GETSERVENT_R_PROTO == REENTRANT_PROTO_I_SBI || GETSERVENT_R_PROTO == REENTRANT_PROTO_S_SBI)
#define GETSERVENT_R_HAS_BUFFER 
#else
#undef GETSERVENT_R_HAS_BUFFER
#endif
#if defined(HAS_GETSERVBYNAME_R) && (GETSERVBYNAME_R_PROTO == REENTRANT_PROTO_I_CCSBWR || GETSERVBYNAME_R_PROTO == REENTRANT_PROTO_S_CCSBI)
#define GETSERVBYNAME_R_HAS_BUFFER 
#else
#undef GETSERVBYNAME_R_HAS_BUFFER
#endif
#if defined(HAS_GETSERVBYPORT_R) && (GETSERVBYPORT_R_PROTO == REENTRANT_PROTO_I_ICSBWR || GETSERVBYPORT_R_PROTO == REENTRANT_PROTO_S_ICSBI)
#define GETSERVBYPORT_R_HAS_BUFFER 
#else
#undef GETSERVBYPORT_R_HAS_BUFFER
#endif
#if (defined(GETSERVENT_R_HAS_BUFFER) || defined(GETSERVBYNAME_R_HAS_BUFFER) || defined(GETSERVBYPORT_R_HAS_BUFFER))
#define USE_SERVENT_BUFFER 
#else
#undef USE_SERVENT_BUFFER
#endif
#if defined(HAS_GETHOSTENT_R) && (GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBWRE || GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBIE || GETHOSTENT_R_PROTO == REENTRANT_PROTO_S_SBIE)
#define GETHOSTENT_R_HAS_ERRNO 
#else
#undef GETHOSTENT_R_HAS_ERRNO
#endif
#if defined(HAS_GETHOSTBYADDR_R) && (GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_CWISBWRE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CWISBWIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CWISBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_TWISBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CIISBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CSBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_TSBIE || GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_TsISBWRE)
#define GETHOSTBYADDR_R_HAS_ERRNO 
#else
#undef GETHOSTBYADDR_R_HAS_ERRNO
#endif
#if defined(HAS_GETHOSTBYNAME_R) && (GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWRE || GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_S_CSBIE)
#define GETHOSTBYNAME_R_HAS_ERRNO 
#else
#undef GETHOSTBYNAME_R_HAS_ERRNO
#endif
#if (defined(GETHOSTENT_R_HAS_ERRNO) || defined(GETHOSTBYADDR_R_HAS_ERRNO) || defined(GETHOSTBYNAME_R_HAS_ERRNO))
#define USE_HOSTENT_ERRNO 
#else
#undef USE_HOSTENT_ERRNO
#endif
#if defined(HAS_GETNETENT_R) && (GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBWRE || GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBIE || GETNETENT_R_PROTO == REENTRANT_PROTO_S_SBIE)
#define GETNETENT_R_HAS_ERRNO 
#else
#undef GETNETENT_R_HAS_ERRNO
#endif
#if defined(HAS_GETNETBYADDR_R) && (GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_UISBWRE || GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_uISBWRE)
#define GETNETBYADDR_R_HAS_ERRNO 
#else
#undef GETNETBYADDR_R_HAS_ERRNO
#endif
#if defined(HAS_GETNETBYNAME_R) && (GETNETBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWRE)
#define GETNETBYNAME_R_HAS_ERRNO 
#else
#undef GETNETBYNAME_R_HAS_ERRNO
#endif
#if (defined(GETNETENT_R_HAS_ERRNO) || defined(GETNETBYADDR_R_HAS_ERRNO) || defined(GETNETBYNAME_R_HAS_ERRNO))
#define USE_NETENT_ERRNO 
#else
#undef USE_NETENT_ERRNO
#endif
#ifdef HAS_ASCTIME_R
#endif
#ifdef HAS_CRYPT_R
#if CRYPT_R_PROTO == REENTRANT_PROTO_B_CCD
#else
#endif
#endif
#ifdef HAS_CTIME_R
#endif
#ifdef HAS_GETGRNAM_R
# ifdef USE_GRENT_PTR
# endif
# ifdef USE_GRENT_FPTR
# endif
#endif
#ifdef HAS_GETHOSTBYNAME_R
# if GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_I_CSD
# else
# endif
# ifdef USE_HOSTENT_PTR
# endif
# ifdef USE_HOSTENT_ERRNO
# endif
#endif
#ifdef HAS_GETLOGIN_R
#endif
#ifdef HAS_GETNETBYNAME_R
# if GETNETBYNAME_R_PROTO == REENTRANT_PROTO_I_CSD
# else
# endif
# ifdef USE_NETENT_PTR
# endif
# ifdef USE_NETENT_ERRNO
# endif
#endif
#ifdef HAS_GETPROTOBYNAME_R
# if GETPROTOBYNAME_R_PROTO == REENTRANT_PROTO_I_CSD
# else
# endif
# ifdef USE_PROTOENT_PTR
# endif
# ifdef USE_PROTOENT_ERRNO
# endif
#endif
#ifdef HAS_GETPWNAM_R
# ifdef USE_PWENT_PTR
# endif
# ifdef USE_PWENT_FPTR
# endif
#endif
#ifdef HAS_GETSERVBYNAME_R
# if GETSERVBYNAME_R_PROTO == REENTRANT_PROTO_I_CCSD
# else
# endif
# ifdef USE_SERVENT_PTR
# endif
# ifdef USE_SERVENT_ERRNO
# endif
#endif
#ifdef HAS_GETSPNAM_R
# ifdef USE_SPENT_PTR
# endif
# ifdef USE_SPENT_FPTR
# endif
#endif
#ifdef HAS_READDIR_R
# if READDIR_R_PROTO == REENTRANT_PROTO_I_TSR
# endif
#endif
#ifdef HAS_READDIR64_R
# if READDIR64_R_PROTO == REENTRANT_PROTO_I_TSR
# endif
#endif
#ifdef HAS_SETLOCALE_R
#endif
#ifdef HAS_STRERROR_R
#endif
#ifdef HAS_TTYNAME_R
#endif
#ifdef HAS_ASCTIME_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef asctime
# if !defined(asctime) && ASCTIME_R_PROTO == REENTRANT_PROTO_B_SB
#define asctime(a) asctime_r(a, PL_reentrant_buffer->_asctime_buffer)
# endif
# if !defined(asctime) && ASCTIME_R_PROTO == REENTRANT_PROTO_B_SBI
#define asctime(a) asctime_r(a, PL_reentrant_buffer->_asctime_buffer, PL_reentrant_buffer->_asctime_size)
# endif
# if !defined(asctime) && ASCTIME_R_PROTO == REENTRANT_PROTO_I_SB
#define asctime(a) (asctime_r(a, PL_reentrant_buffer->_asctime_buffer) == 0 ? PL_reentrant_buffer->_asctime_buffer : 0)
# endif
# if !defined(asctime) && ASCTIME_R_PROTO == REENTRANT_PROTO_I_SBI
#define asctime(a) (asctime_r(a, PL_reentrant_buffer->_asctime_buffer, PL_reentrant_buffer->_asctime_size) == 0 ? PL_reentrant_buffer->_asctime_buffer : 0)
# endif
# endif
#endif
#ifdef HAS_CRYPT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef crypt
# if !defined(crypt) && CRYPT_R_PROTO == REENTRANT_PROTO_B_CCS
#define crypt(a,b) crypt_r(a, b, PL_reentrant_buffer->_crypt_struct_buffer)
# endif
# if !defined(crypt) && CRYPT_R_PROTO == REENTRANT_PROTO_B_CCD
#define crypt(a,b) crypt_r(a, b, &PL_reentrant_buffer->_crypt_data)
# endif
# endif
#endif
#ifdef HAS_CTERMID_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef ctermid
# if !defined(ctermid) && CTERMID_R_PROTO == REENTRANT_PROTO_B_B
#define ctermid(a) ctermid_r(a)
# endif
# endif
#endif
#ifdef HAS_CTIME_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef ctime
# if !defined(ctime) && CTIME_R_PROTO == REENTRANT_PROTO_B_SB
#define ctime(a) ctime_r(a, PL_reentrant_buffer->_ctime_buffer)
# endif
# if !defined(ctime) && CTIME_R_PROTO == REENTRANT_PROTO_B_SBI
#define ctime(a) ctime_r(a, PL_reentrant_buffer->_ctime_buffer, PL_reentrant_buffer->_ctime_size)
# endif
# if !defined(ctime) && CTIME_R_PROTO == REENTRANT_PROTO_I_SB
#define ctime(a) (ctime_r(a, PL_reentrant_buffer->_ctime_buffer) == 0 ? PL_reentrant_buffer->_ctime_buffer : 0)
# endif
# if !defined(ctime) && CTIME_R_PROTO == REENTRANT_PROTO_I_SBI
#define ctime(a) (ctime_r(a, PL_reentrant_buffer->_ctime_buffer, PL_reentrant_buffer->_ctime_size) == 0 ? PL_reentrant_buffer->_ctime_buffer : 0)
# endif
# endif
#endif
#ifdef HAS_ENDGRENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef endgrent
# if !defined(endgrent) && ENDGRENT_R_PROTO == REENTRANT_PROTO_I_H
#define endgrent() (endgrent_r(&PL_reentrant_buffer->_grent_fptr) == 0 ? 1 : 0)
# endif
# if !defined(endgrent) && ENDGRENT_R_PROTO == REENTRANT_PROTO_V_H
#define endgrent() endgrent_r(&PL_reentrant_buffer->_grent_fptr)
# endif
# endif
#endif
#ifdef HAS_ENDHOSTENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef endhostent
# if !defined(endhostent) && ENDHOSTENT_R_PROTO == REENTRANT_PROTO_I_D
#define endhostent() (endhostent_r(&PL_reentrant_buffer->_hostent_data) == 0 ? 1 : 0)
# endif
# if !defined(endhostent) && ENDHOSTENT_R_PROTO == REENTRANT_PROTO_V_D
#define endhostent() endhostent_r(&PL_reentrant_buffer->_hostent_data)
# endif
# endif
#endif
#ifdef HAS_ENDNETENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef endnetent
# if !defined(endnetent) && ENDNETENT_R_PROTO == REENTRANT_PROTO_I_D
#define endnetent() (endnetent_r(&PL_reentrant_buffer->_netent_data) == 0 ? 1 : 0)
# endif
# if !defined(endnetent) && ENDNETENT_R_PROTO == REENTRANT_PROTO_V_D
#define endnetent() endnetent_r(&PL_reentrant_buffer->_netent_data)
# endif
# endif
#endif
#ifdef HAS_ENDPROTOENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef endprotoent
# if !defined(endprotoent) && ENDPROTOENT_R_PROTO == REENTRANT_PROTO_I_D
#define endprotoent() (endprotoent_r(&PL_reentrant_buffer->_protoent_data) == 0 ? 1 : 0)
# endif
# if !defined(endprotoent) && ENDPROTOENT_R_PROTO == REENTRANT_PROTO_V_D
#define endprotoent() endprotoent_r(&PL_reentrant_buffer->_protoent_data)
# endif
# endif
#endif
#ifdef HAS_ENDPWENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef endpwent
# if !defined(endpwent) && ENDPWENT_R_PROTO == REENTRANT_PROTO_I_H
#define endpwent() (endpwent_r(&PL_reentrant_buffer->_pwent_fptr) == 0 ? 1 : 0)
# endif
# if !defined(endpwent) && ENDPWENT_R_PROTO == REENTRANT_PROTO_V_H
#define endpwent() endpwent_r(&PL_reentrant_buffer->_pwent_fptr)
# endif
# endif
#endif
#ifdef HAS_ENDSERVENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef endservent
# if !defined(endservent) && ENDSERVENT_R_PROTO == REENTRANT_PROTO_I_D
#define endservent() (endservent_r(&PL_reentrant_buffer->_servent_data) == 0 ? 1 : 0)
# endif
# if !defined(endservent) && ENDSERVENT_R_PROTO == REENTRANT_PROTO_V_D
#define endservent() endservent_r(&PL_reentrant_buffer->_servent_data)
# endif
# endif
#endif
#ifdef HAS_GETGRENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getgrent
# if !defined(getgrent) && GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBWR
#define getgrent() ((PL_reentrant_retint = getgrent_r(&PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size, &PL_reentrant_buffer->_grent_ptr)) == 0 ? PL_reentrant_buffer->_grent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrent") : 0))
# endif
# if !defined(getgrent) && GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBIR
#define getgrent() ((PL_reentrant_retint = getgrent_r(&PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size, &PL_reentrant_buffer->_grent_ptr)) == 0 ? PL_reentrant_buffer->_grent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrent") : 0))
# endif
# if !defined(getgrent) && GETGRENT_R_PROTO == REENTRANT_PROTO_S_SBW
#define getgrent() (getgrent_r(&PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size) ? &PL_reentrant_buffer->_grent_struct : ((errno == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrent") : 0))
# endif
# if !defined(getgrent) && GETGRENT_R_PROTO == REENTRANT_PROTO_S_SBI
#define getgrent() (getgrent_r(&PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size) ? &PL_reentrant_buffer->_grent_struct : ((errno == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrent") : 0))
# endif
# if !defined(getgrent) && GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBI
#define getgrent() ((PL_reentrant_retint = getgrent_r(&PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size)) == 0 ? &PL_reentrant_buffer->_grent_struct : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrent") : 0))
# endif
# if !defined(getgrent) && GETGRENT_R_PROTO == REENTRANT_PROTO_I_SBIH
#define getgrent() ((PL_reentrant_retint = getgrent_r(&PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size, &PL_reentrant_buffer->_grent_fptr)) == 0 ? &PL_reentrant_buffer->_grent_struct : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrent") : 0))
# endif
# endif
#endif
#ifdef HAS_GETGRGID_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getgrgid
# if !defined(getgrgid) && GETGRGID_R_PROTO == REENTRANT_PROTO_I_TSBWR
#define getgrgid(a) ((PL_reentrant_retint = getgrgid_r(a, &PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size, &PL_reentrant_buffer->_grent_ptr)) == 0 ? PL_reentrant_buffer->_grent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrgid", a) : 0))
# endif
# if !defined(getgrgid) && GETGRGID_R_PROTO == REENTRANT_PROTO_I_TSBIR
#define getgrgid(a) ((PL_reentrant_retint = getgrgid_r(a, &PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size, &PL_reentrant_buffer->_grent_ptr)) == 0 ? PL_reentrant_buffer->_grent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrgid", a) : 0))
# endif
# if !defined(getgrgid) && GETGRGID_R_PROTO == REENTRANT_PROTO_I_TSBI
#define getgrgid(a) ((PL_reentrant_retint = getgrgid_r(a, &PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size)) == 0 ? &PL_reentrant_buffer->_grent_struct : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrgid", a) : 0))
# endif
# if !defined(getgrgid) && GETGRGID_R_PROTO == REENTRANT_PROTO_S_TSBI
#define getgrgid(a) (getgrgid_r(a, &PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size) ? &PL_reentrant_buffer->_grent_struct : ((errno == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrgid", a) : 0))
# endif
# endif
#endif
#ifdef HAS_GETGRNAM_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getgrnam
# if !defined(getgrnam) && GETGRNAM_R_PROTO == REENTRANT_PROTO_I_CSBWR
#define getgrnam(a) ((PL_reentrant_retint = getgrnam_r(a, &PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size, &PL_reentrant_buffer->_grent_ptr)) == 0 ? PL_reentrant_buffer->_grent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrnam", a) : 0))
# endif
# if !defined(getgrnam) && GETGRNAM_R_PROTO == REENTRANT_PROTO_I_CSBIR
#define getgrnam(a) ((PL_reentrant_retint = getgrnam_r(a, &PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size, &PL_reentrant_buffer->_grent_ptr)) == 0 ? PL_reentrant_buffer->_grent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrnam", a) : 0))
# endif
# if !defined(getgrnam) && GETGRNAM_R_PROTO == REENTRANT_PROTO_S_CBI
#define getgrnam(a) (getgrnam_r(a, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size) ? PL_reentrant_buffer->_grent_buffer : ((errno == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrnam", a) : 0))
# endif
# if !defined(getgrnam) && GETGRNAM_R_PROTO == REENTRANT_PROTO_I_CSBI
#define getgrnam(a) ((PL_reentrant_retint = getgrnam_r(a, &PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size)) == 0 ? &PL_reentrant_buffer->_grent_struct : ((PL_reentrant_retint == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrnam", a) : 0))
# endif
# if !defined(getgrnam) && GETGRNAM_R_PROTO == REENTRANT_PROTO_S_CSBI
#define getgrnam(a) (getgrnam_r(a, &PL_reentrant_buffer->_grent_struct, PL_reentrant_buffer->_grent_buffer, PL_reentrant_buffer->_grent_size) ? &PL_reentrant_buffer->_grent_struct : ((errno == ERANGE) ? (struct group *) Perl_reentrant_retry("getgrnam", a) : 0))
# endif
# endif
#endif
#ifdef HAS_GETHOSTBYADDR_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef gethostbyaddr
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_CWISBWRE
#define gethostbyaddr(a,b,c) ((PL_reentrant_retint = gethostbyaddr_r(a, b, c, &PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_ptr, &PL_reentrant_buffer->_hostent_errno)) == 0 ? PL_reentrant_buffer->_hostent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CWISBWIE
#define gethostbyaddr(a,b,c) (gethostbyaddr_r(a, b, c, &PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno) ? &PL_reentrant_buffer->_hostent_struct : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CWISBIE
#define gethostbyaddr(a,b,c) (gethostbyaddr_r(a, b, c, &PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno) ? &PL_reentrant_buffer->_hostent_struct : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_TWISBIE
#define gethostbyaddr(a,b,c) (gethostbyaddr_r(a, b, c, &PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno) ? &PL_reentrant_buffer->_hostent_struct : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CIISBIE
#define gethostbyaddr(a,b,c) (gethostbyaddr_r(a, b, c, &PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno) ? &PL_reentrant_buffer->_hostent_struct : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_CSBIE
#define gethostbyaddr(a,b,c) (gethostbyaddr_r(a, b, c, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno) ? 1 : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_S_TSBIE
#define gethostbyaddr(a,b,c) (gethostbyaddr_r(a, b, c, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno) ? 1 : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_CWISD
#define gethostbyaddr(a,b,c) ((PL_reentrant_retint = gethostbyaddr_r(a, b, c, &PL_reentrant_buffer->_hostent_struct, &PL_reentrant_buffer->_hostent_data)) == 0 ? &PL_reentrant_buffer->_hostent_struct : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_CIISD
#define gethostbyaddr(a,b,c) ((PL_reentrant_retint = gethostbyaddr_r(a, b, c, &PL_reentrant_buffer->_hostent_struct, &PL_reentrant_buffer->_hostent_data)) == 0 ? &PL_reentrant_buffer->_hostent_struct : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_CII
#define gethostbyaddr(a,b,c) ((PL_reentrant_retint = gethostbyaddr_r(a, b, c)) == 0 ? 1 : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# if !defined(gethostbyaddr) && GETHOSTBYADDR_R_PROTO == REENTRANT_PROTO_I_TsISBWRE
#define gethostbyaddr(a,b,c) ((PL_reentrant_retint = gethostbyaddr_r(a, b, c, &PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_ptr, &PL_reentrant_buffer->_hostent_errno)) == 0 ? PL_reentrant_buffer->_hostent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyaddr", a, b, c) : 0))
# endif
# endif
#endif
#ifdef HAS_GETHOSTBYNAME_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef gethostbyname
# if !defined(gethostbyname) && GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWRE
#define gethostbyname(a) ((PL_reentrant_retint = gethostbyname_r(a, &PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_ptr, &PL_reentrant_buffer->_hostent_errno)) == 0 ? PL_reentrant_buffer->_hostent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyname", a) : 0))
# endif
# if !defined(gethostbyname) && GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_S_CSBIE
#define gethostbyname(a) (gethostbyname_r(a, &PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno) ? &PL_reentrant_buffer->_hostent_struct : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyname", a) : 0))
# endif
# if !defined(gethostbyname) && GETHOSTBYNAME_R_PROTO == REENTRANT_PROTO_I_CSD
#define gethostbyname(a) ((PL_reentrant_retint = gethostbyname_r(a, &PL_reentrant_buffer->_hostent_struct, &PL_reentrant_buffer->_hostent_data)) == 0 ? &PL_reentrant_buffer->_hostent_struct : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostbyname", a) : 0))
# endif
# endif
#endif
#ifdef HAS_GETHOSTENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef gethostent
# if !defined(gethostent) && GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBWRE
#define gethostent() ((PL_reentrant_retint = gethostent_r(&PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_ptr, &PL_reentrant_buffer->_hostent_errno)) == 0 ? PL_reentrant_buffer->_hostent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostent") : 0))
# endif
# if !defined(gethostent) && GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBIE
#define gethostent() ((PL_reentrant_retint = gethostent_r(&PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno)) == 0 ? &PL_reentrant_buffer->_hostent_struct : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostent") : 0))
# endif
# if !defined(gethostent) && GETHOSTENT_R_PROTO == REENTRANT_PROTO_S_SBIE
#define gethostent() (gethostent_r(&PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size, &PL_reentrant_buffer->_hostent_errno) ? &PL_reentrant_buffer->_hostent_struct : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostent") : 0))
# endif
# if !defined(gethostent) && GETHOSTENT_R_PROTO == REENTRANT_PROTO_S_SBI
#define gethostent() (gethostent_r(&PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size) ? &PL_reentrant_buffer->_hostent_struct : ((errno == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostent") : 0))
# endif
# if !defined(gethostent) && GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SBI
#define gethostent() ((PL_reentrant_retint = gethostent_r(&PL_reentrant_buffer->_hostent_struct, PL_reentrant_buffer->_hostent_buffer, PL_reentrant_buffer->_hostent_size)) == 0 ? &PL_reentrant_buffer->_hostent_struct : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostent") : 0))
# endif
# if !defined(gethostent) && GETHOSTENT_R_PROTO == REENTRANT_PROTO_I_SD
#define gethostent() ((PL_reentrant_retint = gethostent_r(&PL_reentrant_buffer->_hostent_struct, &PL_reentrant_buffer->_hostent_data)) == 0 ? &PL_reentrant_buffer->_hostent_struct : ((PL_reentrant_retint == ERANGE) ? (struct hostent *) Perl_reentrant_retry("gethostent") : 0))
# endif
# endif
#endif
#ifdef HAS_GETLOGIN_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getlogin
# if !defined(getlogin) && GETLOGIN_R_PROTO == REENTRANT_PROTO_I_BW
#define getlogin() ((PL_reentrant_retint = getlogin_r(PL_reentrant_buffer->_getlogin_buffer, PL_reentrant_buffer->_getlogin_size)) == 0 ? PL_reentrant_buffer->_getlogin_buffer : ((PL_reentrant_retint == ERANGE) ? (char *) Perl_reentrant_retry("getlogin") : 0))
# endif
# if !defined(getlogin) && GETLOGIN_R_PROTO == REENTRANT_PROTO_I_BI
#define getlogin() ((PL_reentrant_retint = getlogin_r(PL_reentrant_buffer->_getlogin_buffer, PL_reentrant_buffer->_getlogin_size)) == 0 ? PL_reentrant_buffer->_getlogin_buffer : ((PL_reentrant_retint == ERANGE) ? (char *) Perl_reentrant_retry("getlogin") : 0))
# endif
# if !defined(getlogin) && GETLOGIN_R_PROTO == REENTRANT_PROTO_B_BW
#define getlogin() getlogin_r(PL_reentrant_buffer->_getlogin_buffer, PL_reentrant_buffer->_getlogin_size)
# endif
# if !defined(getlogin) && GETLOGIN_R_PROTO == REENTRANT_PROTO_B_BI
#define getlogin() getlogin_r(PL_reentrant_buffer->_getlogin_buffer, PL_reentrant_buffer->_getlogin_size)
# endif
# endif
#endif
#ifdef HAS_GETNETBYADDR_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getnetbyaddr
# if !defined(getnetbyaddr) && GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_UISBWRE
#define getnetbyaddr(a,b) ((PL_reentrant_retint = getnetbyaddr_r(a, b, &PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size, &PL_reentrant_buffer->_netent_ptr, &PL_reentrant_buffer->_netent_errno)) == 0 ? PL_reentrant_buffer->_netent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyaddr", a, b) : 0))
# endif
# if !defined(getnetbyaddr) && GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_LISBI
#define getnetbyaddr(a,b) ((PL_reentrant_retint = getnetbyaddr_r(a, b, &PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyaddr", a, b) : 0))
# endif
# if !defined(getnetbyaddr) && GETNETBYADDR_R_PROTO == REENTRANT_PROTO_S_TISBI
#define getnetbyaddr(a,b) (getnetbyaddr_r(a, b, &PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size) ? &PL_reentrant_buffer->_netent_struct : ((errno == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyaddr", a, b) : 0))
# endif
# if !defined(getnetbyaddr) && GETNETBYADDR_R_PROTO == REENTRANT_PROTO_S_LISBI
#define getnetbyaddr(a,b) (getnetbyaddr_r(a, b, &PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size) ? &PL_reentrant_buffer->_netent_struct : ((errno == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyaddr", a, b) : 0))
# endif
# if !defined(getnetbyaddr) && GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_TISD
#define getnetbyaddr(a,b) ((PL_reentrant_retint = getnetbyaddr_r(a, b, &PL_reentrant_buffer->_netent_struct, &PL_reentrant_buffer->_netent_data)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyaddr", a, b) : 0))
# endif
# if !defined(getnetbyaddr) && GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_LISD
#define getnetbyaddr(a,b) ((PL_reentrant_retint = getnetbyaddr_r(a, b, &PL_reentrant_buffer->_netent_struct, &PL_reentrant_buffer->_netent_data)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyaddr", a, b) : 0))
# endif
# if !defined(getnetbyaddr) && GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_IISD
#define getnetbyaddr(a,b) ((PL_reentrant_retint = getnetbyaddr_r(a, b, &PL_reentrant_buffer->_netent_struct, &PL_reentrant_buffer->_netent_data)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyaddr", a, b) : 0))
# endif
# if !defined(getnetbyaddr) && GETNETBYADDR_R_PROTO == REENTRANT_PROTO_I_uISBWRE
#define getnetbyaddr(a,b) ((PL_reentrant_retint = getnetbyaddr_r(a, b, &PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size, &PL_reentrant_buffer->_netent_ptr, &PL_reentrant_buffer->_netent_errno)) == 0 ? PL_reentrant_buffer->_netent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyaddr", a, b) : 0))
# endif
# endif
#endif
#ifdef HAS_GETNETBYNAME_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getnetbyname
# if !defined(getnetbyname) && GETNETBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWRE
#define getnetbyname(a) ((PL_reentrant_retint = getnetbyname_r(a, &PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size, &PL_reentrant_buffer->_netent_ptr, &PL_reentrant_buffer->_netent_errno)) == 0 ? PL_reentrant_buffer->_netent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyname", a) : 0))
# endif
# if !defined(getnetbyname) && GETNETBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBI
#define getnetbyname(a) ((PL_reentrant_retint = getnetbyname_r(a, &PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyname", a) : 0))
# endif
# if !defined(getnetbyname) && GETNETBYNAME_R_PROTO == REENTRANT_PROTO_S_CSBI
#define getnetbyname(a) (getnetbyname_r(a, &PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size) ? &PL_reentrant_buffer->_netent_struct : ((errno == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyname", a) : 0))
# endif
# if !defined(getnetbyname) && GETNETBYNAME_R_PROTO == REENTRANT_PROTO_I_CSD
#define getnetbyname(a) ((PL_reentrant_retint = getnetbyname_r(a, &PL_reentrant_buffer->_netent_struct, &PL_reentrant_buffer->_netent_data)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetbyname", a) : 0))
# endif
# endif
#endif
#ifdef HAS_GETNETENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getnetent
# if !defined(getnetent) && GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBWRE
#define getnetent() ((PL_reentrant_retint = getnetent_r(&PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size, &PL_reentrant_buffer->_netent_ptr, &PL_reentrant_buffer->_netent_errno)) == 0 ? PL_reentrant_buffer->_netent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetent") : 0))
# endif
# if !defined(getnetent) && GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBIE
#define getnetent() ((PL_reentrant_retint = getnetent_r(&PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size, &PL_reentrant_buffer->_netent_errno)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetent") : 0))
# endif
# if !defined(getnetent) && GETNETENT_R_PROTO == REENTRANT_PROTO_S_SBIE
#define getnetent() (getnetent_r(&PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size, &PL_reentrant_buffer->_netent_errno) ? &PL_reentrant_buffer->_netent_struct : ((errno == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetent") : 0))
# endif
# if !defined(getnetent) && GETNETENT_R_PROTO == REENTRANT_PROTO_S_SBI
#define getnetent() (getnetent_r(&PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size) ? &PL_reentrant_buffer->_netent_struct : ((errno == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetent") : 0))
# endif
# if !defined(getnetent) && GETNETENT_R_PROTO == REENTRANT_PROTO_I_SBI
#define getnetent() ((PL_reentrant_retint = getnetent_r(&PL_reentrant_buffer->_netent_struct, PL_reentrant_buffer->_netent_buffer, PL_reentrant_buffer->_netent_size)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetent") : 0))
# endif
# if !defined(getnetent) && GETNETENT_R_PROTO == REENTRANT_PROTO_I_SD
#define getnetent() ((PL_reentrant_retint = getnetent_r(&PL_reentrant_buffer->_netent_struct, &PL_reentrant_buffer->_netent_data)) == 0 ? &PL_reentrant_buffer->_netent_struct : ((PL_reentrant_retint == ERANGE) ? (struct netent *) Perl_reentrant_retry("getnetent") : 0))
# endif
# endif
#endif
#ifdef HAS_GETPROTOBYNAME_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getprotobyname
# if !defined(getprotobyname) && GETPROTOBYNAME_R_PROTO == REENTRANT_PROTO_I_CSBWR
#define getprotobyname(a) ((PL_reentrant_retint = getprotobyname_r(a, &PL_reentrant_buffer->_protoent_struct, PL_reentrant_buffer->_protoent_buffer, PL_reentrant_buffer->_protoent_size, &PL_reentrant_buffer->_protoent_ptr)) == 0 ? PL_reentrant_buffer->_protoent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotobyname", a) : 0))
# endif
# if !defined(getprotobyname) && GETPROTOBYNAME_R_PROTO == REENTRANT_PROTO_S_CSBI
#define getprotobyname(a) (getprotobyname_r(a, &PL_reentrant_buffer->_protoent_struct, PL_reentrant_buffer->_protoent_buffer, PL_reentrant_buffer->_protoent_size) ? &PL_reentrant_buffer->_protoent_struct : ((errno == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotobyname", a) : 0))
# endif
# if !defined(getprotobyname) && GETPROTOBYNAME_R_PROTO == REENTRANT_PROTO_I_CSD
#define getprotobyname(a) (REENTR_MEMZERO(&PL_reentrant_buffer->_protoent_data, sizeof(PL_reentrant_buffer->_protoent_data)),(PL_reentrant_retint = getprotobyname_r(a, &PL_reentrant_buffer->_protoent_struct, &PL_reentrant_buffer->_protoent_data)) == 0 ? &PL_reentrant_buffer->_protoent_struct : ((PL_reentrant_retint == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotobyname", a) : 0))
# endif
# endif
#endif
#ifdef HAS_GETPROTOBYNUMBER_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getprotobynumber
# if !defined(getprotobynumber) && GETPROTOBYNUMBER_R_PROTO == REENTRANT_PROTO_I_ISBWR
#define getprotobynumber(a) ((PL_reentrant_retint = getprotobynumber_r(a, &PL_reentrant_buffer->_protoent_struct, PL_reentrant_buffer->_protoent_buffer, PL_reentrant_buffer->_protoent_size, &PL_reentrant_buffer->_protoent_ptr)) == 0 ? PL_reentrant_buffer->_protoent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotobynumber", a) : 0))
# endif
# if !defined(getprotobynumber) && GETPROTOBYNUMBER_R_PROTO == REENTRANT_PROTO_S_ISBI
#define getprotobynumber(a) (getprotobynumber_r(a, &PL_reentrant_buffer->_protoent_struct, PL_reentrant_buffer->_protoent_buffer, PL_reentrant_buffer->_protoent_size) ? &PL_reentrant_buffer->_protoent_struct : ((errno == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotobynumber", a) : 0))
# endif
# if !defined(getprotobynumber) && GETPROTOBYNUMBER_R_PROTO == REENTRANT_PROTO_I_ISD
#define getprotobynumber(a) (REENTR_MEMZERO(&PL_reentrant_buffer->_protoent_data, sizeof(PL_reentrant_buffer->_protoent_data)),(PL_reentrant_retint = getprotobynumber_r(a, &PL_reentrant_buffer->_protoent_struct, &PL_reentrant_buffer->_protoent_data)) == 0 ? &PL_reentrant_buffer->_protoent_struct : ((PL_reentrant_retint == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotobynumber", a) : 0))
# endif
# endif
#endif
#ifdef HAS_GETPROTOENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getprotoent
# if !defined(getprotoent) && GETPROTOENT_R_PROTO == REENTRANT_PROTO_I_SBWR
#define getprotoent() ((PL_reentrant_retint = getprotoent_r(&PL_reentrant_buffer->_protoent_struct, PL_reentrant_buffer->_protoent_buffer, PL_reentrant_buffer->_protoent_size, &PL_reentrant_buffer->_protoent_ptr)) == 0 ? PL_reentrant_buffer->_protoent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotoent") : 0))
# endif
# if !defined(getprotoent) && GETPROTOENT_R_PROTO == REENTRANT_PROTO_I_SBI
#define getprotoent() ((PL_reentrant_retint = getprotoent_r(&PL_reentrant_buffer->_protoent_struct, PL_reentrant_buffer->_protoent_buffer, PL_reentrant_buffer->_protoent_size)) == 0 ? &PL_reentrant_buffer->_protoent_struct : ((PL_reentrant_retint == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotoent") : 0))
# endif
# if !defined(getprotoent) && GETPROTOENT_R_PROTO == REENTRANT_PROTO_S_SBI
#define getprotoent() (getprotoent_r(&PL_reentrant_buffer->_protoent_struct, PL_reentrant_buffer->_protoent_buffer, PL_reentrant_buffer->_protoent_size) ? &PL_reentrant_buffer->_protoent_struct : ((errno == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotoent") : 0))
# endif
# if !defined(getprotoent) && GETPROTOENT_R_PROTO == REENTRANT_PROTO_I_SD
#define getprotoent() (REENTR_MEMZERO(&PL_reentrant_buffer->_protoent_data, sizeof(PL_reentrant_buffer->_protoent_data)),(PL_reentrant_retint = getprotoent_r(&PL_reentrant_buffer->_protoent_struct, &PL_reentrant_buffer->_protoent_data)) == 0 ? &PL_reentrant_buffer->_protoent_struct : ((PL_reentrant_retint == ERANGE) ? (struct protoent *) Perl_reentrant_retry("getprotoent") : 0))
# endif
# endif
#endif
#ifdef HAS_GETPWENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getpwent
# if !defined(getpwent) && GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBWR
#define getpwent() ((PL_reentrant_retint = getpwent_r(&PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size, &PL_reentrant_buffer->_pwent_ptr)) == 0 ? PL_reentrant_buffer->_pwent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwent") : 0))
# endif
# if !defined(getpwent) && GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBIR
#define getpwent() ((PL_reentrant_retint = getpwent_r(&PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size, &PL_reentrant_buffer->_pwent_ptr)) == 0 ? PL_reentrant_buffer->_pwent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwent") : 0))
# endif
# if !defined(getpwent) && GETPWENT_R_PROTO == REENTRANT_PROTO_S_SBW
#define getpwent() (getpwent_r(&PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size) ? &PL_reentrant_buffer->_pwent_struct : ((errno == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwent") : 0))
# endif
# if !defined(getpwent) && GETPWENT_R_PROTO == REENTRANT_PROTO_S_SBI
#define getpwent() (getpwent_r(&PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size) ? &PL_reentrant_buffer->_pwent_struct : ((errno == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwent") : 0))
# endif
# if !defined(getpwent) && GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBI
#define getpwent() ((PL_reentrant_retint = getpwent_r(&PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size)) == 0 ? &PL_reentrant_buffer->_pwent_struct : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwent") : 0))
# endif
# if !defined(getpwent) && GETPWENT_R_PROTO == REENTRANT_PROTO_I_SBIH
#define getpwent() ((PL_reentrant_retint = getpwent_r(&PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size, &PL_reentrant_buffer->_pwent_fptr)) == 0 ? &PL_reentrant_buffer->_pwent_struct : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwent") : 0))
# endif
# endif
#endif
#ifdef HAS_GETPWNAM_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getpwnam
# if !defined(getpwnam) && GETPWNAM_R_PROTO == REENTRANT_PROTO_I_CSBWR
#define getpwnam(a) ((PL_reentrant_retint = getpwnam_r(a, &PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size, &PL_reentrant_buffer->_pwent_ptr)) == 0 ? PL_reentrant_buffer->_pwent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwnam", a) : 0))
# endif
# if !defined(getpwnam) && GETPWNAM_R_PROTO == REENTRANT_PROTO_I_CSBIR
#define getpwnam(a) ((PL_reentrant_retint = getpwnam_r(a, &PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size, &PL_reentrant_buffer->_pwent_ptr)) == 0 ? PL_reentrant_buffer->_pwent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwnam", a) : 0))
# endif
# if !defined(getpwnam) && GETPWNAM_R_PROTO == REENTRANT_PROTO_S_CSBI
#define getpwnam(a) (getpwnam_r(a, &PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size) ? &PL_reentrant_buffer->_pwent_struct : ((errno == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwnam", a) : 0))
# endif
# if !defined(getpwnam) && GETPWNAM_R_PROTO == REENTRANT_PROTO_I_CSBI
#define getpwnam(a) ((PL_reentrant_retint = getpwnam_r(a, &PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size)) == 0 ? &PL_reentrant_buffer->_pwent_struct : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwnam", a) : 0))
# endif
# endif
#endif
#ifdef HAS_GETPWUID_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getpwuid
# if !defined(getpwuid) && GETPWUID_R_PROTO == REENTRANT_PROTO_I_TSBWR
#define getpwuid(a) ((PL_reentrant_retint = getpwuid_r(a, &PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size, &PL_reentrant_buffer->_pwent_ptr)) == 0 ? PL_reentrant_buffer->_pwent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwuid", a) : 0))
# endif
# if !defined(getpwuid) && GETPWUID_R_PROTO == REENTRANT_PROTO_I_TSBIR
#define getpwuid(a) ((PL_reentrant_retint = getpwuid_r(a, &PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size, &PL_reentrant_buffer->_pwent_ptr)) == 0 ? PL_reentrant_buffer->_pwent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwuid", a) : 0))
# endif
# if !defined(getpwuid) && GETPWUID_R_PROTO == REENTRANT_PROTO_I_TSBI
#define getpwuid(a) ((PL_reentrant_retint = getpwuid_r(a, &PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size)) == 0 ? &PL_reentrant_buffer->_pwent_struct : ((PL_reentrant_retint == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwuid", a) : 0))
# endif
# if !defined(getpwuid) && GETPWUID_R_PROTO == REENTRANT_PROTO_S_TSBI
#define getpwuid(a) (getpwuid_r(a, &PL_reentrant_buffer->_pwent_struct, PL_reentrant_buffer->_pwent_buffer, PL_reentrant_buffer->_pwent_size) ? &PL_reentrant_buffer->_pwent_struct : ((errno == ERANGE) ? (struct passwd *) Perl_reentrant_retry("getpwuid", a) : 0))
# endif
# endif
#endif
#ifdef HAS_GETSERVBYNAME_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getservbyname
# if !defined(getservbyname) && GETSERVBYNAME_R_PROTO == REENTRANT_PROTO_I_CCSBWR
#define getservbyname(a,b) ((PL_reentrant_retint = getservbyname_r(a, b, &PL_reentrant_buffer->_servent_struct, PL_reentrant_buffer->_servent_buffer, PL_reentrant_buffer->_servent_size, &PL_reentrant_buffer->_servent_ptr)) == 0 ? PL_reentrant_buffer->_servent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservbyname", a, b) : 0))
# endif
# if !defined(getservbyname) && GETSERVBYNAME_R_PROTO == REENTRANT_PROTO_S_CCSBI
#define getservbyname(a,b) (getservbyname_r(a, b, &PL_reentrant_buffer->_servent_struct, PL_reentrant_buffer->_servent_buffer, PL_reentrant_buffer->_servent_size) ? &PL_reentrant_buffer->_servent_struct : ((errno == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservbyname", a, b) : 0))
# endif
# if !defined(getservbyname) && GETSERVBYNAME_R_PROTO == REENTRANT_PROTO_I_CCSD
#define getservbyname(a,b) (REENTR_MEMZERO(&PL_reentrant_buffer->_servent_data, sizeof(PL_reentrant_buffer->_servent_data)),(PL_reentrant_retint = getservbyname_r(a, b, &PL_reentrant_buffer->_servent_struct, &PL_reentrant_buffer->_servent_data)) == 0 ? &PL_reentrant_buffer->_servent_struct : ((PL_reentrant_retint == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservbyname", a, b) : 0))
# endif
# endif
#endif
#ifdef HAS_GETSERVBYPORT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getservbyport
# if !defined(getservbyport) && GETSERVBYPORT_R_PROTO == REENTRANT_PROTO_I_ICSBWR
#define getservbyport(a,b) ((PL_reentrant_retint = getservbyport_r(a, b, &PL_reentrant_buffer->_servent_struct, PL_reentrant_buffer->_servent_buffer, PL_reentrant_buffer->_servent_size, &PL_reentrant_buffer->_servent_ptr)) == 0 ? PL_reentrant_buffer->_servent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservbyport", a, b) : 0))
# endif
# if !defined(getservbyport) && GETSERVBYPORT_R_PROTO == REENTRANT_PROTO_S_ICSBI
#define getservbyport(a,b) (getservbyport_r(a, b, &PL_reentrant_buffer->_servent_struct, PL_reentrant_buffer->_servent_buffer, PL_reentrant_buffer->_servent_size) ? &PL_reentrant_buffer->_servent_struct : ((errno == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservbyport", a, b) : 0))
# endif
# if !defined(getservbyport) && GETSERVBYPORT_R_PROTO == REENTRANT_PROTO_I_ICSD
#define getservbyport(a,b) (REENTR_MEMZERO(&PL_reentrant_buffer->_servent_data, sizeof(PL_reentrant_buffer->_servent_data)),(PL_reentrant_retint = getservbyport_r(a, b, &PL_reentrant_buffer->_servent_struct, &PL_reentrant_buffer->_servent_data)) == 0 ? &PL_reentrant_buffer->_servent_struct : ((PL_reentrant_retint == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservbyport", a, b) : 0))
# endif
# endif
#endif
#ifdef HAS_GETSERVENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getservent
# if !defined(getservent) && GETSERVENT_R_PROTO == REENTRANT_PROTO_I_SBWR
#define getservent() ((PL_reentrant_retint = getservent_r(&PL_reentrant_buffer->_servent_struct, PL_reentrant_buffer->_servent_buffer, PL_reentrant_buffer->_servent_size, &PL_reentrant_buffer->_servent_ptr)) == 0 ? PL_reentrant_buffer->_servent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservent") : 0))
# endif
# if !defined(getservent) && GETSERVENT_R_PROTO == REENTRANT_PROTO_I_SBI
#define getservent() ((PL_reentrant_retint = getservent_r(&PL_reentrant_buffer->_servent_struct, PL_reentrant_buffer->_servent_buffer, PL_reentrant_buffer->_servent_size)) == 0 ? &PL_reentrant_buffer->_servent_struct : ((PL_reentrant_retint == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservent") : 0))
# endif
# if !defined(getservent) && GETSERVENT_R_PROTO == REENTRANT_PROTO_S_SBI
#define getservent() (getservent_r(&PL_reentrant_buffer->_servent_struct, PL_reentrant_buffer->_servent_buffer, PL_reentrant_buffer->_servent_size) ? &PL_reentrant_buffer->_servent_struct : ((errno == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservent") : 0))
# endif
# if !defined(getservent) && GETSERVENT_R_PROTO == REENTRANT_PROTO_I_SD
#define getservent() (REENTR_MEMZERO(&PL_reentrant_buffer->_servent_data, sizeof(PL_reentrant_buffer->_servent_data)),(PL_reentrant_retint = getservent_r(&PL_reentrant_buffer->_servent_struct, &PL_reentrant_buffer->_servent_data)) == 0 ? &PL_reentrant_buffer->_servent_struct : ((PL_reentrant_retint == ERANGE) ? (struct servent *) Perl_reentrant_retry("getservent") : 0))
# endif
# endif
#endif
#ifdef HAS_GETSPNAM_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef getspnam
# if !defined(getspnam) && GETSPNAM_R_PROTO == REENTRANT_PROTO_I_CSBWR
#define getspnam(a) ((PL_reentrant_retint = getspnam_r(a, &PL_reentrant_buffer->_spent_struct, PL_reentrant_buffer->_spent_buffer, PL_reentrant_buffer->_spent_size, &PL_reentrant_buffer->_spent_ptr)) == 0 ? PL_reentrant_buffer->_spent_ptr : ((PL_reentrant_retint == ERANGE) ? (struct spwd *) Perl_reentrant_retry("getspnam", a) : 0))
# endif
# if !defined(getspnam) && GETSPNAM_R_PROTO == REENTRANT_PROTO_S_CSBI
#define getspnam(a) (getspnam_r(a, &PL_reentrant_buffer->_spent_struct, PL_reentrant_buffer->_spent_buffer, PL_reentrant_buffer->_spent_size) ? &PL_reentrant_buffer->_spent_struct : ((errno == ERANGE) ? (struct spwd *) Perl_reentrant_retry("getspnam", a) : 0))
# endif
# endif
#endif
#ifdef HAS_READDIR_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef readdir
# if !defined(readdir) && READDIR_R_PROTO == REENTRANT_PROTO_I_TSR
#define readdir(a) (readdir_r(a, PL_reentrant_buffer->_readdir_struct, &PL_reentrant_buffer->_readdir_ptr) == 0 ? PL_reentrant_buffer->_readdir_ptr : 0)
# endif
# if !defined(readdir) && READDIR_R_PROTO == REENTRANT_PROTO_I_TS
#define readdir(a) (readdir_r(a, PL_reentrant_buffer->_readdir_struct) == 0 ? PL_reentrant_buffer->_readdir_struct : 0)
# endif
# endif
#endif
#ifdef HAS_READDIR64_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef readdir64
# if !defined(readdir64) && READDIR64_R_PROTO == REENTRANT_PROTO_I_TSR
#define readdir64(a) (readdir64_r(a, PL_reentrant_buffer->_readdir64_struct, &PL_reentrant_buffer->_readdir64_ptr) == 0 ? PL_reentrant_buffer->_readdir64_ptr : 0)
# endif
# if !defined(readdir64) && READDIR64_R_PROTO == REENTRANT_PROTO_I_TS
#define readdir64(a) (readdir64_r(a, PL_reentrant_buffer->_readdir64_struct) == 0 ? PL_reentrant_buffer->_readdir64_struct : 0)
# endif
# endif
#endif
#ifdef HAS_SETGRENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef setgrent
# if !defined(setgrent) && SETGRENT_R_PROTO == REENTRANT_PROTO_I_H
#define setgrent() (setgrent_r(&PL_reentrant_buffer->_grent_fptr) == 0 ? 1 : 0)
# endif
# if !defined(setgrent) && SETGRENT_R_PROTO == REENTRANT_PROTO_V_H
#define setgrent() setgrent_r(&PL_reentrant_buffer->_grent_fptr)
# endif
# endif
#endif
#ifdef HAS_SETHOSTENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef sethostent
# if !defined(sethostent) && SETHOSTENT_R_PROTO == REENTRANT_PROTO_I_ID
#define sethostent(a) (sethostent_r(a, &PL_reentrant_buffer->_hostent_data) == 0 ? 1 : 0)
# endif
# if !defined(sethostent) && SETHOSTENT_R_PROTO == REENTRANT_PROTO_V_ID
#define sethostent(a) sethostent_r(a, &PL_reentrant_buffer->_hostent_data)
# endif
# endif
#endif
#ifdef HAS_SETLOCALE_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef setlocale
# if !defined(setlocale) && SETLOCALE_R_PROTO == REENTRANT_PROTO_I_ICBI
#define setlocale(a,b) (setlocale_r(a, b, PL_reentrant_buffer->_setlocale_buffer, PL_reentrant_buffer->_setlocale_size) == 0 ? PL_reentrant_buffer->_setlocale_buffer : 0)
# endif
# endif
#endif
#ifdef HAS_SETNETENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef setnetent
# if !defined(setnetent) && SETNETENT_R_PROTO == REENTRANT_PROTO_I_ID
#define setnetent(a) (setnetent_r(a, &PL_reentrant_buffer->_netent_data) == 0 ? 1 : 0)
# endif
# if !defined(setnetent) && SETNETENT_R_PROTO == REENTRANT_PROTO_V_ID
#define setnetent(a) setnetent_r(a, &PL_reentrant_buffer->_netent_data)
# endif
# endif
#endif
#ifdef HAS_SETPROTOENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef setprotoent
# if !defined(setprotoent) && SETPROTOENT_R_PROTO == REENTRANT_PROTO_I_ID
#define setprotoent(a) (setprotoent_r(a, &PL_reentrant_buffer->_protoent_data) == 0 ? 1 : 0)
# endif
# if !defined(setprotoent) && SETPROTOENT_R_PROTO == REENTRANT_PROTO_V_ID
#define setprotoent(a) setprotoent_r(a, &PL_reentrant_buffer->_protoent_data)
# endif
# endif
#endif
#ifdef HAS_SETPWENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef setpwent
# if !defined(setpwent) && SETPWENT_R_PROTO == REENTRANT_PROTO_I_H
#define setpwent() (setpwent_r(&PL_reentrant_buffer->_pwent_fptr) == 0 ? 1 : 0)
# endif
# if !defined(setpwent) && SETPWENT_R_PROTO == REENTRANT_PROTO_V_H
#define setpwent() setpwent_r(&PL_reentrant_buffer->_pwent_fptr)
# endif
# endif
#endif
#ifdef HAS_SETSERVENT_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef setservent
# if !defined(setservent) && SETSERVENT_R_PROTO == REENTRANT_PROTO_I_ID
#define setservent(a) (setservent_r(a, &PL_reentrant_buffer->_servent_data) == 0 ? 1 : 0)
# endif
# if !defined(setservent) && SETSERVENT_R_PROTO == REENTRANT_PROTO_V_ID
#define setservent(a) setservent_r(a, &PL_reentrant_buffer->_servent_data)
# endif
# endif
#endif
#ifdef HAS_STRERROR_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef strerror
# if !defined(strerror) && STRERROR_R_PROTO == REENTRANT_PROTO_I_IBW
#define strerror(a) (strerror_r(a, PL_reentrant_buffer->_strerror_buffer, PL_reentrant_buffer->_strerror_size) == 0 ? PL_reentrant_buffer->_strerror_buffer : 0)
# endif
# if !defined(strerror) && STRERROR_R_PROTO == REENTRANT_PROTO_I_IBI
#define strerror(a) (strerror_r(a, PL_reentrant_buffer->_strerror_buffer, PL_reentrant_buffer->_strerror_size) == 0 ? PL_reentrant_buffer->_strerror_buffer : 0)
# endif
# if !defined(strerror) && STRERROR_R_PROTO == REENTRANT_PROTO_B_IBW
#define strerror(a) strerror_r(a, PL_reentrant_buffer->_strerror_buffer, PL_reentrant_buffer->_strerror_size)
# endif
# endif
#endif
#ifdef HAS_TMPNAM_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef tmpnam
# if !defined(tmpnam) && TMPNAM_R_PROTO == REENTRANT_PROTO_B_B
#define tmpnam(a) tmpnam_r(a)
# endif
# endif
#endif
#ifdef HAS_TTYNAME_R
# if defined(PERL_REENTR_API) && (PERL_REENTR_API+0 == 1)
#undef ttyname
# if !defined(ttyname) && TTYNAME_R_PROTO == REENTRANT_PROTO_I_IBW
#define ttyname(a) (ttyname_r(a, PL_reentrant_buffer->_ttyname_buffer, PL_reentrant_buffer->_ttyname_size) == 0 ? PL_reentrant_buffer->_ttyname_buffer : 0)
# endif
# if !defined(ttyname) && TTYNAME_R_PROTO == REENTRANT_PROTO_I_IBI
#define ttyname(a) (ttyname_r(a, PL_reentrant_buffer->_ttyname_buffer, PL_reentrant_buffer->_ttyname_size) == 0 ? PL_reentrant_buffer->_ttyname_buffer : 0)
# endif
# if !defined(ttyname) && TTYNAME_R_PROTO == REENTRANT_PROTO_B_IBI
#define ttyname(a) ttyname_r(a, PL_reentrant_buffer->_ttyname_buffer, PL_reentrant_buffer->_ttyname_size)
# endif
# endif
#endif
#endif
#endif
