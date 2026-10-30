
int * FUN_004b7a00(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_006af660;
  if (DAT_006af788 != 0) {
    do {
      if ((*piVar1 != 0) && (piVar1[3] == param_1)) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = (int *)((int)piVar1 + DAT_006af78c);
    } while (uVar2 < DAT_006af788);
  }
  return (int *)0x0;
}

