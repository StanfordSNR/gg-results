// GGHASH:Va0QFMYhHJBBNiG7owwEtPpV_.0atV5.0U11Xb4RIXuE00001312
#ifndef _XVMCPROTO_H_
#define _XVMCPROTO_H_ 
#define xvmc_QueryVersion 0
#define xvmc_ListSurfaceTypes 1
#define xvmc_CreateContext 2
#define xvmc_DestroyContext 3
#define xvmc_CreateSurface 4
#define xvmc_DestroySurface 5
#define xvmc_CreateSubpicture 6
#define xvmc_DestroySubpicture 7
#define xvmc_ListSubpictureTypes 8
#define xvmc_GetDRInfo 9
#define xvmc_LastRequest xvmc_GetDRInfo
#define xvmcNumRequest (xvmc_LastRequest + 1)
#define sz_xvmcSurfaceInfo 24;
#define sz_xvmcQueryVersionReq 4;
#define sz_xvmcQueryVersionReply 32
#define sz_xvmcListSurfaceTypesReq 8;
#define sz_xvmcListSurfaceTypesReply 32
#define sz_xvmcCreateContextReq 24;
#define sz_xvmcCreateContextReply 32
#define sz_xvmcDestroyContextReq 8;
#define sz_xvmcCreateSurfaceReq 12;
#define sz_xvmcCreateSurfaceReply 32
#define sz_xvmcDestroySurfaceReq 8;
#define sz_xvmcCreateSubpictureReq 20;
#define sz_xvmcCreateSubpictureReply 32
#define sz_xvmcDestroySubpictureReq 8;
#define sz_xvmcListSubpictureTypesReq 12;
#define sz_xvmcListSubpictureTypesReply 32
#define sz_xvmcGetDRInfoReq 16;
#define sz_xvmcGetDRInfoReply 32
#endif
