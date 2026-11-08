
void FUN_004788b0(void)

{
  char *pcVar1;
  char *pcVar2;
  
  if (s_BtnJob0_00550b08[0] != '\0') {
    pcVar2 = s_IAJob0_00550b48;
    do {
      set_button_state(&GLBL_UI_ELEM_LIST,pcVar2 + -0x40,8);
      FUN_0043e6a0(&GLBL_UI_ELEM_LIST,pcVar2 + 0x40,&DAT_00562b14);
      FUN_0043e6a0(&GLBL_UI_ELEM_LIST,pcVar2 + 0xc0,&DAT_00562b14);
      set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar2,0x20000);
      FUN_0043f840(&GLBL_UI_ELEM_LIST,pcVar2,0x80000);
      pcVar1 = pcVar2 + 0x504;
      pcVar2 = pcVar2 + 0x544;
    } while (*pcVar1 != '\0');
  }
  return;
}

