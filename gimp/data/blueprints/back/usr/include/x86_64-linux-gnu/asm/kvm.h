// GGHASH:VamoA5TGh_jZR7ybL.zDpyUvxYB854EVPa7WYnjgbvEo00001bc1
#ifndef _ASM_X86_KVM_H
#define _ASM_X86_KVM_H 
#include <linux/types.h>
#include <linux/ioctl.h>
#define KVM_PIO_PAGE_OFFSET 1
#define KVM_COALESCED_MMIO_PAGE_OFFSET 2
#define DE_VECTOR 0
#define DB_VECTOR 1
#define BP_VECTOR 3
#define OF_VECTOR 4
#define BR_VECTOR 5
#define UD_VECTOR 6
#define NM_VECTOR 7
#define DF_VECTOR 8
#define TS_VECTOR 10
#define NP_VECTOR 11
#define SS_VECTOR 12
#define GP_VECTOR 13
#define PF_VECTOR 14
#define MF_VECTOR 16
#define AC_VECTOR 17
#define MC_VECTOR 18
#define XM_VECTOR 19
#define VE_VECTOR 20
#define __KVM_HAVE_PIT 
#define __KVM_HAVE_IOAPIC 
#define __KVM_HAVE_IRQ_LINE 
#define __KVM_HAVE_MSI 
#define __KVM_HAVE_USER_NMI 
#define __KVM_HAVE_GUEST_DEBUG 
#define __KVM_HAVE_MSIX 
#define __KVM_HAVE_MCE 
#define __KVM_HAVE_PIT_STATE2 
#define __KVM_HAVE_XEN_HVM 
#define __KVM_HAVE_VCPU_EVENTS 
#define __KVM_HAVE_DEBUGREGS 
#define __KVM_HAVE_XSAVE 
#define __KVM_HAVE_XCRS 
#define __KVM_HAVE_READONLY_MEM 
#define KVM_NR_INTERRUPTS 256
#define KVM_IOAPIC_NUM_PINS 24
#define KVM_IRQCHIP_PIC_MASTER 0
#define KVM_IRQCHIP_PIC_SLAVE 1
#define KVM_IRQCHIP_IOAPIC 2
#define KVM_NR_IRQCHIPS 3
#define KVM_RUN_X86_SMM (1 << 0)
#define KVM_APIC_REG_SIZE 0x400
#define KVM_CPUID_FLAG_SIGNIFCANT_INDEX (1 << 0)
#define KVM_CPUID_FLAG_STATEFUL_FUNC (1 << 1)
#define KVM_CPUID_FLAG_STATE_READ_NEXT (1 << 2)
#define KVM_GUESTDBG_USE_SW_BP 0x00010000
#define KVM_GUESTDBG_USE_HW_BP 0x00020000
#define KVM_GUESTDBG_INJECT_DB 0x00040000
#define KVM_GUESTDBG_INJECT_BP 0x00080000
#define KVM_PIT_FLAGS_HPET_LEGACY 0x00000001
#define KVM_VCPUEVENT_VALID_NMI_PENDING 0x00000001
#define KVM_VCPUEVENT_VALID_SIPI_VECTOR 0x00000002
#define KVM_VCPUEVENT_VALID_SHADOW 0x00000004
#define KVM_VCPUEVENT_VALID_SMM 0x00000008
#define KVM_X86_SHADOW_INT_MOV_SS 0x01
#define KVM_X86_SHADOW_INT_STI 0x02
#define KVM_MAX_XCRS 16
#define KVM_X86_QUIRK_LINT0_REENABLED (1 << 0)
#define KVM_X86_QUIRK_CD_NW_CLEARED (1 << 1)
#endif