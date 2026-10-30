
undefined4 FUN_004617e0(int param_1,undefined4 param_2,undefined4 param_3,short *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x138) == 0) {
    return param_2;
  }
  do {
    iVar1 = **(int **)(param_1 + 0x138);
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        *(undefined4 *)(param_1 + 0x138) = 0;
        return param_2;
      }
      if ((*(short *)(iVar1 + 0x7c) != DAT_0058b080) && ((*(byte *)(iVar1 + 0xc3) & 1) == 0)) {
        param_2 = FUN_004614e0(iVar1,param_3,param_2,0x10);
        *param_4 = *param_4 + 1;
        uVar2 = uVar2 + 1;
      }
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 4;
  } while (uVar2 < 2);
  return param_2;
}

