
/* blank TxtCFGItemLabel/Cost, stop preview */

void Loadout_ClearItemInfo(void)

{
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtCFGItemCost_0054780c,&DAT_00562b14);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtCFGItemLabel_005477fc,&DAT_00562b14);
  SbPak_SetActive(0,0);
  Teletype_ResetSlot(0);
  Loadout_SetItemInfo(0);
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
  return;
}

