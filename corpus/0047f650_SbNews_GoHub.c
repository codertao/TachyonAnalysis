
/* sweep */

void SbNews_GoHub(void)

{
  MnuImage_Free(&GLBL_UI_ELEM_LIST,s_ImageNewsBg_0054e998);
  SbPak_SetActive(0,0);
  g_StarbaseScreen = &g_Mode_StarbaseHub;
  g_TitleMenu_ExitFlag = 1;
  return;
}

