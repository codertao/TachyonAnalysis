
/* sweep */

void SbNews_Exit(void)

{
  g_NextMode = g_StarbaseScreen;
  SbNews_ClearButtons();
  Ticker_Free();
  Sw_EnableZBuffer(0);
  Teletype_ResetSlot(0);
  News_FreeHeadlines();
  SbPak_SetActive(0,0);
  SbAudio_StopAll();
  return;
}

