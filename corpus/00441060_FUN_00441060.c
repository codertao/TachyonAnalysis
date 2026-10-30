
void FUN_00441060(void)

{
  FUN_0043ac90(&g_UiManager);
  if (DAT_00564ae4 != 0) {
    DAT_005a41b0 = 1;
  }
  FUN_00441b70(&g_UiManager,DAT_005a41d0);
  if (DAT_005a41cc != DAT_005a41c0) {
    FUN_00441190(&g_UiManager,DAT_005a41bc);
    DAT_005a41cc = DAT_005a41c0;
  }
  FUN_0046ded0(&g_UiManager,s_WndCredits_0053ff40);
  Ui_RefreshWindow(&g_UiManager,s_WndCredits_0053ff40,0,1);
  return;
}

