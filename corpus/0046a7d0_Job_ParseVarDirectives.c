
/* parse VAR_CHECK/ACCEPT/COMPLETE/RESET/RETURN into campaign-var-set arrays */

void Job_ParseVarDirectives(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  iVar3 = Cbin_CountEntries_Ctx(&DAT_00532af4,s_VAR_CHECK_0054abac,param_2);
  param_1[1] = iVar3;
  iVar3 = Cbin_CountEntries_Ctx(&DAT_00532af4,s_VAR_ACCEPT_0054aba0,param_2);
  param_1[3] = iVar3;
  iVar3 = Cbin_CountEntries_Ctx(&DAT_00532af4,s_VAR_COMPLETE_0054ab90,param_2);
  param_1[5] = iVar3;
  iVar3 = Cbin_CountEntries_Ctx(&DAT_00532af4,s_VAR_RESET_0054ab84,param_2);
  param_1[7] = iVar3;
  iVar3 = Cbin_CountEntries_Ctx(&DAT_00532af4,s_VAR_RETURN_0054ab78,param_2);
  param_1[9] = iVar3;
  if (param_1[1] != 0) {
    Mem_AllocZeroTagged(param_1,param_1[1] * 100,4,s_STARBASE_CVS_CHECK_0054ab64,0xa100);
  }
  if (param_1[3] != 0) {
    Mem_AllocZeroTagged(param_1 + 2,param_1[3] * 0x60,4,s_STARBASE_CVS_SET_0054ab50,0xa100);
  }
  if (param_1[5] != 0) {
    Mem_AllocZeroTagged(param_1 + 4,param_1[5] * 100,4,s_STARBASE_CVS_COMPLETE_0054ab38,0xa100);
  }
  if (param_1[7] != 0) {
    Mem_AllocZeroTagged(param_1 + 6,param_1[7] * 0x60,4,s_STARBASE_CVS_RESET_0054ab24,0xa100);
  }
  if (param_1[9] != 0) {
    Mem_AllocZeroTagged(param_1 + 8,param_1[9] * 0x60,4,s_STARBASE_CVS_RETURNS_0054ab0c,0xa100);
  }
  Cbin_FindSection(&DAT_00532af4,param_2);
  piVar1 = param_1 + 1;
  iVar3 = *param_1;
  param_1 = (int *)0x0;
  if (*piVar1 != 0) {
    iVar4 = iVar3 + 0x40;
    do {
      Cbin_FindParam(s_VAR_CHECK_0054abac,iVar3,0x1f,0,4,1,param_2);
      Cbin_GetParamN_Ctx(s_VAR_CHECK_0054abac,iVar4 + -0x20,0x1f,0,4,2,param_2);
      Cbin_GetParamN_Ctx(s_VAR_CHECK_0054abac,iVar4,0x1f,0,4,3,param_2);
      DAT_005a41e0._0_1_ = 0;
      Cbin_GetParamN_Ctx(s_VAR_CHECK_0054abac,&DAT_005a41e0,0x7f,0,4,4,param_2);
      Job_StoreVarValue(iVar3,&DAT_005a41e0);
      param_1 = (int *)((int)param_1 + 1);
      iVar3 = iVar3 + 100;
      iVar4 = iVar4 + 100;
    } while (param_1 < (uint)piVar2[1]);
  }
  Cbin_FindSection(&DAT_00532af4,param_2);
  iVar3 = piVar2[2];
  param_1 = (int *)0x0;
  if (piVar2[3] != 0) {
    iVar4 = iVar3 + 0x40;
    do {
      Cbin_FindParam(s_VAR_ACCEPT_0054aba0,iVar3,0x1f,0,4,1,param_2);
      Cbin_GetParamN_Ctx(s_VAR_ACCEPT_0054aba0,iVar4 + -0x20,0x1f,0,4,2,param_2);
      Cbin_GetParamN_Ctx(s_VAR_ACCEPT_0054aba0,iVar4,0x1f,0,4,3,param_2);
      param_1 = (int *)((int)param_1 + 1);
      iVar3 = iVar3 + 0x60;
      iVar4 = iVar4 + 0x60;
    } while (param_1 < (uint)piVar2[3]);
  }
  Cbin_FindSection(&DAT_00532af4,param_2);
  iVar3 = piVar2[4];
  param_1 = (int *)0x0;
  if (piVar2[5] != 0) {
    iVar4 = iVar3 + 0x40;
    do {
      Cbin_FindParam(s_VAR_COMPLETE_0054ab90,iVar3,0x1f,0,4,1,param_2);
      Cbin_GetParamN_Ctx(s_VAR_COMPLETE_0054ab90,iVar4 + -0x20,0x1f,0,4,2,param_2);
      Cbin_GetParamN_Ctx(s_VAR_COMPLETE_0054ab90,iVar4,0x1f,0,4,3,param_2);
      Cbin_GetParamN_Ctx(s_VAR_COMPLETE_0054ab90,&DAT_005a41e0,0x7f,0,4,4,param_2);
      DAT_005a41e0._0_1_ = 0;
      Job_StoreVarValue(iVar3,&DAT_005a41e0);
      param_1 = (int *)((int)param_1 + 1);
      iVar3 = iVar3 + 100;
      iVar4 = iVar4 + 100;
    } while (param_1 < (uint)piVar2[5]);
  }
  Cbin_FindSection(&DAT_00532af4,param_2);
  iVar3 = piVar2[6];
  param_1 = (int *)0x0;
  if (piVar2[7] != 0) {
    iVar4 = iVar3 + 0x40;
    do {
      Cbin_FindParam(s_VAR_RESET_0054ab84,iVar3,0x1f,0,4,1,param_2);
      Cbin_GetParamN_Ctx(s_VAR_RESET_0054ab84,iVar4 + -0x20,0x1f,0,4,2,param_2);
      Cbin_GetParamN_Ctx(s_VAR_RESET_0054ab84,iVar4,0x1f,0,4,3,param_2);
      param_1 = (int *)((int)param_1 + 1);
      iVar3 = iVar3 + 0x60;
      iVar4 = iVar4 + 0x60;
    } while (param_1 < (uint)piVar2[7]);
  }
  Cbin_FindSection(&DAT_00532af4,param_2);
  iVar3 = piVar2[8];
  param_1 = (int *)0x0;
  if (piVar2[9] != 0) {
    iVar4 = iVar3 + 0x40;
    do {
      Cbin_FindParam(s_VAR_RETURN_0054ab78,iVar3,0x1f,0,4,1,param_2);
      Cbin_GetParamN_Ctx(s_VAR_RETURN_0054ab78,iVar4 + -0x20,0x1f,0,4,2,param_2);
      Cbin_GetParamN_Ctx(s_VAR_RETURN_0054ab78,iVar4,0x1f,0,4,3,param_2);
      param_1 = (int *)((int)param_1 + 1);
      iVar3 = iVar3 + 0x60;
      iVar4 = iVar4 + 0x60;
    } while (param_1 < (uint)piVar2[9]);
  }
  return;
}

