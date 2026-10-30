
undefined4 * FUN_00410610(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_005b95e0;
  while( true ) {
    puVar2 = puVar1 + 0xe;
    if ((puVar1[0x11] & 0x80000000) != 0) {
      puVar2 = &DAT_00533ac8;
    }
    if (puVar2 == DAT_005b95e0) break;
    puVar1 = puVar2;
    if (puVar2[4] == param_1) {
LAB_00410657:
      FUN_00410280(puVar2);
      return puVar2;
    }
  }
  if ((*(byte *)(puVar2 + 3) & 0x40) == 0) {
    return puVar2;
  }
  if (DAT_005b95e4 == (undefined4 *)0x0) {
    return puVar2;
  }
  puVar2[0xc] = 1;
  puVar2 = DAT_005b95e4;
  goto LAB_00410657;
}

