
/* sweep */

void MpCfg_Draw(void)

{
  Ui_DrawAll(&g_UiManager);
  MpCfg_UpdateSliders();
  MountLine_Draw(s_WndMPShipDM_0054767c);
  MpCfg_DrawItemBars();
  MpShip_DrawStatBars(&DAT_00546c38);
  Ui_RefreshWindow(&g_UiManager,s_WndMPShipDM_0054767c,0,0);
  return;
}

