
void FUN_004b7db0(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  piVar1 = DAT_006af660;
  uVar3 = DAT_006af788;
  if (DAT_006af788 != 0) {
    do {
      if (*piVar1 != 0) {
        piVar1[0x2b] = piVar1[0x2b] + 1;
        uVar3 = DAT_006af788;
      }
      piVar1 = (int *)((int)piVar1 + DAT_006af78c);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  if (DAT_006af7a0 != (code *)0x0) {
    (*DAT_006af7a0)(DAT_006af660,uVar3);
  }
  return;
}

