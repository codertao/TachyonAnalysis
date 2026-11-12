
/* sweep */

void SbStats_Draw(void)

{
  if (DAT_005a4b4c != 0) {
    ScreenZoom_DrawAll();
    return;
  }
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  if ((DAT_0056c520 == 0) && (DAT_0056c490 == 0)) {
    Teletype_DrawAll();
    if (DAT_00564ae4 == 0) {
      Sw_ClearZBuffer();
    }
    SbStats_RenderShip();
    return;
  }
  return;
}

