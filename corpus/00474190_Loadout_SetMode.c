
/* switch weapons/hardware tab (g_CfgMode), rebuild lists */

void Loadout_SetMode(int param_1)

{
  if (g_CfgMode != param_1) {
    g_CfgMode = param_1;
    if (param_1 < 0) {
      g_CfgMode = 1;
    }
    else if (1 < param_1) {
      g_CfgMode = 0;
    }
    Loadout_DisableBuySell();
    Loadout_RefreshMountSlot();
    Cfg_ClearScratch();
    Loadout_ResetMountHighlights();
    if (g_CfgMode == 0) {
      DAT_0054f884 = g_CfgMode;
      DAT_0054f888 = 1;
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGModeWP_00547790,4);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGModeHW_00547780,1);
      Loadout_RefreshWeaponMounts();
      Loadout_LoadMountLines();
    }
    else if (g_CfgMode == 1) {
      DAT_0054f884 = g_CfgMode;
      DAT_0054f888 = 0;
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGModeHW_00547780,4);
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGModeWP_00547790,1);
      Loadout_RefreshHwSlots();
    }
    Loadout_RefreshInventoryList();
    Loadout_RefreshStoreList();
    return;
  }
  return;
}

