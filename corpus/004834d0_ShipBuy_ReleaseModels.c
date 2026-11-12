
/* sweep: guess */

void ShipBuy_ReleaseModels(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = &DAT_0056f534;
  iVar2 = 5;
  do {
    if (*piVar1 != 0) {
      Pak_UnloadModel(*piVar1);
    }
    set_button_state(&GLBL_UI_ELEM_LIST,piVar1 + -0x34,8);
    piVar1 = piVar1 + 0x52;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = &DAT_0056f440;
  for (iVar2 = 0x19a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

