
void FUN_00483d70(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00469a70(s_DefaultLight_0053ff6c);
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  g_TitleMenu_ExitFlag = 0;
  FUN_0043ab40(&GLBL_UI_ELEM_LIST);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipBuy_00557938);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipBuy_00557938,0);
  FUN_0043e8f0(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  FUN_00437b30(cb_SPLaunch);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSPCreditLabel_00557924,0x40000);
  uVar2 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_TxtSPCallout_d_0055785c,uVar2);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x40000);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGSpeed_0055780c,0x40000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGAccel_005577c0,0x40000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGAgility_005577d0,0x40000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGHull_00557800,0x40000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGShield_005577f0,0x40000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtSCFGEnergy_005577e0,0x40000);
  DAT_00563d7c = 0;
  Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_PLAYER_SIDE_0053f968,&DAT_00563d7c);
  DAT_0056363c = load_rtxt_bin(s_shiptext_bin_00545c20,0xa103);
  FUN_004af2e0();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  FUN_004b1940(&local_c,&local_18);
  FUN_004839b0();
  FUN_004835c0();
  Sw_EnableZBuffer(1);
  FUN_00482d00();
  FUN_00482a00(0);
  Cfg_ClearScratch();
  FUN_00484230();
  FUN_004845f0();
  FUN_00484a40();
  FUN_00484ca0();
  return;
}

