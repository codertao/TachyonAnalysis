
void FUN_00415ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_005b334c;
  iVar2 = 0x10;
  do {
    if (*piVar1 == param_1) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

