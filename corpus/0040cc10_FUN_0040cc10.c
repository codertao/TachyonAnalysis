
void FUN_0040cc10(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (DAT_005a5544 != 0) {
    puVar2 = &DAT_005a5548;
    do {
      FUN_0040cbe0(param_1,*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  return;
}

