
/* sweep */

void SbJobsDone_Draw(void)

{
  if (DAT_005a4b4c != 0) {
    ScreenZoom_DrawAll();
    return;
  }
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  Teletype_DrawAll();
  SbPak_Render(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsComplete_0055227c);
  SbJobsDone_UpdateSliders();
  if (DAT_005635dc != 0) {
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsComplete_0055227c,0,0);
  }
  return;
}

