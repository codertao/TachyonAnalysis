
/* sweep: guess */

void SbInventory_SetKeysEnabled(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = s_IAInvKey1_00550668;
  cVar2 = s_IAInvKey1_00550668[0];
  while (cVar2 != '\0') {
    pcVar1 = pcVar3 + 0x40;
    set_button_state(&GLBL_UI_ELEM_LIST,pcVar1,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,pcVar1,4);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,pcVar1,0x2000);
    ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,pcVar3,0);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar3,0x20000);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar3,0x80000);
    pcVar1 = pcVar3 + 0x84;
    pcVar3 = pcVar3 + 0x84;
    cVar2 = *pcVar1;
  }
  return;
}

