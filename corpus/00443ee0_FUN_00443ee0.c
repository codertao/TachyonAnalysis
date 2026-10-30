
void FUN_00443ee0(void)

{
  g_TitleMenu_ExitFlag = 0;
  DAT_005a3964 = 0;
  DAT_005a3960 = 1;
  DAT_0054442c = 1;
  DAT_005635dc = 0;
  FUN_00440460(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  FUN_00437b30(FUN_004443d0);
  FUN_00437b10(Profile_StartGame);
  FUN_00437b40(&LAB_00444720);
  FUN_00437b50(&LAB_00444740);
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_00445710();
  FUN_0043efa0();
  Ui_ShowWindow(&g_UiManager,s_WndLogin_00541204,0);
  FUN_0043a8d0(&g_UiManager,s_WndLogin_00541204);
  FUN_00443d60();
  FUN_0043ce50(&g_UiManager,s_BtnLoginCopy_005411f4,1);
  FUN_0043c150(&g_UiManager,s_BtnLoginCopy_005411f4,0x80000);
  FUN_0043ce50(&g_UiManager,s_BtnLoginPaste_005411e4,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnLoginPaste_005411e4,0x80000);
  DAT_00541184 = 0xffffffff;
  g_CurrentProfileSlot = DAT_005b2c60;
  Login_SelectSlot(DAT_005b2c60);
  FUN_00444450();
  DAT_00562c10 = 0;
  FUN_0043a860(&g_UiManager,s_WndLoginDlg_005411d8,&LAB_004442b0);
  return;
}

