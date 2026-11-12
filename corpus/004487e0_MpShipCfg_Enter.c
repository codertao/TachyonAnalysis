
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mode enter for the MP deathmatch ship config screen (vars.cfg, IACFGDrag) */

void MpShipCfg_Enter(void)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 4;
  local_c = 0xe8;
  local_8 = 0x8e;
  local_4 = 0x15e;
  iVar1 = Starbase_FindLight(s_DefaultLight_0053ff6c);
  g_TitleMenu_ExitFlag = 0;
  _DAT_00562c60 = 1;
  g_CfgMode = 1;
  DAT_00592fc8 = 0;
  DAT_00562c64 = 0;
  DAT_00562c68 = 0;
  DAT_00562c6c = 0;
  DAT_00562c70 = 0;
  DAT_00562c74 = 0;
  DAT_00598590 = 0;
  if (g_PlayerVarStore == 0) {
    VarStore_Load(s_vars_cfg_005343c0,&DAT_005a60a0,&g_PlayerVarStore,0xa010,1);
  }
  Sw_EnableZBuffer(1);
  DAT_00562c78 = find_ui_elem_by_id_(&g_UiManager,s_IACFGDrag_0054765c);
  set_flag_10c_on_elem_by_id(&g_UiManager,s_IACFGDrag_0054765c,0x20000);
  set_flag_10c_on_elem_by_id(&g_UiManager,s_IACFGDrag_0054765c,0x80000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGModeWP_00547790,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGModeHW_00547780,0x2004);
  Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  MpCfg_InitStoreItems();
  MpCfg_LoadPlayerHardware();
  Ui_ShowWindow(&g_UiManager,s_WndMPShipDM_0054767c,0);
  Ui_OpenWindow(&g_UiManager,s_WndMPShipDM_0054767c);
  MenuHotkey_SetEscape(MpShipCfg_GoLogin);
  MenuHotkey_SetAccept(MpShipCfg_GoLogin);
  TitleHover_Clear();
  Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  Ui_SetLabelText(&g_UiManager,s_TxtCFGDragQty_0054764c,&DAT_00598590);
  sbi_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  set_button_state(&g_UiManager,s_BtnCFGSell_00547774,8);
  set_button_state(&g_UiManager,s_BtnCFGPurchase_00547764,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGSell_00547774,0x80000);
  Ui_ClearButtonFlags(&g_UiManager,s_BtnCFGPurchase_00547764,0x80000);
  Ui_SetButtonText(&g_UiManager,s_BtnItemBuy1_00547744,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonText(&g_UiManager,s_BtnItemBuy2_00547738,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonText(&g_UiManager,s_BtnItemBuy3_0054772c,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonText(&g_UiManager,s_BtnItemBuy4_00547720,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonText(&g_UiManager,s_BtnItemSell1_00547710,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonText(&g_UiManager,s_BtnItemSell2_00547700,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonText(&g_UiManager,s_BtnItemSell3_005476f0,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonText(&g_UiManager,s_BtnItemSell4_005476e0,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGModeWP_00547790,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGModeHW_00547780,0x2004);
  set_button_state(&g_UiManager,s_BtnOption0_005476d4,4);
  MpCfg_SetMode(0);
  MpCfg_SelectItem(0,0);
  MpCfg_LoadCurrentShip(0);
  MpCfg_InitItemBars();
  MpShip_InitStatBars(&DAT_00546c38);
  WeaponDefs_DeriveStats();
  MpCfg_SetItemInfo(0);
  Ui_SetWindowHandler10c(&g_UiManager,s_WndMPShipDM_0054767c,&LAB_00448c10);
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  Light_SetDirection(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                     *(undefined4 *)(iVar1 + 0x48));
  MpCfg_InitSliders();
  SbPak_UpdateTransform(&local_10);
  return;
}

