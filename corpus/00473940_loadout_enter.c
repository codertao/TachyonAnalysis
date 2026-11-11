
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loadout_enter(void)

{
  int iVar1;
  
  iVar1 = FUN_00469a70(s_DefaultLight_0053ff6c);
  _DAT_005833c0 = Ui_FindWindowDef(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8);
  g_TitleMenu_ExitFlag = 0;
  DAT_005635dc = 0;
  g_CfgMode = 1;
  DAT_005720c0 = 0;
  DAT_00577f00 = 0;
  DAT_005635f8 = 0;
  DAT_005635fc = 0;
  DAT_00563600 = 0;
  g_LoadoutDragItem = 0;
  g_LoadoutDragging = 0;
  DAT_00577f60 = 0;
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGItemQuery_00550024,0x10000);
  DAT_00563608 = find_ui_elem_by_id_(&GLBL_UI_ELEM_LIST,s_IACFGDrag_0054765c);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGDrag_0054765c,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGDrag_0054765c,0x80000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGCaution_00550014,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGCaution2_00550004,0x20000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGModeWP_00547790,0x2004);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGModeHW_00547780,0x2004);
  Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  FUN_0043ab40(&GLBL_UI_ELEM_LIST);
  FUN_00473860();
  FUN_004738d0();
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8);
  FUN_00437b30(cb_CFGLaunch);
  FUN_00437b10(cb_CFGLaunch);
  FUN_00445710();
  FUN_0043e8f0(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,&DAT_00577f60);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtCFGDragQty_0054764c,0x10000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,8);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGSell_00547774,0x80000);
  FUN_0043c150(&GLBL_UI_ELEM_LIST,s_BtnCFGPurchase_00547764,0x80000);
  FUN_0043f5d0(&GLBL_UI_ELEM_LIST,s_IACFGBtnHiLite_0054fff4,1);
  FUN_0043fce0(&GLBL_UI_ELEM_LIST,s_IACFGBtnHiLite_0054fff4,1,6);
  FUN_0043f810(&GLBL_UI_ELEM_LIST,s_IACFGBtnHiLite_0054fff4,1);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IACFGBtnHiLite_0054fff4,0x80000);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnItemBuy1_00547744,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnItemBuy2_00547738,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnItemBuy3_0054772c,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnItemBuy4_00547720,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnItemSell1_00547710,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnItemSell2_00547700,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnItemSell3_005476f0,s_SNDEVNT_ITEM_ROLL_00547750);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnItemSell4_005476e0,s_SNDEVNT_ITEM_ROLL_00547750);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGModeWP_00547790,0x2004);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnCFGModeHW_00547780,0x2004);
  Loadout_SetMode(0);
  Loadout_UpdateCreditsLabel();
  Loadout_SelectItem(0,0);
  FUN_00468f50(g_NextMode);
  Shipyard_SelectShip(0);
  FUN_004718e0();
  WeaponDefs_DeriveStats();
  FUN_00471630(0);
  FUN_0043a820(&GLBL_UI_ELEM_LIST,s_WndStarBaseCFG_0054ffc8,&LAB_00473dd0);
  FUN_004af2e0();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  Sw_EnableZBuffer(1);
  FUN_00477340();
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnItemBuy1_00547744,4);
  return;
}

