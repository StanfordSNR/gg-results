// GGHASH:VY8kb5YhehGw9D2KNFc1faqpAW12CRla0jSGvlZIedK00000338a
#if defined(__BORLANDC__) && defined(MNG_STRICT_ANSI)
#pragma option -A
#endif
#ifndef _libmng_conf_h_
#define _libmng_conf_h_ 
#ifdef MNG_MOZILLA_CFG
#include "special\mozcfg\mozlibmngconf.h"
#endif
#if !defined(MNG_SUPPORT_FULL) && !defined(MNG_SUPPORT_LC) && !defined(MNG_SUPPORT_VLC)
#define MNG_SUPPORT_FULL 
#endif
#ifndef MNG_NO_INCLUDE_JNG
#ifdef MNG_SUPPORT_FULL
#define MNG_SUPPORT_IJG6B 
#endif
#ifndef MNG_SUPPORT_IJG6B
#if defined(MNG_BUILD_SO) || defined(MNG_USE_SO) || defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#define MNG_SUPPORT_IJG6B 
#endif
#endif
#if defined(MNG_SUPPORT_IJG6B) && !defined(MNG_SUPPORT_JPEG8) && !defined(MNG_SUPPORT_JPEG12)
#define MNG_SUPPORT_JPEG8 
#endif
#if defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#if defined(MNG_SUPPORT_IJG6B) && defined(__BORLANDC__)
#define MNG_DEFINE_JPEG_STDCALL 
#endif
#endif
#endif
#if !defined(MNG_SUPPORT_READ) && !defined(MNG_SUPPORT_WRITE) && !defined(MNG_SUPPORT_DISPLAY)
#define MNG_SUPPORT_READ 
#if defined(MNG_BUILD_SO) || defined(MNG_USE_SO) || defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#define MNG_SUPPORT_WRITE 
#endif
#define MNG_SUPPORT_DISPLAY 
#endif
#ifndef MNG_ACCESS_CHUNKS
#if defined(MNG_BUILD_SO) || defined(MNG_USE_SO) || defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#define MNG_ACCESS_CHUNKS 
#endif
#endif
#define MNG_GAMMA_ONLY 
#ifndef MNG_STORE_CHUNKS
#if defined(MNG_BUILD_SO) || defined(MNG_USE_SO) || defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#define MNG_STORE_CHUNKS 
#endif
#endif
#if !defined(MNG_ERROR_TELLTALE) && !defined(MNG_TRACE_TELLTALE)
#if defined(MNG_BUILD_SO) || defined(MNG_USE_SO) || defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#define MNG_ERROR_TELLTALE 
#define MNG_TRACE_TELLTALE 
#endif
#endif
#if !defined(MNG_VERSION_QUERY_SUPPORT) && !defined(MNG_NO_VERSION_QUERY_SUPPORT)
#define MNG_VERSION_QUERY_SUPPORT 
#endif
#if !defined(MNG_NO_SUPPORT_FUNCQUERY) && !defined(MNG_SUPPORT_FUNCQUERY)
#if defined(MNG_BUILD_SO) || defined(MNG_USE_SO) || defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#define MNG_SUPPORT_FUNCQUERY 
#endif
#endif
#ifndef MNG_SUPPORT_DYNAMICMNG
#if defined(MNG_BUILD_SO) || defined(MNG_USE_SO) || defined(MNG_BUILD_DLL) || defined(MNG_USE_DLL)
#define MNG_SUPPORT_DYNAMICMNG 
#endif
#endif
#ifndef MNG_SUPPORT_DYNAMICMNG
#ifndef MNG_SKIPCHUNK_evNT
#define MNG_SKIPCHUNK_evNT 
#endif
#endif
#ifdef MNG_INCLUDE_JNG
#ifndef MNG_NO_ACCESS_JPEG
#ifndef MNG_ACCESS_JPEG
#define MNG_ACCESS_JPEG 
#endif
#endif
#endif
#ifdef MNG_INCLUDE_ZLIB
#ifndef MNG_NO_ACCESS_ZLIB
#ifndef MNG_ACCESS_ZLIB
#define MNG_ACCESS_ZLIB 
#endif
#endif
#endif
#endif
