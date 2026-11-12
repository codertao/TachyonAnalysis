
/* sweep */

void SbLobby_GoJobs(void)

{
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageJobBg_0054e944);
  g_StarbaseScreen = &PTR_SbJobs_Enter_00550ad8;
  g_TitleMenu_ExitFlag = 1;
  return;
}

