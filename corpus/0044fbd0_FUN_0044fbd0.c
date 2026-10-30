
void FUN_0044fbd0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (DAT_005a5544 != 0) {
    puVar2 = &DAT_005a5548;
    do {
      FUN_0044fb70(puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  uVar1 = 0;
  if (DAT_005a5544 != 0) {
    puVar2 = &DAT_005a5548;
    do {
      FUN_0044fbb0(puVar2[1],*puVar2);
      FUN_0044fbb0(puVar2[2],*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  return;
}

