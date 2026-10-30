
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00469ee0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  float *pfVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float local_14;
  float local_10;
  float local_c;
  longlong local_8;
  
  piVar2 = param_2;
  FUN_0048e3d0(param_2,0xd4,4,s_STARBASE_PAK_INFO_0054aabc,0xa100);
  uVar3 = param_3;
  iVar6 = *piVar2;
  if (iVar6 != 0) {
    Cbin_GetField_Ctx(param_1,s_USE_PAK_0054aab4,0,0,iVar6,param_3);
    Cbin_FindSection(param_1,uVar3);
    Cbin_FindParam(s_PAK_FILE_0054aaa8,iVar6 + 0x24,0xf,0,4,1,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_FILE_0054aaa8,iVar6 + 0x34,0xf,0,4,2,uVar3);
    Cbin_FindSection(param_1,uVar3);
    iVar4 = Cbin_FindParam(s_PAK_RECT_0054aa9c,0,0,(undefined4 *)(iVar6 + 4),1,1,uVar3);
    if (iVar4 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar6 + 4) = *param_4;
        *(undefined4 *)(iVar6 + 8) = param_4[1];
        *(undefined4 *)(iVar6 + 0xc) = param_4[2];
        *(undefined4 *)(iVar6 + 0x10) = param_4[3];
      }
    }
    else {
      Cbin_GetParamN_Ctx(s_PAK_RECT_0054aa9c,0,0,iVar6 + 8,1,2,uVar3);
      Cbin_GetParamN_Ctx(s_PAK_RECT_0054aa9c,0,0,iVar6 + 0xc,1,3,uVar3);
      Cbin_GetParamN_Ctx(s_PAK_RECT_0054aa9c,0,0,iVar6 + 0x10,1,4,uVar3);
    }
    Cbin_FindSection(param_1,uVar3);
    Cbin_FindParam(s_PAK_MOVE_0054aa90,0,0,&param_2,2,1,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_MOVE_0054aa90,0,0,&local_14,2,2,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_MOVE_0054aa90,0,0,&local_10,2,3,uVar3);
    local_8._0_4_ = (int)(longlong)ROUND((float)param_2 * _DAT_0052ebd4);
    *(int *)(iVar6 + 0x74) = (int)local_8;
    local_8._0_4_ = (int)(longlong)ROUND(local_14 * _DAT_0052ebd4);
    *(int *)(iVar6 + 0x78) = (int)local_8;
    local_8 = (longlong)ROUND(local_10 * _DAT_0052ebd4);
    *(int *)(iVar6 + 0x7c) = (int)local_8;
    Cbin_FindSection(param_1,uVar3);
    pfVar1 = (float *)(iVar6 + 0x50);
    Cbin_FindParam(s_PAK_FINAL_SCALE_0054aa80,0,0,pfVar1,2,1,uVar3);
    if (*pfVar1 == _DAT_0052e598) {
      *pfVar1 = 1.0;
    }
    Cbin_FindSection(param_1,uVar3);
    pfVar1 = (float *)(iVar6 + 0x4c);
    Cbin_FindParam(s_PAK_INIT_SCALE_0054aa70,0,0,pfVar1,2,1,uVar3);
    if (*pfVar1 == _DAT_0052e598) {
      *pfVar1 = 1.0;
    }
    Cbin_FindSection(param_1,uVar3);
    Cbin_FindParam(s_PAK_SCALE_FRAMES_0054aa5c,0,0,iVar6 + 100,1,1,uVar3);
    Cbin_FindSection(param_1,uVar3);
    Cbin_FindParam(s_PAK_SCALE_DELAY_0054aa4c,0,0,iVar6 + 0x60,1,1,uVar3);
    Cbin_FindSection(param_1,uVar3);
    Cbin_FindParam(s_PAK_INIT_0054aa40,0,0,&param_2,2,1,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_INIT_0054aa40,0,0,&local_14,2,2,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_INIT_0054aa40,0,0,&local_10,2,3,uVar3);
    local_8._0_4_ = (int)(longlong)ROUND((float)param_2 * _DAT_0052ebd4);
    *(int *)(iVar6 + 0x68) = (int)local_8;
    local_8._0_4_ = (int)(longlong)ROUND(local_14 * _DAT_0052ebd4);
    *(int *)(iVar6 + 0x6c) = (int)local_8;
    local_8 = (longlong)ROUND(local_10 * _DAT_0052ebd4);
    *(int *)(iVar6 + 0x70) = (int)local_8;
    Cbin_FindSection(param_1,uVar3);
    Cbin_FindParam(s_PAK_INIT_RECT_0054aa30,0,0,iVar6 + 0x80,1,1,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_INIT_RECT_0054aa30,0,0,iVar6 + 0x84,1,2,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_INIT_RECT_0054aa30,0,0,iVar6 + 0x88,1,3,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_INIT_RECT_0054aa30,0,0,iVar6 + 0x8c,1,4,uVar3);
    Cbin_GetParamN_Ctx(s_PAK_INIT_RECT_0054aa30,0,0,&local_c,2,5,uVar3);
    local_8 = (longlong)ROUND(local_c * _DAT_0052e548);
    *(int *)(iVar6 + 0xc0) = (int)local_8;
    if ((int)local_8 == 0) {
      *(undefined4 *)(iVar6 + 0xc0) = 1;
    }
    *(undefined4 *)(iVar6 + 200) = 0xffffffff;
    iVar4 = Cbin_CountEntries_Ctx(param_1,s_PAK_KEYFRAME_0054aa20,uVar3);
    *(int *)(iVar6 + 0xcc) = iVar4;
    if (iVar4 != 0) {
      FUN_0048e3d0((int *)(iVar6 + 0xd0),iVar4 * 0x74,4,s_STARBASE_PAK_KEYFRAME_0054aa08,0xa100);
      puVar5 = *(undefined4 **)(iVar6 + 0xd0);
      *(undefined4 *)(iVar6 + 200) = 0;
      iVar6 = *(int *)(iVar6 + 0xcc);
      Cbin_FindSection(param_1,uVar3);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        Cbin_FindParam(s_PAK_KEYFRAME_0054aa20,0,0,&param_2,2,1,uVar3);
        Cbin_GetParamN_Ctx(s_PAK_KEYFRAME_0054aa20,0,0,&local_14,2,2,uVar3);
        Cbin_GetParamN_Ctx(s_PAK_KEYFRAME_0054aa20,0,0,&local_10,2,3,uVar3);
        local_8._0_4_ = (int)(longlong)ROUND((float)param_2 * _DAT_0052ebd4);
        *puVar5 = (int)local_8;
        local_8._0_4_ = (int)(longlong)ROUND(local_14 * _DAT_0052ebd4);
        puVar5[1] = (int)local_8;
        local_8 = (longlong)ROUND(local_10 * _DAT_0052ebd4);
        puVar5[2] = (int)local_8;
        Cbin_GetParamN_Ctx(s_PAK_KEYFRAME_0054aa20,puVar5 + 9,0x3f,0,4,4,uVar3);
        Cbin_GetParamN_Ctx(s_PAK_KEYFRAME_0054aa20,0,0,&local_c,2,5,uVar3);
        local_8 = (longlong)ROUND(local_c * _DAT_0052e548);
        puVar5[0x19] = (int)local_8;
        Cbin_GetParamN_Ctx(s_PAK_KEYFRAME_0054aa20,0,0,&local_c,2,6,uVar3);
        local_8 = (longlong)ROUND(local_c * _DAT_0052e548);
        puVar5[0x1b] = (int)local_8;
        if ((int)local_8 == 0) {
          puVar5[0x1b] = 1;
        }
        puVar5 = puVar5 + 0x1d;
      }
    }
  }
  return;
}

