
void FUN_00443c30(void)

{
  g_TitleMenu_ExitFlag = 0;
  FUN_0043ed80();
  FUN_00445710();
  thunk_FUN_004b5550();
  FUN_0049e8b0();
  FUN_00437bd0(0);
  Ui_BuildWindows(&g_UiManager);
  Ui_ShowWindow(&g_UiManager,s_WndLoading_0054114c,0);
  FUN_0043a8d0(&g_UiManager,s_WndLoading_0054114c);
  return;
}

