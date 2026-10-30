
void FUN_004374e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_005a5544 != 0) {
    puVar1 = &DAT_005a5550;
    do {
      FUN_004374a0(puVar1[-1]);
      FUN_004374a0(*puVar1);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x11;
    } while (uVar2 < DAT_005a5544);
  }
  return;
}

