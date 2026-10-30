
undefined4 FUN_004b8b60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0x80;
  piVar1 = DAT_006af5dc;
  do {
    if (*piVar1 == param_1) {
      return 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

