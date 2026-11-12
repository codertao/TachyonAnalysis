
/* sweep */

void Map_GoHub(void)

{
  MnuImage_Free(g_MapUiCtx,s_ImageMapBg_0054e97c);
  g_StarbaseScreen = &g_Mode_StarbaseHub;
  g_TitleMenu_ExitFlag = 1;
  return;
}

