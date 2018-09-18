// GGHASH:VFJstS6wYp9HdkYiGMxUB.7PF9VjUxXINfe57qkUxYsw00002afd
#ifndef __ETNAVIV_DRM_H__
#define __ETNAVIV_DRM_H__ 
#include "drm.h"
#if defined(__cplusplus)
#endif
#define ETNAVIV_PARAM_GPU_MODEL 0x01
#define ETNAVIV_PARAM_GPU_REVISION 0x02
#define ETNAVIV_PARAM_GPU_FEATURES_0 0x03
#define ETNAVIV_PARAM_GPU_FEATURES_1 0x04
#define ETNAVIV_PARAM_GPU_FEATURES_2 0x05
#define ETNAVIV_PARAM_GPU_FEATURES_3 0x06
#define ETNAVIV_PARAM_GPU_FEATURES_4 0x07
#define ETNAVIV_PARAM_GPU_FEATURES_5 0x08
#define ETNAVIV_PARAM_GPU_FEATURES_6 0x09
#define ETNAVIV_PARAM_GPU_STREAM_COUNT 0x10
#define ETNAVIV_PARAM_GPU_REGISTER_MAX 0x11
#define ETNAVIV_PARAM_GPU_THREAD_COUNT 0x12
#define ETNAVIV_PARAM_GPU_VERTEX_CACHE_SIZE 0x13
#define ETNAVIV_PARAM_GPU_SHADER_CORE_COUNT 0x14
#define ETNAVIV_PARAM_GPU_PIXEL_PIPES 0x15
#define ETNAVIV_PARAM_GPU_VERTEX_OUTPUT_BUFFER_SIZE 0x16
#define ETNAVIV_PARAM_GPU_BUFFER_SIZE 0x17
#define ETNAVIV_PARAM_GPU_INSTRUCTION_COUNT 0x18
#define ETNAVIV_PARAM_GPU_NUM_CONSTANTS 0x19
#define ETNAVIV_PARAM_GPU_NUM_VARYINGS 0x1a
#define ETNA_MAX_PIPES 4
#define ETNA_BO_CACHE_MASK 0x000f0000
#define ETNA_BO_CACHED 0x00010000
#define ETNA_BO_WC 0x00020000
#define ETNA_BO_UNCACHED 0x00040000
#define ETNA_BO_FORCE_MMU 0x00100000
#define ETNA_PREP_READ 0x01
#define ETNA_PREP_WRITE 0x02
#define ETNA_PREP_NOSYNC 0x04
#define ETNA_SUBMIT_BO_READ 0x0001
#define ETNA_SUBMIT_BO_WRITE 0x0002
#define ETNA_PM_PROCESS_PRE 0x0001
#define ETNA_PM_PROCESS_POST 0x0002
#define ETNA_SUBMIT_NO_IMPLICIT 0x0001
#define ETNA_SUBMIT_FENCE_FD_IN 0x0002
#define ETNA_SUBMIT_FENCE_FD_OUT 0x0004
#define ETNA_SUBMIT_FLAGS (ETNA_SUBMIT_NO_IMPLICIT | ETNA_SUBMIT_FENCE_FD_IN | ETNA_SUBMIT_FENCE_FD_OUT)
#define ETNA_PIPE_3D 0x00
#define ETNA_PIPE_2D 0x01
#define ETNA_PIPE_VG 0x02
#define ETNA_WAIT_NONBLOCK 0x01
#define ETNA_USERPTR_READ 0x01
#define ETNA_USERPTR_WRITE 0x02
#define DRM_ETNAVIV_GET_PARAM 0x00
#define DRM_ETNAVIV_GEM_NEW 0x02
#define DRM_ETNAVIV_GEM_INFO 0x03
#define DRM_ETNAVIV_GEM_CPU_PREP 0x04
#define DRM_ETNAVIV_GEM_CPU_FINI 0x05
#define DRM_ETNAVIV_GEM_SUBMIT 0x06
#define DRM_ETNAVIV_WAIT_FENCE 0x07
#define DRM_ETNAVIV_GEM_USERPTR 0x08
#define DRM_ETNAVIV_GEM_WAIT 0x09
#define DRM_ETNAVIV_PM_QUERY_DOM 0x0a
#define DRM_ETNAVIV_PM_QUERY_SIG 0x0b
#define DRM_ETNAVIV_NUM_IOCTLS 0x0c
#define DRM_IOCTL_ETNAVIV_GET_PARAM DRM_IOWR(DRM_COMMAND_BASE + DRM_ETNAVIV_GET_PARAM, struct drm_etnaviv_param)
#define DRM_IOCTL_ETNAVIV_GEM_NEW DRM_IOWR(DRM_COMMAND_BASE + DRM_ETNAVIV_GEM_NEW, struct drm_etnaviv_gem_new)
#define DRM_IOCTL_ETNAVIV_GEM_INFO DRM_IOWR(DRM_COMMAND_BASE + DRM_ETNAVIV_GEM_INFO, struct drm_etnaviv_gem_info)
#define DRM_IOCTL_ETNAVIV_GEM_CPU_PREP DRM_IOW(DRM_COMMAND_BASE + DRM_ETNAVIV_GEM_CPU_PREP, struct drm_etnaviv_gem_cpu_prep)
#define DRM_IOCTL_ETNAVIV_GEM_CPU_FINI DRM_IOW(DRM_COMMAND_BASE + DRM_ETNAVIV_GEM_CPU_FINI, struct drm_etnaviv_gem_cpu_fini)
#define DRM_IOCTL_ETNAVIV_GEM_SUBMIT DRM_IOWR(DRM_COMMAND_BASE + DRM_ETNAVIV_GEM_SUBMIT, struct drm_etnaviv_gem_submit)
#define DRM_IOCTL_ETNAVIV_WAIT_FENCE DRM_IOW(DRM_COMMAND_BASE + DRM_ETNAVIV_WAIT_FENCE, struct drm_etnaviv_wait_fence)
#define DRM_IOCTL_ETNAVIV_GEM_USERPTR DRM_IOWR(DRM_COMMAND_BASE + DRM_ETNAVIV_GEM_USERPTR, struct drm_etnaviv_gem_userptr)
#define DRM_IOCTL_ETNAVIV_GEM_WAIT DRM_IOW(DRM_COMMAND_BASE + DRM_ETNAVIV_GEM_WAIT, struct drm_etnaviv_gem_wait)
#define DRM_IOCTL_ETNAVIV_PM_QUERY_DOM DRM_IOWR(DRM_COMMAND_BASE + DRM_ETNAVIV_PM_QUERY_DOM, struct drm_etnaviv_pm_domain)
#define DRM_IOCTL_ETNAVIV_PM_QUERY_SIG DRM_IOWR(DRM_COMMAND_BASE + DRM_ETNAVIV_PM_QUERY_SIG, struct drm_etnaviv_pm_signal)
#if defined(__cplusplus)
#endif
#endif