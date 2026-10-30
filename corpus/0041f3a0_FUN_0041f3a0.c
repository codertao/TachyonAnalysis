
void FUN_0041f3a0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      FUN_0041f260(*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  return;
}

