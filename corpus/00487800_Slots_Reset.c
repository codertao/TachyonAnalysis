
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Slots_Reset(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0056e000;
  for (iVar1 = 0xca; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_0056e2b8 = 1;
  _DAT_0056e2bc = &DAT_0056e090;
  _DAT_0056e2c0 = &DAT_0056e174;
  _DAT_0056e2c4 = &DAT_0056e258;
  _DAT_0056e2d8 = 2;
  _DAT_0056e2dc = &DAT_0056e04c;
  _DAT_0056e2e0 = &DAT_0056e130;
  _DAT_0056e2e4 = &DAT_0056e214;
  _DAT_0056e2f8 = 3;
  _DAT_0056e2fc = &DAT_0056e0d4;
  _DAT_0056e300 = &DAT_0056e1b8;
  _DAT_0056e304 = &DAT_0056e29c;
  Slots_LoadIcons();
  Slots_InitUi();
  Slots_RandomizeWheels();
  return;
}

