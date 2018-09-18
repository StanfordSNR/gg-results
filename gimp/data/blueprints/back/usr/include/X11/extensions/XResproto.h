// GGHASH:VoonQdfLFDnGvDEQGA9L5cNSXGidATeuVAFPKL9QUUGc00001577
#ifndef _XRESPROTO_H
#define _XRESPROTO_H 
#define XRES_MAJOR_VERSION 1
#define XRES_MINOR_VERSION 2
#define XRES_NAME "X-Resource"
#define X_XResQueryVersion 0
#define X_XResQueryClients 1
#define X_XResQueryClientResources 2
#define X_XResQueryClientPixmapBytes 3
#define X_XResQueryClientIds 4
#define X_XResQueryResourceBytes 5
#define sz_xXResClient 8
#define sz_xXResType 8
#define sz_xXResQueryVersionReq 8
#define sz_xXResQueryVersionReply 32
#define sz_xXResQueryClientsReq 4
#define sz_xXResQueryClientsReply 32
#define sz_xXResQueryClientResourcesReq 8
#define sz_xXResQueryClientResourcesReply 32
#define sz_xXResQueryClientPixmapBytesReq 8
#define sz_xXResQueryClientPixmapBytesReply 32
#define X_XResClientXIDMask 0x01
#define X_XResLocalClientPIDMask 0x02
#define sz_xXResClientIdSpec 8
#define sz_xResClientIdValue (sz_xXResClientIdSpec + 4)
#define sz_xXResQueryClientIdsReq 8
#define sz_xXResQueryClientIdsReply 32
#define sz_xXResResourceIdSpec 8
#define sz_xXResQueryResourceBytesReq 12
#define sz_xXResResourceSizeSpec (sz_xXResResourceIdSpec + 12)
#define sz_xXResResourceSizeValue (sz_xXResResourceSizeSpec + 4)
#define sz_xXResQueryResourceBytesReply 32
#endif
