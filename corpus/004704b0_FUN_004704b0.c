
void FUN_004704b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_0043a7a0(&GLBL_UI_ELEM_LIST,param_1);
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      str_sprintf(&DAT_005a41e0,s_BtnHelp_d_0054e78c,uVar3);
      iVar2 = Ui_FindButton(&GLBL_UI_ELEM_LIST,&DAT_005a41e0);
      if (iVar2 != 0) {
        FUN_0043ccb0(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,
                     (*(int *)(iVar1 + 0x166c) - *(int *)(iVar2 + 200)) + -10,
                     *(undefined4 *)(iVar2 + 0xd8));
      }
      clr_label_flags_11c(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x80);
      sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x100);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
  }
  return;
}

