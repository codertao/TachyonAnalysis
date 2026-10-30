
void FUN_0041df20(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = &DAT_005b2300;
  iVar2 = 0x100;
  do {
    if (*piVar1 != 0) {
      FUN_0041dc50(*piVar1 + 4);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

