
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* pump input; countdown; else Ui_Update; exit on flag */

undefined4 Login_Update(void)

{
  MessagePump_IdleTick();
  _DAT_00590ee0 = _DAT_00590ee0 + -1;
  if (_DAT_00590ee0 == 0) {
    Login_DismissSplash();
  }
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    return 0;
  }
  return 1;
}

