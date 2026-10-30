
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b2ac0(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [24];
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x48);
  if (iVar1 == 0) {
    return 0;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  FUN_004b1bb0(local_18,param_1 + 0x34);
  pfVar3 = *(float **)(iVar1 + 0x14);
  param_1 = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    do {
      local_2c = (int)(longlong)ROUND(*pfVar3 * _DAT_0052e544);
      local_24 = local_2c;
      local_2c = (int)(longlong)ROUND(pfVar3[1] * _DAT_0052e544);
      local_20 = local_2c;
      local_2c = (int)(longlong)ROUND(pfVar3[2] * _DAT_0052e544);
      local_1c = local_2c;
      FUN_004b24d0(&local_24,&local_24);
      iVar2 = *param_2;
      if (local_24 <= *param_2) {
        iVar2 = local_24;
      }
      *param_2 = iVar2;
      iVar2 = param_2[1];
      if (local_20 <= param_2[1]) {
        iVar2 = local_20;
      }
      param_2[1] = iVar2;
      iVar2 = param_2[2];
      if (local_1c <= param_2[2]) {
        iVar2 = local_1c;
      }
      param_2[2] = iVar2;
      iVar2 = *param_3;
      if (*param_3 <= local_24) {
        iVar2 = local_24;
      }
      *param_3 = iVar2;
      iVar2 = param_3[1];
      if (param_3[1] <= local_20) {
        iVar2 = local_20;
      }
      param_3[1] = iVar2;
      iVar2 = param_3[2];
      if (param_3[2] <= local_1c) {
        iVar2 = local_1c;
      }
      param_3[2] = iVar2;
      param_1 = param_1 + 1;
      pfVar3 = pfVar3 + 3;
    } while (param_1 < *(uint *)(iVar1 + 8));
  }
  return 1;
}

