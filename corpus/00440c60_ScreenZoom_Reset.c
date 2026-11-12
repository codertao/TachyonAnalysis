
/* sweep */

void ScreenZoom_Reset(void)

{
  ScreenZoom_FreeAll();
  DAT_005a4b48 = 0;
  DAT_005a4b4c = 0;
  return;
}

