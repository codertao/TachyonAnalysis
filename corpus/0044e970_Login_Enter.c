
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* show splash (splash.pcx/WndSplash) w/ 3000-frame timeout -> Login_DismissSplash */

void Login_Enter(void)

{
  int iVar1;
  
  g_TitleMenu_ExitFlag = 0;
  DAT_005a6620 = 1;
  iVar1 = Fs_Exists(s_splash_pcx_00548340);
  if ((iVar1 != 0) && (DAT_005a6620 == 0)) {
    Ui_BuildWindows(&g_UiManager);
    Ui_ShowWindow(&g_UiManager,s_WndSplash_00548334,0);
    FUN_0043a8d0(&g_UiManager,s_WndSplash_00548334);
    FUN_00437b30(Login_DismissSplash);
    FUN_00437b10(Login_DismissSplash);
    FUN_00445710();
    FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
    FUN_0043efa0();
    _DAT_00590ee0 = 3000;
    return;
  }
  Login_DismissSplash();
  return;
}

