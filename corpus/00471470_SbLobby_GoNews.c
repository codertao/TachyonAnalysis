
/* sweep */

void SbLobby_GoNews(void)

{
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageNewsBg_0054e998);
  g_StarbaseScreen = &PTR_SbNews_Enter_005528f8;
  g_TitleMenu_ExitFlag = 1;
  return;
}

