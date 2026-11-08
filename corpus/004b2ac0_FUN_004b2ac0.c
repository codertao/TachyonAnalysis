
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b2ac0(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int local_2c;
  vec3 local_24;
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
  FUN_004b1bb0(local_18,(vec3 *)(param_1 + 0x34));
  pfVar3 = *(float **)(iVar1 + 0x14);
  param_1 = 0;
  if (*(int *)(iVar1 + 8) != 0) {
    do {
      local_2c = (int)(longlong)ROUND(*pfVar3 * _DAT_0052e544);
      local_24.x = local_2c;
      local_2c = (int)(longlong)ROUND(pfVar3[1] * _DAT_0052e544);
      local_24.y = local_2c;
      local_2c = (int)(longlong)ROUND(pfVar3[2] * _DAT_0052e544);
      local_24.z = local_2c;
      some_rotate_by_global(&local_24,&local_24);
      iVar2 = *param_2;
      if (local_24.x <= *param_2) {
        iVar2 = local_24.x;
      }
      *param_2 = iVar2;
      iVar2 = param_2[1];
      if (local_24.y <= param_2[1]) {
        iVar2 = local_24.y;
      }
      param_2[1] = iVar2;
      iVar2 = param_2[2];
      if (local_24.z <= param_2[2]) {
        iVar2 = local_24.z;
      }
      param_2[2] = iVar2;
      iVar2 = *param_3;
      if (*param_3 <= local_24.x) {
        iVar2 = local_24.x;
      }
      *param_3 = iVar2;
      iVar2 = param_3[1];
      if (param_3[1] <= local_24.y) {
        iVar2 = local_24.y;
      }
      param_3[1] = iVar2;
      iVar2 = param_3[2];
      if (param_3[2] <= local_24.z) {
        iVar2 = local_24.z;
      }
      param_3[2] = iVar2;
      param_1 = param_1 + 1;
      pfVar3 = pfVar3 + 3;
    } while (param_1 < *(uint *)(iVar1 + 8));
  }
  return 1;
}

