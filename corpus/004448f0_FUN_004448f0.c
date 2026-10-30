
void FUN_004448f0(void)

{
  DAT_00541188 = 0xffffffff;
  FUN_0043a990(&g_UiManager,s_WndLoginDlg_005411d8);
  Ui_ShowWindow(&g_UiManager,s_WndLogin_00541204,0);
  FUN_0043a8d0(&g_UiManager,s_WndLogin_00541204);
  DAT_00562c10 = 0;
  FUN_00437b30(FUN_004443d0);
  FUN_00437b10(Profile_StartGame);
  FUN_00437b40(&LAB_00444720);
  FUN_00437b50(&LAB_00444740);
  return;
}

