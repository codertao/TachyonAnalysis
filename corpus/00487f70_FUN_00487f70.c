
void FUN_00487f70(int param_1)

{
  if (param_1 == 0) {
    FUN_0043a990(&GLBL_UI_ELEM_LIST,s_WndStarBaseSlotsOdds_00558174);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotOddsDn_00558158,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSlotOddsDn_00558158,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotOdds_00558168,1);
    FUN_0043c150(&GLBL_UI_ELEM_LIST,s_BtnSlotOdds_00558168,0x80000);
  }
  else {
    FUN_0043a8d0();
    Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseSlotsOdds_00558174,0);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotOdds_00558168,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSlotOdds_00558168,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotOddsDn_00558158,1);
    FUN_0043c150(&GLBL_UI_ELEM_LIST,s_BtnSlotOddsDn_00558158,0x80000);
  }
  DAT_0056dff0 = (uint)(param_1 != 0);
  FUN_0049da00(s_PLAYER_CHECKS_ODDS_00558144,&DAT_005833e0,&DAT_00583498);
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseSlots_0055811c,0,0);
  return;
}

