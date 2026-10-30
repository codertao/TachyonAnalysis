
void FUN_00407380(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    FUN_00407360(param_1);
    return;
  }
  if ((*(byte *)(param_3 + 4) & 1) != 0) {
    FUN_00407360(param_1);
    return;
  }
  *(uint *)(param_1 + 0x38) = (uint)(*param_3 - DAT_005b9640) / (uint)param_3[5];
  iVar1 = param_3[1] * 0x80 + DAT_005b9648 * -0x80;
  *(int *)(param_1 + 0x3c) = (int)(CONCAT44(iVar1 >> 0x1f,iVar1 >> 7) / (longlong)param_3[5]);
  iVar1 = param_3[2] * 0x80 + DAT_005b964c * -0x80;
  *(int *)(param_1 + 0x40) = (int)(CONCAT44(iVar1 >> 0x1f,iVar1 >> 7) / (longlong)param_3[5]);
  return;
}

