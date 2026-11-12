
/* sweep: guess */

void ShipBuy_ResetHover(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_0056f584;
  iVar2 = 5;
  do {
    *puVar1 = 1;
    puVar1 = puVar1 + 0x52;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipBuy_00557938,0,0);
  return;
}

