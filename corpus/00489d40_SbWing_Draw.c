
/* sweep */

void SbWing_Draw(void)

{
  if (DAT_005a4b4c != 0) {
    ScreenZoom_DrawAll();
    return;
  }
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  SbWing_UpdateSliders();
  Teletype_DrawAll();
  SbPak_Render(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan_00559700);
  SbWing_DrawStatBars();
  return;
}

