
/* sweep */

void Camera_Reset(void)

{
  clr_bytes(&DAT_005b95e0,0xdc);
  Camera_SetDefaultMode();
  DAT_005b9644 = 0xa0000;
  DAT_005b9654 = 0;
  DAT_005b9658 = 0xfff00000;
  DAT_005b9640 = 0xa0000;
  DAT_005b9648 = 0;
  DAT_005b964c = 0xfff00000;
  DAT_005b96b4 = 0;
  return;
}

