
/* sweep: panel table 0x535b90 */

void FlightUi_InitAll(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_00535b90;
  DAT_005b1de0 = &DAT_00535b90;
  iVar2 = DAT_00535b90;
  while (iVar2 != 0) {
    puVar3[1] = 0;
    piVar1 = puVar3 + 4;
    puVar3 = puVar3 + 4;
    iVar2 = *piVar1;
  }
  KeyChart_Init();
  InGameUi_Init();
  OptionsPanel_Init();
  WingMenu_Init();
  VonUi_Init();
  VonMenu_Init();
  return;
}

