
/* sweep */

void Shipyard_Draw(void)

{
  Gfx_Lock(1);
  Shipyard_Render3D();
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  if (DAT_005a4b4c != 0) {
    ScreenZoom_DrawAll();
  }
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipYard_00557b04,0,0);
  return;
}

