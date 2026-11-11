
void Loadout_UpdateSellBtn(void)

{
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,8);
  FUN_0043c150(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,0x80000);
  if (DAT_005635fc != 0) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,1);
  }
  return;
}

