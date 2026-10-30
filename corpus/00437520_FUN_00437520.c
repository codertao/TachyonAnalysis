
void FUN_00437520(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      FUN_0045cac0(*piVar1 + 0x14);
      FUN_00457f20(*piVar1);
      FUN_0049c530(piVar1[1]);
      if (piVar1[2] != 0) {
        FUN_0049c530(piVar1[2]);
      }
      FUN_0048e380(*piVar1,0xbc);
      FUN_0048e380(piVar1,0x44);
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x11;
    } while (uVar2 < DAT_005a5544);
  }
  DAT_005a5544 = 0;
  return;
}

