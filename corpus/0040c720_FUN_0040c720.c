
undefined4 FUN_0040c720(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      if (((*(byte *)(puVar1[1] + 0x118) & 1) != 0) &&
         (*(int *)(puVar1[1] + 0x11c) == *(int *)(param_1 + 0x140))) {
        return *puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x11;
    } while (uVar2 < DAT_005a5544);
  }
  return DAT_005a5548;
}

