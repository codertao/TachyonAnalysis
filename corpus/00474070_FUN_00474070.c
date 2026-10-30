
void FUN_00474070(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (DAT_0058974c != 0) {
    piVar2 = (int *)(DAT_00589750 + 0x58);
    while (*piVar2 != *(int *)(param_1 + 0x58)) {
      piVar2 = piVar2 + 0x17;
      uVar1 = uVar1 + 1;
      if (DAT_0058974c <= uVar1) {
        return;
      }
    }
    FUN_00473fb0(uVar1 - DAT_005720c0);
  }
  return;
}

