
/* sweep */

void SbJobs_Draw(void)

{
  if (DAT_005a4b4c != 0) {
    ScreenZoom_DrawAll();
    return;
  }
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  SbJobs_UpdateSliders();
  Teletype_DrawAll();
  SbPak_Render(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobs_00552160);
  return;
}

