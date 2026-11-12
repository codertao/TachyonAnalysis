
/* sweep */

void Credits_Draw(void)

{
  Ui_DrawAll(&g_UiManager);
  if (DAT_00564ae4 != 0) {
    DAT_005a41b0 = 1;
  }
  Credits_DrawScroll(&g_UiManager,DAT_005a41d0);
  if (DAT_005a41cc != DAT_005a41c0) {
    Credits_ShowBlockImage(&g_UiManager,DAT_005a41bc);
    DAT_005a41cc = DAT_005a41c0;
  }
  SbPak_Render(&g_UiManager,s_WndCredits_0053ff40);
  Ui_RefreshWindow(&g_UiManager,s_WndCredits_0053ff40,0,1);
  return;
}

