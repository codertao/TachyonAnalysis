
/* load <prefix>NN.job (NN 0..99) into array of 0x1b8 job structs */

int Job_LoadAll(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_6c [108];
  
  iVar3 = param_2;
  param_2 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s__s_02d_job_0054ad10,param_1,param_2);
    iVar1 = Fs_Exists(&DAT_005a41e0);
    if (iVar1 != 0) {
      iVar1 = Cbin_LoadFile(&DAT_005a41e0,local_6c);
      if (iVar1 != 0) {
        str_sprintf(iVar3,&DAT_005a41e0);
        uVar2 = Cbin_CountIndexed_Ctx(s_BLOCK_d_00540018,local_6c);
        *(undefined4 *)(iVar3 + 0x178) = uVar2;
        uVar2 = Cbin_CountIndexed_Ctx(s_LOSE_BLOCK_d_0054ad00,local_6c);
        *(undefined4 *)(iVar3 + 0x188) = uVar2;
        uVar2 = Cbin_CountIndexed_Ctx(s_WIN_BLOCK_d_0054acf4,local_6c);
        *(undefined4 *)(iVar3 + 0x198) = uVar2;
        uVar2 = Cbin_CountIndexed_Ctx(s_PARTIAL_WIN_BLOCK_d_0054ace0,local_6c);
        *(undefined4 *)(iVar3 + 0x1a8) = uVar2;
        if (*(int *)(iVar3 + 0x178) != 0) {
          FUN_0048e3d0((undefined4 *)(iVar3 + 0x17c),*(int *)(iVar3 + 0x178) * 0x128,4,
                       s_STARBASE_BLOCK_0054acd0,0xa100);
          *(undefined4 *)(iVar3 + 0x180) = *(undefined4 *)(iVar3 + 0x17c);
        }
        if (*(int *)(iVar3 + 0x188) != 0) {
          FUN_0048e3d0((undefined4 *)(iVar3 + 0x18c),*(int *)(iVar3 + 0x188) * 0x128,4,
                       s_STARBASE_MSGBLOCK_0054acbc,0xa100);
          *(undefined4 *)(iVar3 + 400) = *(undefined4 *)(iVar3 + 0x18c);
        }
        if (*(int *)(iVar3 + 0x198) != 0) {
          FUN_0048e3d0((undefined4 *)(iVar3 + 0x19c),*(int *)(iVar3 + 0x198) * 0x128,4,
                       s_STARBASE_WINBLOCK_0054aca8,0xa100);
          *(undefined4 *)(iVar3 + 0x1a0) = *(undefined4 *)(iVar3 + 0x19c);
        }
        if (*(int *)(iVar3 + 0x1a8) != 0) {
          FUN_0048e3d0((undefined4 *)(iVar3 + 0x1ac),*(int *)(iVar3 + 0x1a8) * 0x128,4,
                       s_STARBASE_PARTIALWINBLOCK_0054ac8c,0xa100);
          *(undefined4 *)(iVar3 + 0x1b0) = *(undefined4 *)(iVar3 + 0x1ac);
        }
        Cbin_GetField_Ctx(&DAT_00532af4,s_TT_ID_SHORT_0054ac80,iVar3 + 0x94,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_EMPLOYER_0054ac74,iVar3 + 0xb4,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_FONT_SHORT_0054ac68,iVar3 + 0xd4,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_JOB_TEXT_BULLET_0054ac58,iVar3 + 0xf4,0x1f,0,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_PAYMENT_0054ac50,0,0,iVar3 + 0x148,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_PARTIAL_PAYMENT_0054ac40,0,0,iVar3 + 0x14c,local_6c);
        Cbin_GetField_Ctx(&DAT_00532af4,s_NO_WINGMAN_0054ac34,0,0,iVar3 + 0x144,local_6c);
        Cbin_FindSection(&DAT_00532af4,local_6c);
        Cbin_FindParam(s_STATUS_VAR_0054ac28,iVar3 + 0x14,0x3f,0,4,1,local_6c);
        Cbin_GetParamN_Ctx(s_STATUS_VAR_0054ac28,iVar3 + 0x54,0x3f,0,4,2,local_6c);
        Cbin_FindSection(&DAT_00532af4,local_6c);
        Cbin_FindParam(s_THUMBNAIL_0054ac1c,iVar3 + 0x150,0x1f,0,4,1,local_6c);
        Cbin_GetParamN_Ctx(s_THUMBNAIL_0054ac1c,0,0,iVar3 + 0x170,1,2,local_6c);
        Cbin_GetParamN_Ctx(s_THUMBNAIL_0054ac1c,0,0,iVar3 + 0x174,1,3,local_6c);
        uVar2 = Rtxt_Lookup(DAT_005879a8,&DAT_00534280,iVar3 + 0x94);
        *(undefined4 *)(iVar3 + 0x114) = uVar2;
        uVar2 = Rtxt_Lookup(DAT_005879a8,s_EMPLOYERS_0054ac10,iVar3 + 0xb4);
        *(undefined4 *)(iVar3 + 0x118) = uVar2;
        Job_ParseVarDirectives(iVar3 + 0x11c,local_6c);
        iVar1 = *(int *)(iVar3 + 0x17c);
        uVar4 = 0;
        if (*(int *)(iVar3 + 0x178) != 0) {
          do {
            str_sprintf(&DAT_005a41e0,s_BLOCK_d_00540018,uVar4);
            uVar2 = FUN_004699f0(s_JOB_PAK_0054ac08);
            uVar2 = FUN_004699f0(s_JOB_TEXT_0054abfc,uVar2);
            Job_ParseBriefingBlock(iVar1,&DAT_005a41e0,DAT_005879a8,local_6c,&DAT_005882e8,uVar2);
            iVar1 = iVar1 + 0x128;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar3 + 0x178));
        }
        iVar1 = *(int *)(iVar3 + 0x18c);
        uVar4 = 0;
        if (*(int *)(iVar3 + 0x188) != 0) {
          do {
            str_sprintf(&DAT_005a41e0,s_LOSE_BLOCK_d_0054ad00,uVar4);
            uVar2 = FUN_004699f0(s_JOBWIN_PAK_0054abf0);
            uVar2 = FUN_004699f0(s_JOBWIN_TEXT_0054abe4,uVar2);
            Job_ParseBriefingBlock(iVar1,&DAT_005a41e0,DAT_005879a8,local_6c,&DAT_005882e8,uVar2);
            iVar1 = iVar1 + 0x128;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar3 + 0x188));
        }
        iVar1 = *(int *)(iVar3 + 0x19c);
        uVar4 = 0;
        if (*(int *)(iVar3 + 0x198) != 0) {
          do {
            str_sprintf(&DAT_005a41e0,s_WIN_BLOCK_d_0054acf4,uVar4);
            uVar2 = FUN_004699f0(s_JOBWIN_PAK_0054abf0);
            uVar2 = FUN_004699f0(s_JOBWIN_TEXT_0054abe4,uVar2);
            Job_ParseBriefingBlock(iVar1,&DAT_005a41e0,DAT_005879a8,local_6c,&DAT_005882e8,uVar2);
            iVar1 = iVar1 + 0x128;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar3 + 0x198));
        }
        iVar1 = *(int *)(iVar3 + 0x1ac);
        uVar4 = 0;
        if (*(int *)(iVar3 + 0x1a8) != 0) {
          do {
            str_sprintf(&DAT_005a41e0,s_PARTIAL_WIN_BLOCK_d_0054ace0,uVar4);
            uVar2 = FUN_004699f0(s_JOBWIN_PAK_0054abf0);
            uVar2 = FUN_004699f0(s_JOBWIN_TEXT_0054abe4,uVar2);
            Job_ParseBriefingBlock(iVar1,&DAT_005a41e0,DAT_005879a8,local_6c,&DAT_005882e8,uVar2);
            iVar1 = iVar1 + 0x128;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(iVar3 + 0x1a8));
        }
        FUN_0049adb0(local_6c);
        iVar3 = iVar3 + 0x1b8;
      }
    }
    param_2 = param_2 + 1;
  } while (param_2 < 100);
  return iVar3;
}

