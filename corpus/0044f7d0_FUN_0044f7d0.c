
undefined * FUN_0044f7d0(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  if (param_1 == -1) {
    puVar1 = &DAT_0059023c;
    uVar2 = 0;
    do {
      if (puVar1[0x1c] == '\0') {
        *(uint *)(puVar1 + 0x18) = uVar2;
        return puVar1;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x2c;
    } while (uVar2 < 0x40);
  }
  else if ((-1 < param_1) && (param_1 < 0x40)) {
    return &DAT_0059023c + param_1 * 0x2c;
  }
  return (undefined *)0x0;
}

