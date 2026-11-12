
/* sweep: WndLoading */

void Loading_Enter(void)

{
  g_TitleMenu_ExitFlag = 0;
  Ui_HideCursor();
  TitleHover_Clear();
  Music_Close();
  Audio_StopAllSamples();
  Menu_SetVar4b38(0);
  Ui_BuildWindows(&g_UiManager);
  Ui_ShowWindow(&g_UiManager,s_WndLoading_0054114c,0);
  Ui_OpenWindow(&g_UiManager,s_WndLoading_0054114c);
  return;
}

