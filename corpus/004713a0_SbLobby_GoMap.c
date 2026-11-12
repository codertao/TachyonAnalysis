
/* sweep */

void SbLobby_GoMap(void)

{
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageMapBg_0054e97c);
  g_StarbaseScreen = &PTR_Map_Enter_005524c0;
  g_TitleMenu_ExitFlag = 1;
  return;
}

