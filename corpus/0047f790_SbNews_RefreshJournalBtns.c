
/* sweep */

void SbNews_RefreshJournalBtns(void)

{
  if (DAT_005636b4 == 0) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnNewsAddJournal_00552d08,8);
    Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnNewsAddJournal_00552d08,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnNewsDelJournal_00552cf4,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnNewsDelJournal_00552cf4,0x80000);
  }
  return;
}

