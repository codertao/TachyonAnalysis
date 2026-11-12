
/* sweep: %s%02d.wng */

int Wingman_LoadAll(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint local_70;
  undefined1 local_6c [108];
  
  local_70 = 0;
  iVar5 = param_2 + 0x34;
  do {
    str_sprintf(&DAT_005a41e0,s__s_02d_wng_0054adcc,param_1,local_70);
    iVar2 = Fs_Exists(&DAT_005a41e0);
    if (iVar2 != 0) {
      iVar2 = Cbin_LoadFile(&DAT_005a41e0,local_6c);
      if (iVar2 != 0) {
        str_sprintf(param_2,&DAT_005a41e0);
        iVar2 = Cbin_CountIndexed_Ctx(s_BLOCK_d_00540018,local_6c);
        piVar1 = (int *)(iVar5 + 0xa0);
        *(int *)(iVar5 + 0x9c) = iVar2;
        Mem_AllocZeroTagged(piVar1,iVar2 * 0x128,4,s_STARBASE_BLOCK_0054acd0,0xa100);
        *(int *)(iVar5 + 0xa4) = *piVar1;
        Cbin_GetField_Ctx(&DAT_00532af4,s_TT_ID_SHORT_0054ac80,iVar5 + -0x20,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_FONT_SHORT_0054ac68,iVar5,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_PAYMENT_0054ac50,0,0,iVar5 + 0x6c,local_6c);
        Cbin_GetParam_Ctx(&DAT_00532af4,&DAT_0054adc8,0,0,iVar5 + 0x70,2,1,local_6c);
        Cbin_GetField_Ctx(&DAT_0054adb8,s_DESFILE_0054adc0,iVar5 + 0x20,0x1f,0,local_6c);
        Cbin_FindSection(&DAT_00532af4,local_6c);
        Cbin_FindParam(s_THUMBNAIL_0054ac1c,iVar5 + 0x74,0x1f,0,4,1,local_6c);
        Cbin_GetParamN_Ctx(s_THUMBNAIL_0054ac1c,0,0,iVar5 + 0x94,1,2,local_6c);
        Cbin_GetParamN_Ctx(s_THUMBNAIL_0054ac1c,0,0,iVar5 + 0x98,1,3,local_6c);
        uVar3 = Rtxt_Lookup(DAT_005879b4,s_WINGMEN_0054adb0,iVar5 + -0x20);
        *(undefined4 *)(iVar5 + 0x40) = uVar3;
        Job_ParseVarDirectives(iVar5 + 0x44,local_6c);
        iVar2 = *piVar1;
        uVar4 = 0;
        if (*(int *)(iVar5 + 0x9c) != 0) {
          do {
            str_sprintf(&DAT_005a41e0,s_BLOCK_d_00540018,uVar4);
            uVar3 = Starbase_FindFont(s_WING_PAK_0054ada4);
            uVar3 = Starbase_FindFont(s_WING_TEXT_0054ad98,uVar3);
            Job_ParseBriefingBlock(iVar2,&DAT_005a41e0,DAT_005879b4,local_6c,&DAT_005882e8,uVar3);
            iVar2 = iVar2 + 0x128;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar5 + 0x9c));
        }
        Cbin_Free(local_6c);
        param_2 = param_2 + 0xe0;
        iVar5 = iVar5 + 0xe0;
      }
    }
    local_70 = local_70 + 1;
  } while (local_70 < 100);
  return param_2;
}

