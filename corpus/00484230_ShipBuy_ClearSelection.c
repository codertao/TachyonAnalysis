
/* sweep */

void ShipBuy_ClearSelection(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  DAT_0056f3e4 = 0;
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPConfig_00557974,8);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSPSell_00557968,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSPPurchase_00557958,8);
  Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnSPPurchase_00557958,0x80000);
  puVar1 = &DAT_0056f464;
  iVar2 = 5;
  do {
    if (puVar1[-0x20] == '\0') {
      uVar3 = 8;
    }
    else {
      uVar3 = 1;
    }
    set_button_state(&GLBL_UI_ELEM_LIST,puVar1,uVar3);
    puVar1 = puVar1 + 0x148;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IALineArt_0055794c,0x20000);
  ShipBuy_ClearCallouts();
  ShipBuy_SetStatLabels(0);
  return;
}

