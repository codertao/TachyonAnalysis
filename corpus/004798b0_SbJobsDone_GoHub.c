
/* sweep */

void SbJobsDone_GoHub(void)

{
  SbAudio_StopAll();
  g_StarbaseScreen = &g_Mode_StarbaseHub;
  g_TitleMenu_ExitFlag = 1;
  return;
}

