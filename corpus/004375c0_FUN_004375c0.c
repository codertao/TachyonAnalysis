
undefined4 * FUN_004375c0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      if (puVar1[0x10] == param_1) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x11;
    } while (uVar2 < DAT_005a5544);
  }
  return (undefined4 *)0x0;
}

