// GGHASH:VPrRr4sK8Y2VYhkVIh9BERFwSDFnrcS_RZJ1c4q1W5Ao000014fd
#ifndef __PATCHLEVEL_H_INCLUDED__
#define PERL_REVISION 5
#define PERL_VERSION 26
#define PERL_SUBVERSION 1
#define PERL_API_REVISION 5
#define PERL_API_VERSION 26
#define PERL_API_SUBVERSION 0
#define __PATCHLEVEL_H_INCLUDED__ 
#endif
#if !defined(PERL_PATCHLEVEL_H_IMPLICIT) && !defined(LOCAL_PATCH_COUNT)
# if defined(PERL_IS_MINIPERL)
#define PERL_PATCHNUM "UNKNOWN-miniperl"
#define PERL_GIT_UNPUSHED_COMMITS 
# elif defined(PERL_MICRO)
#define PERL_PATCHNUM "UNKNOWN-microperl"
#define PERL_GIT_UNPUSHED_COMMITS 
# else
#include "git_version.h"
# endif
#ifdef PERL_GIT_UNCOMMITTED_CHANGES
#endif
#ifdef DEBIAN
#include "patchlevel-debian.h"
#endif
#define LOCAL_PATCH_COUNT ((int)(C_ARRAY_LENGTH(local_patches)-2))
#define PATCHLEVEL PERL_VERSION
#undef SUBVERSION
#define SUBVERSION PERL_SUBVERSION
#endif
