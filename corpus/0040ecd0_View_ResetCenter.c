
/* sweep */

void View_ResetCenter(void)

{
  DAT_005a67d4 = DAT_005a67b0 + DAT_005a67b8 >> 1;
  DAT_005a67d8 = DAT_005a67b4 + DAT_005a67bc >> 1;
  DAT_005a67dc = DAT_005a67c0 + DAT_005a67c8 >> 1;
  DAT_005a67e0 = DAT_005a67c4 + DAT_005a67cc >> 1;
  Hud_SetOffset(0,0);
  return;
}

