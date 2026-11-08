
void FUN_00477c80(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = DAT_00572024;
  pcVar5 = s_IAInvKey1_00550668;
  cVar2 = s_IAInvKey1_00550668[0];
  while (cVar2 != '\0') {
    set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,pcVar5,0x20000);
    set_button_state(&GLBL_UI_ELEM_LIST,pcVar5 + 0x40,8);
    pcVar1 = pcVar5 + 0x84;
    pcVar5 = pcVar5 + 0x84;
    cVar2 = *pcVar1;
  }
  pcVar5 = s_IAInvKey1_00550668;
  while ((iVar3 != 0 && (*pcVar5 != '\0'))) {
    if ((*(int *)(iVar3 + 0x80) != 0) &&
       ((*(int *)(iVar3 + 0x7c) != 0 && (*(int *)(iVar3 + 0x78) == 1)))) {
      FUN_0043f6e0(&GLBL_UI_ELEM_LIST,pcVar5,*(int *)(iVar3 + 0x7c));
      FUN_0043f840(&GLBL_UI_ELEM_LIST,pcVar5,0x20000);
      set_button_state(&GLBL_UI_ELEM_LIST,pcVar5 + 0x40,1);
      iVar4 = Ui_FindButton(&GLBL_UI_ELEM_LIST,pcVar5 + 0x40);
      if (iVar4 != 0) {
        FUN_0043f650(&GLBL_UI_ELEM_LIST,pcVar5,*(undefined4 *)(iVar4 + 0xd4),
                     *(undefined4 *)(iVar4 + 0xd8));
      }
      *(int *)(pcVar5 + 0x80) = iVar3;
      pcVar5 = pcVar5 + 0x84;
    }
    iVar3 = *(int *)(iVar3 + 0x88);
  }
  return;
}

