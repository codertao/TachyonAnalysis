
/* sweep */

undefined4 SbNews_Tick(void)

{
  int iVar1;
  
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&GLBL_UI_ELEM_LIST);
    Teletype_UpdateAll();
    SbNews_SelectHotspot();
    Ticker_Update();
    News_PlayHeadlineAudio();
    SbNews_RefreshJournalBtns();
    iVar1 = SbAudio_Stop();
    if (iVar1 == 0) {
      Starbase_SetMusicVar(0,0);
    }
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

