
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004487e0(void)

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
  iVar1 = FUN_00469a70(s_DefaultLight_0053ff6c);
  g_TitleMenu_ExitFlag = 0;
  _DAT_00562c60 = 1;
  DAT_00598580 = 1;
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
  FUN_004e4b65(1);
  DAT_00562c78 = find_ui_elem_by_id_(&g_UiManager,s_IACFGDrag_0054765c);
  set_flag_10c_on_elem_by_id(&g_UiManager,s_IACFGDrag_0054765c,0x20000);
  set_flag_10c_on_elem_by_id(&g_UiManager,s_IACFGDrag_0054765c,0x80000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGModeWP_00547790,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGModeHW_00547780,0x2004);
  FUN_00440460(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  FUN_004486f0();
  FUN_00448770();
  Ui_ShowWindow(&g_UiManager,s_WndMPShipDM_0054767c,0);
  FUN_0043a8d0(&g_UiManager,s_WndMPShipDM_0054767c);
  FUN_00437b30(FUN_00448de0);
  FUN_00437b10(FUN_00448de0);
  FUN_00445710();
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_0043e6a0(&g_UiManager,s_TxtCFGDragQty_0054764c,&DAT_00598590);
  sbi_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  set_button_state(&g_UiManager,s_BtnCFGSell_00547774,8);
  set_button_state(&g_UiManager,s_BtnCFGPurchase_00547764,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGSell_00547774,0x80000);
  FUN_0043c150(&g_UiManager,s_BtnCFGPurchase_00547764,0x80000);
  FUN_0043cac0(&g_UiManager,s_BtnItemBuy1_00547744,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&g_UiManager,s_BtnItemBuy2_00547738,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&g_UiManager,s_BtnItemBuy3_0054772c,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&g_UiManager,s_BtnItemBuy4_00547720,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&g_UiManager,s_BtnItemSell1_00547710,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&g_UiManager,s_BtnItemSell2_00547700,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&g_UiManager,s_BtnItemSell3_005476f0,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&g_UiManager,s_BtnItemSell4_005476e0,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGModeWP_00547790,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnCFGModeHW_00547780,0x2004);
  set_button_state(&g_UiManager,s_BtnOption0_005476d4,4);
  FUN_00448f10(0);
  FUN_004491e0(0,0);
  FUN_004493d0(0);
  FUN_00447070();
  FUN_00446ac0(&DAT_00546c38);
  WeaponDefs_DeriveStats();
  FUN_00446dc0(0);
  FUN_0043a820(&g_UiManager,s_WndMPShipDM_0054767c,&LAB_00448c10);
  FUN_004af2e0();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  FUN_0044ab10();
  FUN_0046e060(&local_10);
  return;
}

