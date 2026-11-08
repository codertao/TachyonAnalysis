
void FUN_00441e40(void)

{
  int *piVar1;
  int iVar2;
  
  g_TitleMenu_ExitFlag = 0;
  FUN_00440460(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  FUN_00437b30(FUN_00442070);
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_00445710();
  Ui_ShowWindow(&g_UiManager,s_WndHostOpt_005409ec,0);
  FUN_0043a8d0(&g_UiManager,s_WndHostOpt_005409ec);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt0L_005409dc,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt0R_005409cc,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt1L_005409bc,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt1R_005409ac,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt2L_0054099c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt2R_0054098c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt3L_0054097c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt3R_0054096c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt4L_0054095c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt4R_0054094c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt5L_0054093c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt5R_0054092c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt6L_0054091c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt6R_0054090c,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt7L_005408fc,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostOpt7R_005408ec,0x100000);
  iVar2 = 0;
  piVar1 = &DAT_005400b0;
  do {
    if (*piVar1 == GLBL_spacesav[0x6e]) {
      DAT_00562bfc = iVar2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x5400c0);
  FUN_00442090();
  return;
}

