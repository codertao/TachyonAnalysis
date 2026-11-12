
/* sweep */

void SbNews_Draw(void)

{
  undefined1 local_10 [16];
  
  if (g_TitleMenu_ExitFlag == 0) {
    if (DAT_005a4b4c != 0) {
      ScreenZoom_DrawAll();
      return;
    }
    Ui_DrawAll(&GLBL_UI_ELEM_LIST);
    Teletype_DrawAll();
    Ticker_Draw();
    Ticker_GetRect(local_10);
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseNews_00552c88,local_10,0);
    SbPak_Render(&GLBL_UI_ELEM_LIST,s_WndStarBaseNews_00552c88);
    SbNews_UpdateSliders();
  }
  return;
}

