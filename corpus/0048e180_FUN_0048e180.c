
int * FUN_0048e180(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(DAT_005897e4 / 0x32);
  if ((DAT_005897e4 % 0x32 == 0) && (iVar2 = 0, piVar1 = DAT_0056aab4, 0 < DAT_0056aab0)) {
    do {
      if (*piVar1 != 0) {
        *(int *)piVar1[1] = *(int *)piVar1[1] + 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (iVar2 < DAT_0056aab0);
  }
  return piVar1;
}

