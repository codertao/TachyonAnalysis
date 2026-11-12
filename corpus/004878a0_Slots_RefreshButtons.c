
/* sweep */

void Slots_RefreshButtons(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) || (DAT_0056dff0 != 0)) {
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotSpinMax_005580e0);
    if (iVar1 == 8) {
      return;
    }
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotSpin_005580c4,8);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotSpinMax_005580e0,8);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotPlay_005580b8,8);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayUp_005580f0,8);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayDn_005580d0,8);
    return;
  }
  if (DAT_0056e000 == 300) {
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayUp_005580f0);
    if (iVar1 != 8) {
      uVar2 = 8;
LAB_004878ef:
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayUp_005580f0,uVar2);
    }
  }
  else {
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayUp_005580f0);
    if (iVar1 == 8) {
      uVar2 = 1;
      goto LAB_004878ef;
    }
  }
  iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotSpinMax_005580e0);
  if (iVar1 == 8) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotSpinMax_005580e0,1);
  }
  if (DAT_0056e000 == 0) {
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayDn_005580d0);
    if (iVar1 != 8) {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayDn_005580d0,8);
    }
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotSpin_005580c4);
    if (iVar1 == 1) {
      uVar2 = 8;
LAB_004879b5:
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotSpin_005580c4,uVar2);
    }
  }
  else {
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayDn_005580d0);
    if (iVar1 == 8) {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotPlayDn_005580d0,1);
    }
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotSpin_005580c4);
    if (iVar1 == 8) {
      uVar2 = 1;
      goto LAB_004879b5;
    }
  }
  if (DAT_0056e000 < 300) {
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotPlay_005580b8);
    if (iVar1 != 8) goto LAB_00487a0f;
    uVar2 = 1;
  }
  else {
    iVar1 = Ui_GetButtonState(&GLBL_UI_ELEM_LIST,s_BtnSlotPlay_005580b8);
    if (iVar1 != 1) goto LAB_00487a0f;
    uVar2 = 8;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnSlotPlay_005580b8,uVar2);
LAB_00487a0f:
  if (DAT_00603b47 != '\0') {
    Slots_PlaceBet(1);
    return;
  }
  if (DAT_00603b45 == '\0') {
    if (((DAT_00603b48 == '\0') && (DAT_00603b2d == '\0')) && (DAT_00603a2d == '\0')) {
      return;
    }
    Slots_Spin();
    return;
  }
  Slots_PlaceBet(0xffffffff);
  return;
}

