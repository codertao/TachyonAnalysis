
/* sweep */

void SbOptions_Draw(void)

{
  if ((g_MpModeFlag != 0) && (DAT_005a4b4c != 0)) {
    ScreenZoom_DrawAll();
    return;
  }
  Ui_DrawAll(DAT_00571280);
  Options_DrawVoiceMeter();
  if (DAT_00563d74 == &DAT_00555a08) {
    Options_UpdateSliders();
    return;
  }
  if (DAT_00563d74 == &DAT_00556368) {
    if (DAT_00564ae4 == 0) {
      Sw_ClearZBuffer();
    }
    Options_RenderShipPreview();
    return;
  }
  return;
}

