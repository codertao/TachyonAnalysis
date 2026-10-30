
void FUN_004b50d0(byte *param_1,uint param_2)

{
  int iVar1;
  
  if (((*param_1 & 2) == 0) && (iVar1 = *(int *)(param_1 + 0x40), iVar1 != 0)) {
    if (*(uint *)(iVar1 + 0x2c) <= param_2) {
      param_2 = *(uint *)(iVar1 + 0x2c) - 1;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x90) + 4 + param_2 * 8);
    if (1 < *(uint *)(iVar1 + 4)) {
      FUN_004b4fb0();
      FUN_004b9f80();
      return;
    }
    FUN_004b4f40(param_1,iVar1);
    FUN_004b9f80();
  }
  return;
}

