
/* sweep */

undefined4 WndLogin_Tick(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    if (DAT_005a3960 != 0) {
      WndLogin_RefreshButtons();
    }
    if (DAT_005a3964 != (code *)0x0) {
      (*DAT_005a3964)();
    }
    return 0;
  }
  return 1;
}

