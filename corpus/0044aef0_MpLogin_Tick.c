
/* sweep */

undefined4 MpLogin_Tick(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    if (DAT_00592e64 != 0) {
      MpLogin_RefreshButtons();
    }
    return 0;
  }
  return 1;
}

