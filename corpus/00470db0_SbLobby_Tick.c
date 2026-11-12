
/* sweep */

undefined4 SbLobby_Tick(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&GLBL_UI_ELEM_LIST);
    Ticker_Update();
    Teletype_UpdateAll();
    Nop();
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

