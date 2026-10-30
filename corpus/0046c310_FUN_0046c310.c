
undefined4 FUN_0046c310(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 local_6c [108];
  
  FUN_00469eb0();
  DAT_005879a0 = param_1;
  Sped_LoadNameRegistry(s_desnames_cfg_0053f928,0xa100);
  iVar2 = Cbin_LoadFile(s_earth_bas_0054af1c,local_6c);
  if (iVar2 == 0) {
    return 0;
  }
  Cbin_GetField_Ctx(&DAT_00532af4,s_TEXT_TOOL_ITEMBIN_0054af08,&DAT_005879c4,0x10,0,local_6c);
  Cbin_GetField_Ctx(&DAT_00532af4,s_FONT_LONG_DEFAULT_0054aef4,&DAT_005882e8,0x10,0,local_6c);
  DAT_005879b0 = FUN_0049df00(&DAT_005879c4,0xa100);
  Cbin_FindSection(s_DATA_RECTS_0054aee8,local_6c);
  iVar2 = Cbin_FindParam(&DAT_00536bc4,&DAT_005882f8,0x3f,0,4,1,local_6c);
  if (iVar2 != 0) {
    puVar6 = &DAT_0058833c;
    do {
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar6 + -4,1,2,local_6c);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar6,1,3,local_6c);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar6 + 4,1,4,local_6c);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar6 + 8,1,5,local_6c);
      if (0x58973b < (int)(puVar6 + 0x50)) break;
      iVar2 = Cbin_FindParam(&DAT_00536bc4,puVar6 + 0xc,0x3f,0,4,1,local_6c);
      puVar6 = puVar6 + 0x50;
    } while (iVar2 != 0);
  }
  iVar2 = Cbin_CountEntries_Ctx(s_ICONS_0054aed8,&DAT_0054aee0,local_6c);
  iVar3 = Cbin_FindSection(s_ICONS_0054aed8,local_6c);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    FUN_0048e3d0(&DAT_005896fc,iVar2 * 0x74,4,s_STARBASE_ICONS_0054aec8,0xa100);
    if (DAT_005896fc != 0) {
      iVar3 = DAT_005896fc + 0x60;
      iVar5 = DAT_005896fc;
      DAT_005896f8 = iVar2;
      do {
        iVar4 = Cbin_FindParam(&DAT_0054aee0,iVar5,0x3f,0,4,1,local_6c);
        if (iVar4 == 0) break;
        Cbin_GetParamN_Ctx(&DAT_0054aee0,iVar3 + -0x20,0x1f,0,4,2,local_6c);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3,1,3,local_6c);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 4,1,4,local_6c);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 8,1,5,local_6c);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 0xc,2,6,local_6c);
        piVar1 = (int *)(iVar3 + 0x10);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,piVar1,1,7,local_6c);
        if (*piVar1 == 0) {
          *piVar1 = 0xff;
        }
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + 0x74;
        iVar3 = iVar3 + 0x74;
      } while (iVar2 != 0);
    }
  }
  iVar2 = Cbin_CountEntries_Ctx(s_COLORS_0054aec0,s_COLOR_0053681c,local_6c);
  iVar3 = Cbin_FindSection(s_COLORS_0054aec0,local_6c);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    FUN_0048e3d0(&DAT_00589704,iVar2 * 0x4c,4,s_STARBASE_ICONS_0054aec8,0xa100);
    if (DAT_00589704 != 0) {
      iVar3 = DAT_00589704 + 0x44;
      iVar5 = DAT_00589704;
      DAT_00589700 = iVar2;
      do {
        iVar4 = Cbin_FindParam(s_COLOR_0053681c,iVar5,0x3f,0,4,1,local_6c);
        if (iVar4 == 0) break;
        Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3 + -4,1,2,local_6c);
        Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3,1,3,local_6c);
        Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3 + 4,1,4,local_6c);
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + 0x4c;
        iVar3 = iVar3 + 0x4c;
      } while (iVar2 != 0);
    }
  }
  FUN_0046c1b0(s_item_cfg_0054aeb4,1);
  FUN_00445720();
  FUN_0046e6e0();
  FUN_00468eb0(local_6c);
  FUN_0049adb0(local_6c);
  return 1;
}

