
/* sweep */

void SbHelp_SetFonts(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_BtnHelp_d_0054e78c,uVar1);
    Ui_SetLabelFont(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,param_1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return;
}

