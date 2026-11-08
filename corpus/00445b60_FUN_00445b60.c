
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445b60(void)

{
  int iVar1;
  
  iVar1 = FUN_00469a70(s_DefaultLight_0053ff6c);
  g_TitleMenu_ExitFlag = 0;
  _DAT_00562c60 = 0;
  DAT_005a3160 = load_rtxt_bin(s_shiptext_bin_00545c20,0xa100);
  if (g_PlayerVarStore == 0) {
    VarStore_Load(s_vars_cfg_005343c0,&DAT_005a60a0,&g_PlayerVarStore,0xa010,1);
  }
  FUN_004e4b65(1);
  FUN_00440460(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  Ui_ShowWindow(&g_UiManager,s_WndMPShipBW_00545c14,0);
  FUN_0043a8d0(&g_UiManager,s_WndMPShipBW_00545c14);
  FUN_00437b30(FUN_00448de0);
  FUN_00437b10(FUN_00445ce0);
  FUN_00445710();
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_00446ac0(&DAT_005444d0);
  FUN_00446ac0(&DAT_00545040);
  FUN_00458200();
  FUN_004af2e0();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  FUN_0043a820(&g_UiManager,s_WndMPShipBW_00545c14,&LAB_00445fb0);
  FUN_00445ae0();
  FUN_00445d40(0);
  FUN_00445e60(0);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPBWSide1_00545bf4,4);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPBWSide2_00545bd4,4);
  FUN_00445920(DAT_005a6134);
  return;
}

