
void FUN_00477a70(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = s_IAInv1_005502c8;
  cVar2 = s_IAInv1_005502c8[0];
  while (cVar2 != '\0') {
    pcVar1 = pcVar3 + 0x40;
    set_button_state(&GLBL_UI_ELEM_LIST,pcVar1,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,pcVar1,4);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,pcVar1,0x2000);
    FUN_0043f810(&GLBL_UI_ELEM_LIST,pcVar3,0);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar3,0x20000);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar3,0x80000);
    pcVar1 = pcVar3 + 0x84;
    pcVar3 = pcVar3 + 0x84;
    cVar2 = *pcVar1;
  }
  return;
}

