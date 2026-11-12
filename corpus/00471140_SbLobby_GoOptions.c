
/* sweep */

void SbLobby_GoOptions(void)

{
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageOptionBg_0054e908);
  g_StarbaseScreen = &PTR_SbOptions_Enter_00552d58;
  g_TitleMenu_ExitFlag = 1;
  return;
}

