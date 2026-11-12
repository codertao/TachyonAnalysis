
/* sweep */

void SbWing_RefreshHireButtons(void)

{
  int iVar1;
  
  if (DAT_0056c488 != 0) {
    iVar1 = Wingman_GetCurrent();
    if (DAT_0056c488 == iVar1) {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,8);
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,0x80000);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingFire_005596cc,1);
      Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnWingFire_005596cc,0x80000);
    }
  }
  SbWing_ShowDetails();
  SbWing_RefreshSlots();
  return;
}

