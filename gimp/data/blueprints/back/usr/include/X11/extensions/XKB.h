// GGHASH:Vd9se_3PbXievnMcFW_SANUZbJ2MxFBJQqoQ2ROcSM6s00006e51
#ifndef _XKB_H_
#define _XKB_H_ 
#define X_kbUseExtension 0
#define X_kbSelectEvents 1
#define X_kbBell 3
#define X_kbGetState 4
#define X_kbLatchLockState 5
#define X_kbGetControls 6
#define X_kbSetControls 7
#define X_kbGetMap 8
#define X_kbSetMap 9
#define X_kbGetCompatMap 10
#define X_kbSetCompatMap 11
#define X_kbGetIndicatorState 12
#define X_kbGetIndicatorMap 13
#define X_kbSetIndicatorMap 14
#define X_kbGetNamedIndicator 15
#define X_kbSetNamedIndicator 16
#define X_kbGetNames 17
#define X_kbSetNames 18
#define X_kbGetGeometry 19
#define X_kbSetGeometry 20
#define X_kbPerClientFlags 21
#define X_kbListComponents 22
#define X_kbGetKbdByName 23
#define X_kbGetDeviceInfo 24
#define X_kbSetDeviceInfo 25
#define X_kbSetDebuggingFlags 101
#define XkbEventCode 0
#define XkbNumberEvents (XkbEventCode+1)
#define XkbNewKeyboardNotify 0
#define XkbMapNotify 1
#define XkbStateNotify 2
#define XkbControlsNotify 3
#define XkbIndicatorStateNotify 4
#define XkbIndicatorMapNotify 5
#define XkbNamesNotify 6
#define XkbCompatMapNotify 7
#define XkbBellNotify 8
#define XkbActionMessage 9
#define XkbAccessXNotify 10
#define XkbExtensionDeviceNotify 11
#define XkbNewKeyboardNotifyMask (1L << 0)
#define XkbMapNotifyMask (1L << 1)
#define XkbStateNotifyMask (1L << 2)
#define XkbControlsNotifyMask (1L << 3)
#define XkbIndicatorStateNotifyMask (1L << 4)
#define XkbIndicatorMapNotifyMask (1L << 5)
#define XkbNamesNotifyMask (1L << 6)
#define XkbCompatMapNotifyMask (1L << 7)
#define XkbBellNotifyMask (1L << 8)
#define XkbActionMessageMask (1L << 9)
#define XkbAccessXNotifyMask (1L << 10)
#define XkbExtensionDeviceNotifyMask (1L << 11)
#define XkbAllEventsMask (0xFFF)
#define XkbNKN_KeycodesMask (1L << 0)
#define XkbNKN_GeometryMask (1L << 1)
#define XkbNKN_DeviceIDMask (1L << 2)
#define XkbAllNewKeyboardEventsMask (0x7)
#define XkbAXN_SKPress 0
#define XkbAXN_SKAccept 1
#define XkbAXN_SKReject 2
#define XkbAXN_SKRelease 3
#define XkbAXN_BKAccept 4
#define XkbAXN_BKReject 5
#define XkbAXN_AXKWarning 6
#define XkbAXN_SKPressMask (1L << 0)
#define XkbAXN_SKAcceptMask (1L << 1)
#define XkbAXN_SKRejectMask (1L << 2)
#define XkbAXN_SKReleaseMask (1L << 3)
#define XkbAXN_BKAcceptMask (1L << 4)
#define XkbAXN_BKRejectMask (1L << 5)
#define XkbAXN_AXKWarningMask (1L << 6)
#define XkbAllAccessXEventsMask (0x7f)
#define XkbAllStateEventsMask XkbAllStateComponentsMask
#define XkbAllMapEventsMask XkbAllMapComponentsMask
#define XkbAllControlEventsMask XkbAllControlsMask
#define XkbAllIndicatorEventsMask XkbAllIndicatorsMask
#define XkbAllNameEventsMask XkbAllNamesMask
#define XkbAllCompatMapEventsMask XkbAllCompatMask
#define XkbAllBellEventsMask (1L << 0)
#define XkbAllActionMessagesMask (1L << 0)
#define XkbKeyboard 0
#define XkbNumberErrors 1
#define XkbErr_BadDevice 0xff
#define XkbErr_BadClass 0xfe
#define XkbErr_BadId 0xfd
#define XkbClientMapMask (1L << 0)
#define XkbServerMapMask (1L << 1)
#define XkbCompatMapMask (1L << 2)
#define XkbIndicatorMapMask (1L << 3)
#define XkbNamesMask (1L << 4)
#define XkbGeometryMask (1L << 5)
#define XkbControlsMask (1L << 6)
#define XkbAllComponentsMask (0x7f)
#define XkbModifierStateMask (1L << 0)
#define XkbModifierBaseMask (1L << 1)
#define XkbModifierLatchMask (1L << 2)
#define XkbModifierLockMask (1L << 3)
#define XkbGroupStateMask (1L << 4)
#define XkbGroupBaseMask (1L << 5)
#define XkbGroupLatchMask (1L << 6)
#define XkbGroupLockMask (1L << 7)
#define XkbCompatStateMask (1L << 8)
#define XkbGrabModsMask (1L << 9)
#define XkbCompatGrabModsMask (1L << 10)
#define XkbLookupModsMask (1L << 11)
#define XkbCompatLookupModsMask (1L << 12)
#define XkbPointerButtonMask (1L << 13)
#define XkbAllStateComponentsMask (0x3fff)
#define XkbRepeatKeysMask (1L << 0)
#define XkbSlowKeysMask (1L << 1)
#define XkbBounceKeysMask (1L << 2)
#define XkbStickyKeysMask (1L << 3)
#define XkbMouseKeysMask (1L << 4)
#define XkbMouseKeysAccelMask (1L << 5)
#define XkbAccessXKeysMask (1L << 6)
#define XkbAccessXTimeoutMask (1L << 7)
#define XkbAccessXFeedbackMask (1L << 8)
#define XkbAudibleBellMask (1L << 9)
#define XkbOverlay1Mask (1L << 10)
#define XkbOverlay2Mask (1L << 11)
#define XkbIgnoreGroupLockMask (1L << 12)
#define XkbGroupsWrapMask (1L << 27)
#define XkbInternalModsMask (1L << 28)
#define XkbIgnoreLockModsMask (1L << 29)
#define XkbPerKeyRepeatMask (1L << 30)
#define XkbControlsEnabledMask (1L << 31)
#define XkbAccessXOptionsMask (XkbStickyKeysMask|XkbAccessXFeedbackMask)
#define XkbAllBooleanCtrlsMask (0x00001FFF)
#define XkbAllControlsMask (0xF8001FFF)
#define XkbAllControlEventsMask XkbAllControlsMask
#define XkbAX_SKPressFBMask (1L << 0)
#define XkbAX_SKAcceptFBMask (1L << 1)
#define XkbAX_FeatureFBMask (1L << 2)
#define XkbAX_SlowWarnFBMask (1L << 3)
#define XkbAX_IndicatorFBMask (1L << 4)
#define XkbAX_StickyKeysFBMask (1L << 5)
#define XkbAX_TwoKeysMask (1L << 6)
#define XkbAX_LatchToLockMask (1L << 7)
#define XkbAX_SKReleaseFBMask (1L << 8)
#define XkbAX_SKRejectFBMask (1L << 9)
#define XkbAX_BKRejectFBMask (1L << 10)
#define XkbAX_DumbBellFBMask (1L << 11)
#define XkbAX_FBOptionsMask (0xF3F)
#define XkbAX_SKOptionsMask (0x0C0)
#define XkbAX_AllOptionsMask (0xFFF)
#define XkbUseCoreKbd 0x0100
#define XkbUseCorePtr 0x0200
#define XkbDfltXIClass 0x0300
#define XkbDfltXIId 0x0400
#define XkbAllXIClasses 0x0500
#define XkbAllXIIds 0x0600
#define XkbXINone 0xff00
#define XkbLegalXILedClass(c) (((c)==KbdFeedbackClass)|| ((c)==LedFeedbackClass)|| ((c)==XkbDfltXIClass)|| ((c)==XkbAllXIClasses))
#define XkbLegalXIBellClass(c) (((c)==KbdFeedbackClass)|| ((c)==BellFeedbackClass)|| ((c)==XkbDfltXIClass)|| ((c)==XkbAllXIClasses))
#define XkbExplicitXIDevice(c) (((c)&(~0xff))==0)
#define XkbExplicitXIClass(c) (((c)&(~0xff))==0)
#define XkbExplicitXIId(c) (((c)&(~0xff))==0)
#define XkbSingleXIClass(c) ((((c)&(~0xff))==0)||((c)==XkbDfltXIClass))
#define XkbSingleXIId(c) ((((c)&(~0xff))==0)||((c)==XkbDfltXIId))
#define XkbNoModifier 0xff
#define XkbNoShiftLevel 0xff
#define XkbNoShape 0xff
#define XkbNoIndicator 0xff
#define XkbNoModifierMask 0
#define XkbAllModifiersMask 0xff
#define XkbAllVirtualModsMask 0xffff
#define XkbNumKbdGroups 4
#define XkbMaxKbdGroup (XkbNumKbdGroups-1)
#define XkbMaxMouseKeysBtn 4
#define XkbGroup1Index 0
#define XkbGroup2Index 1
#define XkbGroup3Index 2
#define XkbGroup4Index 3
#define XkbAnyGroup 254
#define XkbAllGroups 255
#define XkbGroup1Mask (1<<0)
#define XkbGroup2Mask (1<<1)
#define XkbGroup3Mask (1<<2)
#define XkbGroup4Mask (1<<3)
#define XkbAnyGroupMask (1<<7)
#define XkbAllGroupsMask (0xf)
#define XkbBuildCoreState(m,g) ((((g)&0x3)<<13)|((m)&0xff))
#define XkbGroupForCoreState(s) (((s)>>13)&0x3)
#define XkbIsLegalGroup(g) (((g)>=0)&&((g)<XkbNumKbdGroups))
#define XkbWrapIntoRange (0x00)
#define XkbClampIntoRange (0x40)
#define XkbRedirectIntoRange (0x80)
#define XkbSA_ClearLocks (1L << 0)
#define XkbSA_LatchToLock (1L << 1)
#define XkbSA_LockNoLock (1L << 0)
#define XkbSA_LockNoUnlock (1L << 1)
#define XkbSA_UseModMapMods (1L << 2)
#define XkbSA_GroupAbsolute (1L << 2)
#define XkbSA_UseDfltButton 0
#define XkbSA_NoAcceleration (1L << 0)
#define XkbSA_MoveAbsoluteX (1L << 1)
#define XkbSA_MoveAbsoluteY (1L << 2)
#define XkbSA_ISODfltIsGroup (1L << 7)
#define XkbSA_ISONoAffectMods (1L << 6)
#define XkbSA_ISONoAffectGroup (1L << 5)
#define XkbSA_ISONoAffectPtr (1L << 4)
#define XkbSA_ISONoAffectCtrls (1L << 3)
#define XkbSA_ISOAffectMask (0x78)
#define XkbSA_MessageOnPress (1L << 0)
#define XkbSA_MessageOnRelease (1L << 1)
#define XkbSA_MessageGenKeyEvent (1L << 2)
#define XkbSA_AffectDfltBtn 1
#define XkbSA_DfltBtnAbsolute (1L << 2)
#define XkbSA_SwitchApplication (1L << 0)
#define XkbSA_SwitchAbsolute (1L << 2)
#define XkbSA_IgnoreVal (0x00)
#define XkbSA_SetValMin (0x10)
#define XkbSA_SetValCenter (0x20)
#define XkbSA_SetValMax (0x30)
#define XkbSA_SetValRelative (0x40)
#define XkbSA_SetValAbsolute (0x50)
#define XkbSA_ValOpMask (0x70)
#define XkbSA_ValScaleMask (0x07)
#define XkbSA_ValOp(a) ((a)&XkbSA_ValOpMask)
#define XkbSA_ValScale(a) ((a)&XkbSA_ValScaleMask)
#define XkbSA_NoAction 0x00
#define XkbSA_SetMods 0x01
#define XkbSA_LatchMods 0x02
#define XkbSA_LockMods 0x03
#define XkbSA_SetGroup 0x04
#define XkbSA_LatchGroup 0x05
#define XkbSA_LockGroup 0x06
#define XkbSA_MovePtr 0x07
#define XkbSA_PtrBtn 0x08
#define XkbSA_LockPtrBtn 0x09
#define XkbSA_SetPtrDflt 0x0a
#define XkbSA_ISOLock 0x0b
#define XkbSA_Terminate 0x0c
#define XkbSA_SwitchScreen 0x0d
#define XkbSA_SetControls 0x0e
#define XkbSA_LockControls 0x0f
#define XkbSA_ActionMessage 0x10
#define XkbSA_RedirectKey 0x11
#define XkbSA_DeviceBtn 0x12
#define XkbSA_LockDeviceBtn 0x13
#define XkbSA_DeviceValuator 0x14
#define XkbSA_LastAction XkbSA_DeviceValuator
#define XkbSA_NumActions (XkbSA_LastAction+1)
#define XkbSA_XFree86Private 0x86
#define XkbSA_BreakLatch ((1<<XkbSA_NoAction)|(1<<XkbSA_PtrBtn)|(1<<XkbSA_LockPtrBtn)| (1<<XkbSA_Terminate)|(1<<XkbSA_SwitchScreen)|(1<<XkbSA_SetControls)| (1<<XkbSA_LockControls)|(1<<XkbSA_ActionMessage)| (1<<XkbSA_RedirectKey)|(1<<XkbSA_DeviceBtn)|(1<<XkbSA_LockDeviceBtn))
#define XkbIsModAction(a) (((a)->type>=Xkb_SASetMods)&&((a)->type<=XkbSA_LockMods))
#define XkbIsGroupAction(a) (((a)->type>=XkbSA_SetGroup)&&((a)->type<=XkbSA_LockGroup))
#define XkbIsPtrAction(a) (((a)->type>=XkbSA_MovePtr)&&((a)->type<=XkbSA_SetPtrDflt))
#define XkbKB_Permanent 0x80
#define XkbKB_OpMask 0x7f
#define XkbKB_Default 0x00
#define XkbKB_Lock 0x01
#define XkbKB_RadioGroup 0x02
#define XkbKB_Overlay1 0x03
#define XkbKB_Overlay2 0x04
#define XkbKB_RGAllowNone 0x80
#define XkbMinLegalKeyCode 8
#define XkbMaxLegalKeyCode 255
#define XkbMaxKeyCount (XkbMaxLegalKeyCode-XkbMinLegalKeyCode+1)
#define XkbPerKeyBitArraySize ((XkbMaxLegalKeyCode+1)/8)
#define XkbIsLegalKeycode(k) ((k)>=XkbMinLegalKeyCode)
#define XkbNumModifiers 8
#define XkbNumVirtualMods 16
#define XkbNumIndicators 32
#define XkbAllIndicatorsMask (0xffffffff)
#define XkbMaxRadioGroups 32
#define XkbAllRadioGroupsMask (0xffffffff)
#define XkbMaxShiftLevel 63
#define XkbMaxSymsPerKey (XkbMaxShiftLevel*XkbNumKbdGroups)
#define XkbRGMaxMembers 12
#define XkbActionMessageLength 6
#define XkbKeyNameLength 4
#define XkbMaxRedirectCount 8
#define XkbGeomPtsPerMM 10
#define XkbGeomMaxColors 32
#define XkbGeomMaxLabelColors 3
#define XkbGeomMaxPriority 255
#define XkbOneLevelIndex 0
#define XkbTwoLevelIndex 1
#define XkbAlphabeticIndex 2
#define XkbKeypadIndex 3
#define XkbLastRequiredType XkbKeypadIndex
#define XkbNumRequiredTypes (XkbLastRequiredType+1)
#define XkbMaxKeyTypes 255
#define XkbOneLevelMask (1<<0)
#define XkbTwoLevelMask (1<<1)
#define XkbAlphabeticMask (1<<2)
#define XkbKeypadMask (1<<3)
#define XkbAllRequiredTypes (0xf)
#define XkbShiftLevel(n) ((n)-1)
#define XkbShiftLevelMask(n) (1<<((n)-1))
#define XkbName "XKEYBOARD"
#define XkbMajorVersion 1
#define XkbMinorVersion 0
#define XkbExplicitKeyTypesMask (0x0f)
#define XkbExplicitKeyType1Mask (1<<0)
#define XkbExplicitKeyType2Mask (1<<1)
#define XkbExplicitKeyType3Mask (1<<2)
#define XkbExplicitKeyType4Mask (1<<3)
#define XkbExplicitInterpretMask (1<<4)
#define XkbExplicitAutoRepeatMask (1<<5)
#define XkbExplicitBehaviorMask (1<<6)
#define XkbExplicitVModMapMask (1<<7)
#define XkbAllExplicitMask (0xff)
#define XkbKeyTypesMask (1<<0)
#define XkbKeySymsMask (1<<1)
#define XkbModifierMapMask (1<<2)
#define XkbExplicitComponentsMask (1<<3)
#define XkbKeyActionsMask (1<<4)
#define XkbKeyBehaviorsMask (1<<5)
#define XkbVirtualModsMask (1<<6)
#define XkbVirtualModMapMask (1<<7)
#define XkbAllClientInfoMask (XkbKeyTypesMask|XkbKeySymsMask|XkbModifierMapMask)
#define XkbAllServerInfoMask (XkbExplicitComponentsMask|XkbKeyActionsMask|XkbKeyBehaviorsMask|XkbVirtualModsMask|XkbVirtualModMapMask)
#define XkbAllMapComponentsMask (XkbAllClientInfoMask|XkbAllServerInfoMask)
#define XkbSI_AutoRepeat (1<<0)
#define XkbSI_LockingKey (1<<1)
#define XkbSI_LevelOneOnly (0x80)
#define XkbSI_OpMask (0x7f)
#define XkbSI_NoneOf (0)
#define XkbSI_AnyOfOrNone (1)
#define XkbSI_AnyOf (2)
#define XkbSI_AllOf (3)
#define XkbSI_Exactly (4)
#define XkbIM_NoExplicit (1L << 7)
#define XkbIM_NoAutomatic (1L << 6)
#define XkbIM_LEDDrivesKB (1L << 5)
#define XkbIM_UseBase (1L << 0)
#define XkbIM_UseLatched (1L << 1)
#define XkbIM_UseLocked (1L << 2)
#define XkbIM_UseEffective (1L << 3)
#define XkbIM_UseCompat (1L << 4)
#define XkbIM_UseNone 0
#define XkbIM_UseAnyGroup (XkbIM_UseBase|XkbIM_UseLatched|XkbIM_UseLocked |XkbIM_UseEffective)
#define XkbIM_UseAnyMods (XkbIM_UseAnyGroup|XkbIM_UseCompat)
#define XkbSymInterpMask (1<<0)
#define XkbGroupCompatMask (1<<1)
#define XkbAllCompatMask (0x3)
#define XkbKeycodesNameMask (1<<0)
#define XkbGeometryNameMask (1<<1)
#define XkbSymbolsNameMask (1<<2)
#define XkbPhysSymbolsNameMask (1<<3)
#define XkbTypesNameMask (1<<4)
#define XkbCompatNameMask (1<<5)
#define XkbKeyTypeNamesMask (1<<6)
#define XkbKTLevelNamesMask (1<<7)
#define XkbIndicatorNamesMask (1<<8)
#define XkbKeyNamesMask (1<<9)
#define XkbKeyAliasesMask (1<<10)
#define XkbVirtualModNamesMask (1<<11)
#define XkbGroupNamesMask (1<<12)
#define XkbRGNamesMask (1<<13)
#define XkbComponentNamesMask (0x3f)
#define XkbAllNamesMask (0x3fff)
#define XkbGBN_TypesMask (1L << 0)
#define XkbGBN_CompatMapMask (1L << 1)
#define XkbGBN_ClientSymbolsMask (1L << 2)
#define XkbGBN_ServerSymbolsMask (1L << 3)
#define XkbGBN_SymbolsMask (XkbGBN_ClientSymbolsMask|XkbGBN_ServerSymbolsMask)
#define XkbGBN_IndicatorMapMask (1L << 4)
#define XkbGBN_KeyNamesMask (1L << 5)
#define XkbGBN_GeometryMask (1L << 6)
#define XkbGBN_OtherNamesMask (1L << 7)
#define XkbGBN_AllComponentsMask (0xff)
#define XkbLC_Hidden (1L << 0)
#define XkbLC_Default (1L << 1)
#define XkbLC_Partial (1L << 2)
#define XkbLC_AlphanumericKeys (1L << 8)
#define XkbLC_ModifierKeys (1L << 9)
#define XkbLC_KeypadKeys (1L << 10)
#define XkbLC_FunctionKeys (1L << 11)
#define XkbLC_AlternateGroup (1L << 12)
#define XkbXI_KeyboardsMask (1L << 0)
#define XkbXI_ButtonActionsMask (1L << 1)
#define XkbXI_IndicatorNamesMask (1L << 2)
#define XkbXI_IndicatorMapsMask (1L << 3)
#define XkbXI_IndicatorStateMask (1L << 4)
#define XkbXI_UnsupportedFeatureMask (1L << 15)
#define XkbXI_AllFeaturesMask (0x001f)
#define XkbXI_AllDeviceFeaturesMask (0x001e)
#define XkbXI_IndicatorsMask (0x001c)
#define XkbAllExtensionDeviceEventsMask (0x801f)
#define XkbPCF_DetectableAutoRepeatMask (1L << 0)
#define XkbPCF_GrabsUseXKBStateMask (1L << 1)
#define XkbPCF_AutoResetControlsMask (1L << 2)
#define XkbPCF_LookupStateWhenGrabbed (1L << 3)
#define XkbPCF_SendEventUsesXKBState (1L << 4)
#define XkbPCF_AllFlagsMask (0x1F)
#define XkbDF_DisableLocks (1<<0)
#endif
