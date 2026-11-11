
void MpCfg_ScrollList(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_00589744 + -5;
  DAT_00592fc8 = DAT_00592fc8 + param_1;
  if ((iVar1 < 1) || (DAT_00592fc8 < 0)) {
    DAT_00592fc8 = 0;
  }
  else if (iVar1 < DAT_00592fc8) {
    DAT_00592fc8 = iVar1;
  }
  Ui_RefreshWindow(&g_UiManager,s_WndMPShipDM_0054767c,0,0);
  MpCfg_RefreshInventoryList();
  return;
}

