// GGHASH:Vy_XhLQT7cLsqmYvhybIiK3aVjKtN9VDsSDFF84a4kWY00006869
#ifndef __AMDGPU_DRM_H__
#define __AMDGPU_DRM_H__ 
#include "drm.h"
#if defined(__cplusplus)
#endif
#define DRM_AMDGPU_GEM_CREATE 0x00
#define DRM_AMDGPU_GEM_MMAP 0x01
#define DRM_AMDGPU_CTX 0x02
#define DRM_AMDGPU_BO_LIST 0x03
#define DRM_AMDGPU_CS 0x04
#define DRM_AMDGPU_INFO 0x05
#define DRM_AMDGPU_GEM_METADATA 0x06
#define DRM_AMDGPU_GEM_WAIT_IDLE 0x07
#define DRM_AMDGPU_GEM_VA 0x08
#define DRM_AMDGPU_WAIT_CS 0x09
#define DRM_AMDGPU_GEM_OP 0x10
#define DRM_AMDGPU_GEM_USERPTR 0x11
#define DRM_AMDGPU_WAIT_FENCES 0x12
#define DRM_AMDGPU_VM 0x13
#define DRM_AMDGPU_FENCE_TO_HANDLE 0x14
#define DRM_AMDGPU_SCHED 0x15
#define DRM_IOCTL_AMDGPU_GEM_CREATE DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_CREATE, union drm_amdgpu_gem_create)
#define DRM_IOCTL_AMDGPU_GEM_MMAP DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_MMAP, union drm_amdgpu_gem_mmap)
#define DRM_IOCTL_AMDGPU_CTX DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_CTX, union drm_amdgpu_ctx)
#define DRM_IOCTL_AMDGPU_BO_LIST DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_BO_LIST, union drm_amdgpu_bo_list)
#define DRM_IOCTL_AMDGPU_CS DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_CS, union drm_amdgpu_cs)
#define DRM_IOCTL_AMDGPU_INFO DRM_IOW(DRM_COMMAND_BASE + DRM_AMDGPU_INFO, struct drm_amdgpu_info)
#define DRM_IOCTL_AMDGPU_GEM_METADATA DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_METADATA, struct drm_amdgpu_gem_metadata)
#define DRM_IOCTL_AMDGPU_GEM_WAIT_IDLE DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_WAIT_IDLE, union drm_amdgpu_gem_wait_idle)
#define DRM_IOCTL_AMDGPU_GEM_VA DRM_IOW(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_VA, struct drm_amdgpu_gem_va)
#define DRM_IOCTL_AMDGPU_WAIT_CS DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_WAIT_CS, union drm_amdgpu_wait_cs)
#define DRM_IOCTL_AMDGPU_GEM_OP DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_OP, struct drm_amdgpu_gem_op)
#define DRM_IOCTL_AMDGPU_GEM_USERPTR DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_GEM_USERPTR, struct drm_amdgpu_gem_userptr)
#define DRM_IOCTL_AMDGPU_WAIT_FENCES DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_WAIT_FENCES, union drm_amdgpu_wait_fences)
#define DRM_IOCTL_AMDGPU_VM DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_VM, union drm_amdgpu_vm)
#define DRM_IOCTL_AMDGPU_FENCE_TO_HANDLE DRM_IOWR(DRM_COMMAND_BASE + DRM_AMDGPU_FENCE_TO_HANDLE, union drm_amdgpu_fence_to_handle)
#define DRM_IOCTL_AMDGPU_SCHED DRM_IOW(DRM_COMMAND_BASE + DRM_AMDGPU_SCHED, union drm_amdgpu_sched)
#define AMDGPU_GEM_DOMAIN_CPU 0x1
#define AMDGPU_GEM_DOMAIN_GTT 0x2
#define AMDGPU_GEM_DOMAIN_VRAM 0x4
#define AMDGPU_GEM_DOMAIN_GDS 0x8
#define AMDGPU_GEM_DOMAIN_GWS 0x10
#define AMDGPU_GEM_DOMAIN_OA 0x20
#define AMDGPU_GEM_CREATE_CPU_ACCESS_REQUIRED (1 << 0)
#define AMDGPU_GEM_CREATE_NO_CPU_ACCESS (1 << 1)
#define AMDGPU_GEM_CREATE_CPU_GTT_USWC (1 << 2)
#define AMDGPU_GEM_CREATE_VRAM_CLEARED (1 << 3)
#define AMDGPU_GEM_CREATE_SHADOW (1 << 4)
#define AMDGPU_GEM_CREATE_VRAM_CONTIGUOUS (1 << 5)
#define AMDGPU_GEM_CREATE_VM_ALWAYS_VALID (1 << 6)
#define AMDGPU_GEM_CREATE_EXPLICIT_SYNC (1 << 7)
#define AMDGPU_BO_LIST_OP_CREATE 0
#define AMDGPU_BO_LIST_OP_DESTROY 1
#define AMDGPU_BO_LIST_OP_UPDATE 2
#define AMDGPU_CTX_OP_ALLOC_CTX 1
#define AMDGPU_CTX_OP_FREE_CTX 2
#define AMDGPU_CTX_OP_QUERY_STATE 3
#define AMDGPU_CTX_NO_RESET 0
#define AMDGPU_CTX_GUILTY_RESET 1
#define AMDGPU_CTX_INNOCENT_RESET 2
#define AMDGPU_CTX_UNKNOWN_RESET 3
#define AMDGPU_CTX_PRIORITY_UNSET -2048
#define AMDGPU_CTX_PRIORITY_VERY_LOW -1023
#define AMDGPU_CTX_PRIORITY_LOW -512
#define AMDGPU_CTX_PRIORITY_NORMAL 0
#define AMDGPU_CTX_PRIORITY_HIGH 512
#define AMDGPU_CTX_PRIORITY_VERY_HIGH 1023
#define AMDGPU_VM_OP_RESERVE_VMID 1
#define AMDGPU_VM_OP_UNRESERVE_VMID 2
#define AMDGPU_SCHED_OP_PROCESS_PRIORITY_OVERRIDE 1
#define AMDGPU_GEM_USERPTR_READONLY (1 << 0)
#define AMDGPU_GEM_USERPTR_ANONONLY (1 << 1)
#define AMDGPU_GEM_USERPTR_VALIDATE (1 << 2)
#define AMDGPU_GEM_USERPTR_REGISTER (1 << 3)
#define AMDGPU_TILING_ARRAY_MODE_SHIFT 0
#define AMDGPU_TILING_ARRAY_MODE_MASK 0xf
#define AMDGPU_TILING_PIPE_CONFIG_SHIFT 4
#define AMDGPU_TILING_PIPE_CONFIG_MASK 0x1f
#define AMDGPU_TILING_TILE_SPLIT_SHIFT 9
#define AMDGPU_TILING_TILE_SPLIT_MASK 0x7
#define AMDGPU_TILING_MICRO_TILE_MODE_SHIFT 12
#define AMDGPU_TILING_MICRO_TILE_MODE_MASK 0x7
#define AMDGPU_TILING_BANK_WIDTH_SHIFT 15
#define AMDGPU_TILING_BANK_WIDTH_MASK 0x3
#define AMDGPU_TILING_BANK_HEIGHT_SHIFT 17
#define AMDGPU_TILING_BANK_HEIGHT_MASK 0x3
#define AMDGPU_TILING_MACRO_TILE_ASPECT_SHIFT 19
#define AMDGPU_TILING_MACRO_TILE_ASPECT_MASK 0x3
#define AMDGPU_TILING_NUM_BANKS_SHIFT 21
#define AMDGPU_TILING_NUM_BANKS_MASK 0x3
#define AMDGPU_TILING_SWIZZLE_MODE_SHIFT 0
#define AMDGPU_TILING_SWIZZLE_MODE_MASK 0x1f
#define AMDGPU_TILING_SET(field,value) (((__u64)(value) & AMDGPU_TILING_ ##field ##_MASK) << AMDGPU_TILING_ ##field ##_SHIFT)
#define AMDGPU_TILING_GET(value,field) (((__u64)(value) >> AMDGPU_TILING_ ##field ##_SHIFT) & AMDGPU_TILING_ ##field ##_MASK)
#define AMDGPU_GEM_METADATA_OP_SET_METADATA 1
#define AMDGPU_GEM_METADATA_OP_GET_METADATA 2
#define AMDGPU_GEM_OP_GET_GEM_CREATE_INFO 0
#define AMDGPU_GEM_OP_SET_PLACEMENT 1
#define AMDGPU_VA_OP_MAP 1
#define AMDGPU_VA_OP_UNMAP 2
#define AMDGPU_VA_OP_CLEAR 3
#define AMDGPU_VA_OP_REPLACE 4
#define AMDGPU_VM_DELAY_UPDATE (1 << 0)
#define AMDGPU_VM_PAGE_READABLE (1 << 1)
#define AMDGPU_VM_PAGE_WRITEABLE (1 << 2)
#define AMDGPU_VM_PAGE_EXECUTABLE (1 << 3)
#define AMDGPU_VM_PAGE_PRT (1 << 4)
#define AMDGPU_VM_MTYPE_MASK (0xf << 5)
#define AMDGPU_VM_MTYPE_DEFAULT (0 << 5)
#define AMDGPU_VM_MTYPE_NC (1 << 5)
#define AMDGPU_VM_MTYPE_WC (2 << 5)
#define AMDGPU_VM_MTYPE_CC (3 << 5)
#define AMDGPU_VM_MTYPE_UC (4 << 5)
#define AMDGPU_HW_IP_GFX 0
#define AMDGPU_HW_IP_COMPUTE 1
#define AMDGPU_HW_IP_DMA 2
#define AMDGPU_HW_IP_UVD 3
#define AMDGPU_HW_IP_VCE 4
#define AMDGPU_HW_IP_UVD_ENC 5
#define AMDGPU_HW_IP_VCN_DEC 6
#define AMDGPU_HW_IP_VCN_ENC 7
#define AMDGPU_HW_IP_NUM 8
#define AMDGPU_HW_IP_INSTANCE_MAX_COUNT 1
#define AMDGPU_CHUNK_ID_IB 0x01
#define AMDGPU_CHUNK_ID_FENCE 0x02
#define AMDGPU_CHUNK_ID_DEPENDENCIES 0x03
#define AMDGPU_CHUNK_ID_SYNCOBJ_IN 0x04
#define AMDGPU_CHUNK_ID_SYNCOBJ_OUT 0x05
#define AMDGPU_IB_FLAG_CE (1<<0)
#define AMDGPU_IB_FLAG_PREAMBLE (1<<1)
#define AMDGPU_IB_FLAG_PREEMPT (1<<2)
#define AMDGPU_FENCE_TO_HANDLE_GET_SYNCOBJ 0
#define AMDGPU_FENCE_TO_HANDLE_GET_SYNCOBJ_FD 1
#define AMDGPU_FENCE_TO_HANDLE_GET_SYNC_FILE_FD 2
#define AMDGPU_IDS_FLAGS_FUSION 0x1
#define AMDGPU_IDS_FLAGS_PREEMPTION 0x2
#define AMDGPU_INFO_ACCEL_WORKING 0x00
#define AMDGPU_INFO_CRTC_FROM_ID 0x01
#define AMDGPU_INFO_HW_IP_INFO 0x02
#define AMDGPU_INFO_HW_IP_COUNT 0x03
#define AMDGPU_INFO_TIMESTAMP 0x05
#define AMDGPU_INFO_FW_VERSION 0x0e
 #define AMDGPU_INFO_FW_VCE 0x1
 #define AMDGPU_INFO_FW_UVD 0x2
 #define AMDGPU_INFO_FW_GMC 0x03
 #define AMDGPU_INFO_FW_GFX_ME 0x04
 #define AMDGPU_INFO_FW_GFX_PFP 0x05
 #define AMDGPU_INFO_FW_GFX_CE 0x06
 #define AMDGPU_INFO_FW_GFX_RLC 0x07
 #define AMDGPU_INFO_FW_GFX_MEC 0x08
 #define AMDGPU_INFO_FW_SMC 0x0a
 #define AMDGPU_INFO_FW_SDMA 0x0b
 #define AMDGPU_INFO_FW_SOS 0x0c
 #define AMDGPU_INFO_FW_ASD 0x0d
#define AMDGPU_INFO_NUM_BYTES_MOVED 0x0f
#define AMDGPU_INFO_VRAM_USAGE 0x10
#define AMDGPU_INFO_GTT_USAGE 0x11
#define AMDGPU_INFO_GDS_CONFIG 0x13
#define AMDGPU_INFO_VRAM_GTT 0x14
#define AMDGPU_INFO_READ_MMR_REG 0x15
#define AMDGPU_INFO_DEV_INFO 0x16
#define AMDGPU_INFO_VIS_VRAM_USAGE 0x17
#define AMDGPU_INFO_NUM_EVICTIONS 0x18
#define AMDGPU_INFO_MEMORY 0x19
#define AMDGPU_INFO_VCE_CLOCK_TABLE 0x1A
#define AMDGPU_INFO_VBIOS 0x1B
 #define AMDGPU_INFO_VBIOS_SIZE 0x1
 #define AMDGPU_INFO_VBIOS_IMAGE 0x2
#define AMDGPU_INFO_NUM_HANDLES 0x1C
#define AMDGPU_INFO_SENSOR 0x1D
 #define AMDGPU_INFO_SENSOR_GFX_SCLK 0x1
 #define AMDGPU_INFO_SENSOR_GFX_MCLK 0x2
 #define AMDGPU_INFO_SENSOR_GPU_TEMP 0x3
 #define AMDGPU_INFO_SENSOR_GPU_LOAD 0x4
 #define AMDGPU_INFO_SENSOR_GPU_AVG_POWER 0x5
 #define AMDGPU_INFO_SENSOR_VDDNB 0x6
 #define AMDGPU_INFO_SENSOR_VDDGFX 0x7
#define AMDGPU_INFO_NUM_VRAM_CPU_PAGE_FAULTS 0x1E
#define AMDGPU_INFO_VRAM_LOST_COUNTER 0x1F
#define AMDGPU_INFO_MMR_SE_INDEX_SHIFT 0
#define AMDGPU_INFO_MMR_SE_INDEX_MASK 0xff
#define AMDGPU_INFO_MMR_SH_INDEX_SHIFT 8
#define AMDGPU_INFO_MMR_SH_INDEX_MASK 0xff
#define AMDGPU_VRAM_TYPE_UNKNOWN 0
#define AMDGPU_VRAM_TYPE_GDDR1 1
#define AMDGPU_VRAM_TYPE_DDR2 2
#define AMDGPU_VRAM_TYPE_GDDR3 3
#define AMDGPU_VRAM_TYPE_GDDR4 4
#define AMDGPU_VRAM_TYPE_GDDR5 5
#define AMDGPU_VRAM_TYPE_HBM 6
#define AMDGPU_VRAM_TYPE_DDR3 7
#define AMDGPU_VCE_CLOCK_TABLE_ENTRIES 6
#define AMDGPU_FAMILY_UNKNOWN 0
#define AMDGPU_FAMILY_SI 110
#define AMDGPU_FAMILY_CI 120
#define AMDGPU_FAMILY_KV 125
#define AMDGPU_FAMILY_VI 130
#define AMDGPU_FAMILY_CZ 135
#define AMDGPU_FAMILY_AI 141
#define AMDGPU_FAMILY_RV 142
#if defined(__cplusplus)
#endif
#endif
