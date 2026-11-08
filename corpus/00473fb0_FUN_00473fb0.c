
void FUN_00473fb0(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058974c + -4;
  if (DAT_00563614 == 0) {
    DAT_005720c0 = DAT_005720c0 + param_1;
    if ((iVar1 < 1) || (DAT_005720c0 < 0)) {
      DAT_005720c0 = 0;
    }
    else if (iVar1 < DAT_005720c0) {
      DAT_005720c0 = iVar1;
    }
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
    FUN_00473190();
    return;
  }
  return;
}

