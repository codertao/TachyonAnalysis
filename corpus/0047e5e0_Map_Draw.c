
/* sweep */

void Map_Draw(void)

{
  if (DAT_005a4b4c != 0) {
    ScreenZoom_DrawAll();
    return;
  }
  Ui_DrawAll(g_MapUiCtx);
  return;
}

