
void MpCfg_ClearItemInfo(void)

{
  Ui_SetLabelText(&g_UiManager,s_TxtCFGItemCost_0054780c,&DAT_00562b14);
  Ui_SetLabelText(&g_UiManager,s_TxtCFGItemLabel_005477fc,&DAT_00562b14);
  SbPak_SetActive(0,0);
  Teletype_ResetSlot(0);
  MpCfg_SetItemInfo(0);
  return;
}

