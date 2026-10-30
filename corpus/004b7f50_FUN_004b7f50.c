
undefined4 FUN_004b7f50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_2 + 0x7c);
  iVar2 = 0x80;
  do {
    if (*piVar1 == param_1) {
      return 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

