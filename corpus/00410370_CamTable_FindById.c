
/* sweep */

undefined4 * CamTable_FindById(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_00533ac8;
  while( true ) {
    if ((puVar1[3] & 0x80000000) != 0) {
      return (undefined4 *)0x0;
    }
    if ((puVar1[4] == param_1) && (puVar1[0xc] != 0)) break;
    puVar1 = puVar1 + 0xe;
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  Camera_SetModeRecord(puVar1);
  return puVar1;
}

