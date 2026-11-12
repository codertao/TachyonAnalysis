
/* sweep: mis-split tail */

undefined4 Starbase_LoadBase_part2(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  Cbin_GetField_Ctx(&DAT_00532af4,s_TEXT_TOOL_ITEMBIN_0054af08,&DAT_005879c4,0x10,0,&stack0x00000000
                   );
  Cbin_GetField_Ctx(&DAT_00532af4,s_FONT_LONG_DEFAULT_0054aef4,&DAT_005882e8,0x10,0,&stack0x00000000
                   );
  DAT_005879b0 = load_rtxt_bin(&DAT_005879c4,0xa100);
  Cbin_FindSection(s_DATA_RECTS_0054aee8,&stack0x00000000);
  iVar2 = Cbin_FindParam(&DAT_00536bc4,&DAT_005882f8,0x3f,0,4,1,&stack0x00000000);
  if (iVar2 != 0) {
    puVar6 = &DAT_0058833c;
    do {
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar6 + -4,1,2,&stack0x00000000);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar6,1,3,&stack0x00000000);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar6 + 4,1,4,&stack0x00000000);
      Cbin_GetParamN_Ctx(&DAT_00536bc4,0,0,puVar6 + 8,1,5,&stack0x00000000);
      if (0x58973b < (int)(puVar6 + 0x50)) break;
      iVar2 = Cbin_FindParam(&DAT_00536bc4,puVar6 + 0xc,0x3f,0,4,1,&stack0x00000000);
      puVar6 = puVar6 + 0x50;
    } while (iVar2 != 0);
  }
  iVar2 = Cbin_CountEntries_Ctx(s_ICONS_0054aed8,&DAT_0054aee0,&stack0x00000000);
  iVar3 = Cbin_FindSection(s_ICONS_0054aed8,&stack0x00000000);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    Mem_AllocZeroTagged(&DAT_005896fc,iVar2 * 0x74,4,s_STARBASE_ICONS_0054aec8,0xa100);
    if (DAT_005896fc != 0) {
      iVar3 = DAT_005896fc + 0x60;
      iVar5 = DAT_005896fc;
      DAT_005896f8 = iVar2;
      do {
        iVar4 = Cbin_FindParam(&DAT_0054aee0,iVar5,0x3f,0,4,1,&stack0x00000000);
        if (iVar4 == 0) break;
        Cbin_GetParamN_Ctx(&DAT_0054aee0,iVar3 + -0x20,0x1f,0,4,2,&stack0x00000000);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3,1,3,&stack0x00000000);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 4,1,4,&stack0x00000000);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 8,1,5,&stack0x00000000);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,iVar3 + 0xc,2,6,&stack0x00000000);
        piVar1 = (int *)(iVar3 + 0x10);
        Cbin_GetParamN_Ctx(&DAT_0054aee0,0,0,piVar1,1,7,&stack0x00000000);
        if (*piVar1 == 0) {
          *piVar1 = 0xff;
        }
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + 0x74;
        iVar3 = iVar3 + 0x74;
      } while (iVar2 != 0);
    }
  }
  iVar2 = Cbin_CountEntries_Ctx(s_COLORS_0054aec0,s_COLOR_0053681c,&stack0x00000000);
  iVar3 = Cbin_FindSection(s_COLORS_0054aec0,&stack0x00000000);
  if ((iVar3 != 0) && (iVar2 != 0)) {
    Mem_AllocZeroTagged(&DAT_00589704,iVar2 * 0x4c,4,s_STARBASE_ICONS_0054aec8,0xa100);
    if (DAT_00589704 != 0) {
      iVar3 = DAT_00589704 + 0x44;
      iVar5 = DAT_00589704;
      DAT_00589700 = iVar2;
      do {
        iVar4 = Cbin_FindParam(s_COLOR_0053681c,iVar5,0x3f,0,4,1,&stack0x00000000);
        if (iVar4 == 0) break;
        Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3 + -4,1,2,&stack0x00000000);
        Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3,1,3,&stack0x00000000);
        Cbin_GetParamN_Ctx(s_COLOR_0053681c,0,0,iVar3 + 4,1,4,&stack0x00000000);
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + 0x4c;
        iVar3 = iVar3 + 0x4c;
      } while (iVar2 != 0);
    }
  }
  StoreItem_LoadDefs(s_item_cfg_0054aeb4,1);
  Nop();
  Starbase_LoadIcons();
  Starbase_FindAudioSection(&stack0x00000000);
  Cbin_Free(&stack0x00000000);
  return 1;
}

