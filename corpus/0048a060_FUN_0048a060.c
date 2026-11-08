
void FUN_0048a060(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = s_BtnWing0_00558948;
  cVar2 = s_BtnWing0_00558948[0];
  while (cVar2 != '\0') {
    set_button_state(&GLBL_UI_ELEM_LIST,pcVar3,8);
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar3 + 0x40,0x20000);
    FUN_0043f840(&GLBL_UI_ELEM_LIST,pcVar3 + 0x40,0x80000);
    pcVar1 = pcVar3 + 0x84;
    pcVar3 = pcVar3 + 0x84;
    cVar2 = *pcVar1;
  }
  return;
}

