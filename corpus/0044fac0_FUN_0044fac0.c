
void FUN_0044fac0(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_006af660;
  if (DAT_005897e0 != 0) {
    do {
      if (*piVar1 != 0) {
        *(undefined4 *)(piVar1[0x32] + 100) = 0;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x82;
    } while (uVar2 < DAT_005897e0);
  }
  return;
}

