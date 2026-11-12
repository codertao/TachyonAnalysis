
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
    Ui_OpenWindow(&g_UiManager,s_WndSplash_00548334);
    MenuHotkey_SetEscape(Login_DismissSplash);
    MenuHotkey_SetAccept(Login_DismissSplash);
    TitleHover_Clear();
    Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
    Ui_ShowCursor();
    _DAT_00590ee0 = 3000;
    return;
  }
  Login_DismissSplash();
  return;
}

