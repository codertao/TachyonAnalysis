
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: WndMPShipBW */

void MpShipBW_Enter(void)

{
  int iVar1;
  
  iVar1 = Starbase_FindLight(s_DefaultLight_0053ff6c);
  g_TitleMenu_ExitFlag = 0;
  _DAT_00562c60 = 0;
  DAT_005a3160 = load_rtxt_bin(s_shiptext_bin_00545c20,0xa100);
  if (g_PlayerVarStore == 0) {
    VarStore_Load(s_vars_cfg_005343c0,&DAT_005a60a0,&g_PlayerVarStore,0xa010,1);
  }
  Sw_EnableZBuffer(1);
  Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  Ui_ShowWindow(&g_UiManager,s_WndMPShipBW_00545c14,0);
  Ui_OpenWindow(&g_UiManager,s_WndMPShipBW_00545c14);
  MenuHotkey_SetEscape(MpShipCfg_GoLogin);
  MenuHotkey_SetAccept(MpShipBW_GoSystem);
  TitleHover_Clear();
  Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  MpShip_InitStatBars(&DAT_005444d0);
  MpShip_InitStatBars(&DAT_00545040);
  Races_Init();
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  Light_SetDirection(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                     *(undefined4 *)(iVar1 + 0x48));
  Ui_SetWindowHandler10c(&g_UiManager,s_WndMPShipBW_00545c14,&LAB_00445fb0);
  MpShipBW_ClearLists();
  MpShipBW_RefreshShipList1(0);
  MpShipBW_RefreshShipList2(0);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPBWSide1_00545bf4,4);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPBWSide2_00545bd4,4);
  MpShipBW_RefreshSides(DAT_005a6134);
  return;
}

