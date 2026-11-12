
void MpCfg_SetMode(int param_1)

{
  if (g_CfgMode != param_1) {
    g_CfgMode = param_1;
    if (param_1 < 0) {
      g_CfgMode = 0;
    }
    else if (1 < param_1) {
      g_CfgMode = 1;
    }
    MpCfg_HideStoreUi();
    MpCfg_RefreshMountSlot();
    Cfg_ClearScratch();
    MpCfg_ResetMountHighlights();
    if (g_CfgMode == 0) {
      DAT_00546620 = g_CfgMode;
      DAT_00546624 = 1;
      set_button_state(&g_UiManager,s_BtnCFGModeWP_00547790,4);
      set_button_state(&g_UiManager,s_BtnCFGModeHW_00547780,1);
      MpCfg_RefreshWeaponMounts();
      MpCfg_LoadMountLines();
    }
    else if (g_CfgMode == 1) {
      DAT_00546620 = g_CfgMode;
      DAT_00546624 = 0;
      set_button_state(&g_UiManager,s_BtnCFGModeHW_00547780,4);
      set_button_state(&g_UiManager,s_BtnCFGModeWP_00547790,1);
      MpCfg_RefreshHwSlots();
    }
    MpCfg_RefreshInventoryList();
    return;
  }
  return;
}

