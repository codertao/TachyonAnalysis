
void Loadout_UpdateCreditsLabel(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_STAT_CREDITS_00550060);
  if (iVar1 == 0) {
    pcVar3 = s__Credits_00550054;
  }
  else {
    pcVar3 = *(char **)(iVar1 + 0x40);
  }
  uVar2 = Player_GetCredits();
  str_sprintf(&DAT_00577f20,s__s___d_005367b8,pcVar3,uVar2);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtCFGCreditLabel_00550040,&DAT_00577f20);
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0,0);
  return;
}

