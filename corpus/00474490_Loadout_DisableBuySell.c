
void Loadout_DisableBuySell(void)

{
  Loadout_ClearItemInfo();
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,0x80000);
  return;
}

