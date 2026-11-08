
void FUN_004744f0(void)

{
  int iVar1;
  uint uVar2;
  
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,8);
  FUN_0043c150(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,0x80000);
  if ((DAT_005635f8 != 0) && (iVar1 = *(int *)(DAT_005635f8 + 0x58), iVar1 != 0)) {
    uVar2 = FUN_004699a0();
    if (*(uint *)(iVar1 + 0x98) <= uVar2) {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,1);
    }
  }
  return;
}

