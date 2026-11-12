
/* sweep */

void SbNews_SelectItem(int param_1)

{
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtNewsDescTitle_00552ca4,&DAT_00562b14);
  DAT_005636b4 = 0;
  if ((-1 < param_1) && (param_1 < DAT_00589734)) {
    DAT_005636b4 = (&DAT_00552950)[param_1 * 0x22];
    SbNews_ShowItem();
    return;
  }
  return;
}

