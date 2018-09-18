// GGHASH:Vy3MYPXpGcaRBOqfhpuSMVpV6u.rpxgVMmukkx8ovRyA00004928
#ifndef __LINUX_UAPI_SND_ASOC_H
#define __LINUX_UAPI_SND_ASOC_H 
#define SND_SOC_TPLG_MAX_CHAN 8
#define SND_SOC_TPLG_MAX_FORMATS 16
#define SND_SOC_TPLG_STREAM_CONFIG_MAX 8
#define SND_SOC_TPLG_HW_CONFIG_MAX 8
#define SND_SOC_TPLG_CTL_VOLSW 1
#define SND_SOC_TPLG_CTL_VOLSW_SX 2
#define SND_SOC_TPLG_CTL_VOLSW_XR_SX 3
#define SND_SOC_TPLG_CTL_ENUM 4
#define SND_SOC_TPLG_CTL_BYTES 5
#define SND_SOC_TPLG_CTL_ENUM_VALUE 6
#define SND_SOC_TPLG_CTL_RANGE 7
#define SND_SOC_TPLG_CTL_STROBE 8
#define SND_SOC_TPLG_DAPM_CTL_VOLSW 64
#define SND_SOC_TPLG_DAPM_CTL_ENUM_DOUBLE 65
#define SND_SOC_TPLG_DAPM_CTL_ENUM_VIRT 66
#define SND_SOC_TPLG_DAPM_CTL_ENUM_VALUE 67
#define SND_SOC_TPLG_DAPM_CTL_PIN 68
#define SND_SOC_TPLG_DAPM_INPUT 0
#define SND_SOC_TPLG_DAPM_OUTPUT 1
#define SND_SOC_TPLG_DAPM_MUX 2
#define SND_SOC_TPLG_DAPM_MIXER 3
#define SND_SOC_TPLG_DAPM_PGA 4
#define SND_SOC_TPLG_DAPM_OUT_DRV 5
#define SND_SOC_TPLG_DAPM_ADC 6
#define SND_SOC_TPLG_DAPM_DAC 7
#define SND_SOC_TPLG_DAPM_SWITCH 8
#define SND_SOC_TPLG_DAPM_PRE 9
#define SND_SOC_TPLG_DAPM_POST 10
#define SND_SOC_TPLG_DAPM_AIF_IN 11
#define SND_SOC_TPLG_DAPM_AIF_OUT 12
#define SND_SOC_TPLG_DAPM_DAI_IN 13
#define SND_SOC_TPLG_DAPM_DAI_OUT 14
#define SND_SOC_TPLG_DAPM_DAI_LINK 15
#define SND_SOC_TPLG_DAPM_LAST SND_SOC_TPLG_DAPM_DAI_LINK
#define SND_SOC_TPLG_MAGIC 0x41536F43
#define SND_SOC_TPLG_NUM_TEXTS 16
#define SND_SOC_TPLG_ABI_VERSION 0x5
#define SND_SOC_TPLG_ABI_VERSION_MIN 0x4
#define SND_SOC_TPLG_TLV_SIZE 32
#define SND_SOC_TPLG_TYPE_MIXER 1
#define SND_SOC_TPLG_TYPE_BYTES 2
#define SND_SOC_TPLG_TYPE_ENUM 3
#define SND_SOC_TPLG_TYPE_DAPM_GRAPH 4
#define SND_SOC_TPLG_TYPE_DAPM_WIDGET 5
#define SND_SOC_TPLG_TYPE_DAI_LINK 6
#define SND_SOC_TPLG_TYPE_PCM 7
#define SND_SOC_TPLG_TYPE_MANIFEST 8
#define SND_SOC_TPLG_TYPE_CODEC_LINK 9
#define SND_SOC_TPLG_TYPE_BACKEND_LINK 10
#define SND_SOC_TPLG_TYPE_PDATA 11
#define SND_SOC_TPLG_TYPE_DAI 12
#define SND_SOC_TPLG_TYPE_MAX SND_SOC_TPLG_TYPE_DAI
#define SND_SOC_TPLG_TYPE_VENDOR_FW 1000
#define SND_SOC_TPLG_TYPE_VENDOR_CONFIG 1001
#define SND_SOC_TPLG_TYPE_VENDOR_COEFF 1002
#define SND_SOC_TPLG_TYPEVENDOR_CODEC 1003
#define SND_SOC_TPLG_STREAM_PLAYBACK 0
#define SND_SOC_TPLG_STREAM_CAPTURE 1
#define SND_SOC_TPLG_TUPLE_TYPE_UUID 0
#define SND_SOC_TPLG_TUPLE_TYPE_STRING 1
#define SND_SOC_TPLG_TUPLE_TYPE_BOOL 2
#define SND_SOC_TPLG_TUPLE_TYPE_BYTE 3
#define SND_SOC_TPLG_TUPLE_TYPE_WORD 4
#define SND_SOC_TPLG_TUPLE_TYPE_SHORT 5
#define SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_RATES (1 << 0)
#define SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_CHANNELS (1 << 1)
#define SND_SOC_TPLG_DAI_FLGBIT_SYMMETRIC_SAMPLEBITS (1 << 2)
#define SND_SOC_DAI_FORMAT_I2S 1
#define SND_SOC_DAI_FORMAT_RIGHT_J 2
#define SND_SOC_DAI_FORMAT_LEFT_J 3
#define SND_SOC_DAI_FORMAT_DSP_A 4
#define SND_SOC_DAI_FORMAT_DSP_B 5
#define SND_SOC_DAI_FORMAT_AC97 6
#define SND_SOC_DAI_FORMAT_PDM 7
#define SND_SOC_DAI_FORMAT_MSB SND_SOC_DAI_FORMAT_LEFT_J
#define SND_SOC_DAI_FORMAT_LSB SND_SOC_DAI_FORMAT_RIGHT_J
#define SND_SOC_TPLG_LNK_FLGBIT_SYMMETRIC_RATES (1 << 0)
#define SND_SOC_TPLG_LNK_FLGBIT_SYMMETRIC_CHANNELS (1 << 1)
#define SND_SOC_TPLG_LNK_FLGBIT_SYMMETRIC_SAMPLEBITS (1 << 2)
#define SND_SOC_TPLG_LNK_FLGBIT_VOICE_WAKEUP (1 << 3)
#endif
