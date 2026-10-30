
void FUN_004b81d0(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_006af660;
  if (DAT_006af788 != 0) {
    do {
      if (*piVar1 != 0) {
        piVar1[0x29] = 0;
      }
      piVar1 = (int *)((int)piVar1 + DAT_006af78c);
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_006af788);
  }
  return;
}

