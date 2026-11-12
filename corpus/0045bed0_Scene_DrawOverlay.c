
/* sweep */

void Scene_DrawOverlay(void)

{
  if (DAT_0058f1d4 != 0) {
    Hud_DrawLeadPip(DAT_0058f1d4 >> 0x10);
  }
  if (DAT_0058f1e0 != 0) {
    DAT_0058f1e8 = 1;
    DAT_0058f1e0 = 0;
  }
  if (DAT_0058f1c0 != 0) {
    Scene_DrawTexts(DAT_0058f1c0);
  }
  return;
}

