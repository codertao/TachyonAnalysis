
void FUN_004561b0(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (10 < param_4) {
    param_4 = 10;
  }
  if ((param_3 & 4) != 0) {
    *param_1 = *param_1 + (((param_1[1] << 1) >> 0xc) * *(int *)(&DAT_00532fc8 + param_4 * 4) >> 8);
    iVar1 = FUN_00455e20(param_1,param_2);
    if (iVar1 < *param_1) {
      iVar1 = FUN_00455e20(param_1,param_2);
      *param_1 = iVar1;
    }
  }
  if ((param_3 & 2) != 0) {
    iVar1 = Shield_GetMax(param_1,param_2);
    if (((param_3 & 0x10) != 0) || (param_1[2] != 0)) {
      param_1[2] = param_1[2] + (*(int *)(&DAT_00532fc8 + param_4 * 4) * (param_1[3] >> 0xb) >> 8);
    }
    if (iVar1 < param_1[2]) {
      param_1[2] = iVar1;
    }
    if (((param_3 & 0x10) != 0) || (param_1[4] != 0)) {
      param_1[4] = param_1[4] + (*(int *)(&DAT_00532fc8 + param_4 * 4) * (param_1[5] >> 0xb) >> 8);
    }
    if (iVar1 < param_1[4]) {
      param_1[4] = iVar1;
    }
  }
  if ((((param_3 & 8) != 0) && (*(int *)(param_2 + 0x30) != 0)) && ((param_3 & 1) == 0)) {
    param_1[6] = param_1[6] + (*(int *)(&DAT_00532fc8 + param_4 * 4) * (param_1[7] >> 10) >> 8);
    iVar1 = FUN_00455e00(param_1,param_2);
    if (iVar1 < param_1[6]) {
      iVar1 = FUN_00455e00(param_1,param_2);
      param_1[6] = iVar1;
    }
  }
  return;
}

