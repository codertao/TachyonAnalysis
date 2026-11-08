
undefined4 FUN_004b3b80(byte *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  lVar1 = (longlong)*(int *)(*(int *)(param_1 + 0x40) + 0x30) * (longlong)DAT_00666b04;
  uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if ((int)(*(int *)(param_1 + 0x30) + uVar2) < GLBL_R_DIST_MIN_VAL) {
    return 0;
  }
  if (GLBL_R_DIST_MAX_VAL < (int)(*(int *)(param_1 + 0x30) - uVar2)) {
    return 0;
  }
  if ((*param_1 & 1) != 0) {
    return 1;
  }
  uVar3 = FUN_004b3b20(param_1,uVar2);
  return uVar3;
}

