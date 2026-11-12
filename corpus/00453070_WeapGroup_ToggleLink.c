
/* sweep */

void WeapGroup_ToggleLink(void)

{
  DAT_005b20dc = (uint)(DAT_005b20dc == 0);
  Snd_Play2D(1,10,0,0xff);
  return;
}

