
/* sweep */

void SbLobby_GoStats(void)

{
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageStatsBg_0054e9b4);
  g_StarbaseScreen = &PTR_SbStats_Enter_005581f0;
  g_TitleMenu_ExitFlag = 1;
  return;
}

