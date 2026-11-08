
void FUN_004862a0(void)

{
  FUN_004850b0();
  FUN_00440460(&GLBL_UI_ELEM_LIST,s_SNDEVNT_CHANGE_SHIPS_00557b3c);
  if (*(int *)(DAT_0056e3a8 + 0xd0) != 0) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnShipYardConfig_00557a94,1);
    return;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnShipYardConfig_00557a94,8);
  return;
}

