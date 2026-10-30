
void FUN_00440ea0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (g_PlayerVarStore != 0) {
    FUN_0049c530(g_PlayerVarStore);
    g_PlayerVarStore = 0;
  }
  FUN_00444d80();
  iVar1 = FUN_00469a70(s_DefaultLight_0053ff6c);
  g_TitleMenu_ExitFlag = 0;
  FUN_00440460(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  FUN_00437b30(FUN_00441160);
  FUN_00437b10(FUN_00441160);
  FUN_00437b40(0);
  FUN_00437b50(0);
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_00445710();
  FUN_0043ed80();
  Ui_ShowWindow(&g_UiManager,s_WndCredits_0053ff40,0);
  FUN_0043a8d0(&g_UiManager,s_WndCredits_0053ff40);
  DAT_005a41d0 = Ui_FindWindowDef(&g_UiManager,s_WndCredits_0053ff40);
  puVar3 = &DAT_005a4120;
  for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_005a41c8 = FUN_0049df00(s_credits_bin_0053ff34,0xa000);
  FUN_004415c0(&g_UiManager,s_Tachycre_txt_0053ff24);
  DAT_005a41cc = DAT_005a41c0;
  FUN_00441190(&g_UiManager,DAT_005a41bc);
  FUN_0046db30(DAT_005a41b8,&DAT_005a41bc,&DAT_005a41c0,s_WndCredits_0053ff40);
  FUN_00440e50();
  FUN_004af2e0();
  FUN_004b1b70(DAT_005a6818,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
               *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  FUN_00441ab0(&g_UiManager);
  FUN_00437bd0(&LAB_00445030);
  FUN_00450770(&DAT_005b2b78,s_credits_0053ff1c);
  return;
}

