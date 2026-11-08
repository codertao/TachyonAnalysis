
void FUN_0047f790(void)

{
  if (DAT_005636b4 == 0) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnNewsAddJournal_00552d08,8);
    FUN_0043c150(&GLBL_UI_ELEM_LIST,s_BtnNewsAddJournal_00552d08,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnNewsDelJournal_00552cf4,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnNewsDelJournal_00552cf4,0x80000);
  }
  return;
}

