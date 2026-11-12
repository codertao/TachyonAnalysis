
/* sweep */

void Scene_FireCallback(void)

{
  if ((DAT_0058f1e8 != 0) && (DAT_0058f1e8 = 0, DAT_0058f1dc != (code *)0x0)) {
    (*DAT_0058f1dc)();
  }
  if (DAT_0058f1d8 == 0) {
    return;
  }
  if (DAT_0058f1d8 < 1) {
    DAT_0058f1d4 = DAT_0058f1d4 + DAT_0058f1d8;
    if (0 < DAT_0058f1d4) goto LAB_0045be2a;
    DAT_0058f1d4 = 0;
  }
  else {
    DAT_0058f1d4 = DAT_0058f1d4 + DAT_0058f1d8;
    if (DAT_0058f1d4 < 0xff0000) goto LAB_0045be2a;
    DAT_0058f1d4 = 0xff0000;
  }
  DAT_0058f1d8 = 0;
  DAT_0058f1e0 = 1;
LAB_0045be2a:
  if (DAT_0058f1e4 != 0) {
    Audio_SetMasterVolume(0xff - (DAT_0058f1d4 >> 0x10));
  }
  return;
}

