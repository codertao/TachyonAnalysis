
/* pump messages; tick menu + update window; loop-flag g_TitleMenu_ExitFlag */

undefined4 TitleMenu_Update(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Nop();
    Ui_Update(&g_UiManager);
    return 0;
  }
  return 1;
}

