
undefined4 FUN_004325b0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_005a6a54) {
    piVar1 = &DAT_005a68d8;
    do {
      if (((piVar1[-1] == 2) && (*piVar1 != -1)) && (*piVar1 == param_1)) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
    } while (iVar2 < DAT_005a6a54);
  }
  return 0;
}

