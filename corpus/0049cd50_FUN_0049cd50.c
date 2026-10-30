
void FUN_0049cd50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(PTR_DAT_0055d7cc + 0x10);
  iVar2 = 0x800;
  do {
    if ((*piVar1 == param_1) && ((code *)piVar1[1] != (code *)0x0)) {
      (*(code *)piVar1[1])(*piVar1);
    }
    piVar1 = piVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

