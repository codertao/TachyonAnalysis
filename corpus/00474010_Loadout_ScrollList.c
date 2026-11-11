
/* (delta) clamp scroll, refresh */

void Loadout_ScrollList(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00589744 + -4;
  if (DAT_00563614 == 0) {
    DAT_00577f00 = DAT_00577f00 + param_1;
    if ((iVar1 < 1) || (DAT_00577f00 < 0)) {
      DAT_00577f00 = 0;
    }
    else if (iVar1 < DAT_00577f00) {
      DAT_00577f00 = iVar1;
    }
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
    Loadout_RefreshInventoryList();
    return;
  }
  return;
}

