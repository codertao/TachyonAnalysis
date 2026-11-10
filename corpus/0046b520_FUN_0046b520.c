
int FUN_0046b520(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint local_70;
  undefined1 local_6c [108];
  
  local_70 = 0;
  iVar6 = param_2 + 0x50;
  iVar3 = param_2;
  do {
    str_sprintf(&DAT_005a41e0,s__s_02d_nws_0054ad8c,param_1,local_70);
    iVar2 = Fs_Exists(&DAT_005a41e0);
    if (iVar2 != 0) {
      iVar2 = Cbin_LoadFile(&DAT_005a41e0,local_6c);
      if (iVar2 != 0) {
        str_sprintf(iVar3,&DAT_005a41e0);
        iVar3 = Cbin_CountIndexed_Ctx(s_BLOCK_d_00540018,local_6c);
        piVar1 = (int *)(iVar6 + 0x9c);
        *(int *)(iVar6 + 0x98) = iVar3;
        FUN_0048e3d0(piVar1,iVar3 * 0x128,4,s_STARBASE_BLOCK_0054acd0,0xa100);
        *(int *)(iVar6 + 0xa0) = *piVar1;
        Cbin_GetField_Ctx(&DAT_00532af4,s_TT_ID_SHORT_0054ac80,iVar6 + -0x40,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_TT_ID_TITLE_0054ad80,iVar6 + -0x20,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_FONT_SHORT_0054ac68,iVar6,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_TICKER_BAR_0054ad74,0,0,iVar6 + 0xa8,local_6c);
        uVar4 = Rtxt_Lookup(DAT_005879ac,&DAT_0054ad6c,iVar6 + -0x40);
        *(undefined4 *)(iVar6 + 0x68) = uVar4;
        uVar4 = Rtxt_Lookup(DAT_005879ac,&DAT_0054ad6c,iVar6 + -0x20);
        *(undefined4 *)(iVar6 + 0x6c) = uVar4;
        Cbin_GetField_Ctx(&DAT_00532af4,s_AUDIO_ICON_0054ad60,0,0,iVar6 + 100,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_AUDIO_HEADLINE_0054ad50,iVar6 + 0x20,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_SBF_VARIALBE_0054ad40,iVar6 + 0x40,0x1f,0,local_6c);
        iVar3 = Cbin_GetField_Ctx(&DAT_00532af4,s_AUDIO_VOLUME_0053ffc4,0,0,
                                  (undefined4 *)(iVar6 + 0x60),local_6c);
        if (iVar3 == 0) {
          *(undefined4 *)(iVar6 + 0x60) = DAT_005879b8;
        }
        Job_ParseVarDirectives((undefined4 *)(iVar6 + 0x70),local_6c);
        if (DAT_005a6630 == 0) {
          uVar4 = FUN_00469d80(*(undefined4 *)(iVar6 + 0x70),*(undefined4 *)(iVar6 + 0x74));
          *(undefined4 *)(iVar6 + 0xac) = uVar4;
        }
        else {
          *(undefined4 *)(iVar6 + 0xac) = 1;
        }
        iVar3 = *piVar1;
        uVar5 = 0;
        if (*(int *)(iVar6 + 0x98) != 0) {
          do {
            str_sprintf(&DAT_005a41e0,s_BLOCK_d_00540018,uVar5);
            uVar4 = FUN_004699f0(s_NEWS_PAK_0054ad34);
            uVar4 = FUN_004699f0(s_NEWS_TEXT_0054ad28,uVar4);
            Job_ParseBriefingBlock(iVar3,&DAT_005a41e0,DAT_005879ac,local_6c,&DAT_005882e8,uVar4);
            iVar3 = iVar3 + 0x128;
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(iVar6 + 0x98));
        }
        FUN_0049adb0(local_6c);
        iVar3 = param_2 + 0x100;
        iVar6 = iVar6 + 0x100;
        param_2 = iVar3;
      }
    }
    local_70 = local_70 + 1;
  } while (local_70 < 100);
  return iVar3;
}

