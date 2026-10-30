
void FUN_0044c4a0(void)

{
  FUN_0043ce50(&g_UiManager,s_BtnNWSkip_00547f64,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnNWSkip_00547f64,0x80000);
  FUN_0043ce50(&g_UiManager,s_BtnNWCont_00547f58,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnNWCont_00547f58,0x80000);
  FUN_0043e610(&g_UiManager,s_TxtMPNWPing1_00547f70,0x10000);
  FUN_0043e610(&g_UiManager,s_TxtMPNWPing2_00547f48,0x10000);
  FUN_0043e610(&g_UiManager,s_TxtMPNWExired_00547fa4,0x10000);
  DAT_00562cb8 = 0;
  DAT_00562ca4 = 0;
  FUN_0044e080();
  ibrowse_OpenURL(s_file___lstartup_htm_00547f90);
  return;
}

