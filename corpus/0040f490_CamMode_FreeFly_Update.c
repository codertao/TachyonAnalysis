
/* sweep */

void CamMode_FreeFly_Update(void)

{
  Cursor_WarpAndFlush();
  DAT_0058f1f8 = DAT_0058f1f8 + DAT_00603e4c * 0x1000;
  DAT_0058f1fc = DAT_0058f1fc + DAT_00603e50 * -0x1000;
  DAT_005b9600 = DAT_0058f1ec;
  DAT_005b9604 = DAT_0058f1f0;
  DAT_005b95e8 = DAT_0058f1f8;
  DAT_005b9608 = DAT_0058f1f4;
  DAT_005b95ec = DAT_0058f1fc;
  DAT_005b95f0 = DAT_0058f200;
  return;
}

