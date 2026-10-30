
void FUN_004b5080(byte *param_1)

{
  int iVar1;
  
  if (((*param_1 & 2) == 0) && (*(int *)(param_1 + 0x40) != 0)) {
    iVar1 = FUN_004b3ab0(param_1);
    if (iVar1 != 0) {
      if (1 < *(uint *)(iVar1 + 4)) {
        FUN_004b4fb0();
        FUN_004b9f80();
        return;
      }
      FUN_004b4f40(param_1,iVar1);
      FUN_004b9f80();
    }
  }
  return;
}

