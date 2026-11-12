
/* sweep: guess */

void Loadout_OnBuyBtn(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = Teletype_GetScroll(0);
  if (iVar1 != 0) {
    Teletype_GetScrollRange(0,param_1);
    Teletype_SetRect(0,0,0,0,&local_14);
    puVar2 = (undefined4 *)Teletype_GetRect(0);
    local_10 = *puVar2;
    local_8 = puVar2[2];
    local_4 = puVar2[3] + local_14;
    local_c = puVar2[1] - local_14;
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,&local_10,0);
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,&DAT_0054fec4,0);
  }
  return;
}

