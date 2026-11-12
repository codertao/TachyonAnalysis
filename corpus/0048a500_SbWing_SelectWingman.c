
/* sweep */

void SbWing_SelectWingman(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  SbWing_SetStatLabels(0);
  if ((param_1 < 0) || (5 < param_1)) goto LAB_0048a5b9;
  DAT_0056c488 = (&DAT_005589c8)[param_1 * 0x21];
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingFire_005596cc,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnWingFire_005596cc,0x80000);
  Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,0x80000);
  if (DAT_0056c488 == 0) {
LAB_0048a58f:
    uVar2 = 8;
  }
  else {
    uVar1 = Player_GetCredits();
    if (uVar1 <= *(uint *)(DAT_0056c488 + 0xa0)) goto LAB_0048a58f;
    uVar2 = 1;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,uVar2);
  WingStat_LoadAll(DAT_0056c488);
  SbWing_SetStatLabels(1);
LAB_0048a5b9:
  SbWing_DeselectHotspot();
  SbWing_RefreshHireButtons();
  return;
}

