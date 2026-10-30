
void FUN_00435a30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  thunk_FUN_0048e180();
  FUN_0041f3d0();
  uVar2 = 0;
  puVar1 = &DAT_005897f0;
  if (DAT_0058af70 != 0) {
    do {
      if (puVar1[0xd] != 0) {
        FUN_0048e120(puVar1);
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x2f;
    } while (uVar2 < DAT_0058af70);
  }
  return;
}

