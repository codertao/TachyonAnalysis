
/* sweep: guess */

void Quadrant_StartFadeIn(void)

{
  DAT_005b39ec = 1;
  Scene_SetFade(0xffffffff,0xa0000,&LAB_004557d0,1);
  Fade_StartDefault(0x3c,0);
  return;
}

