
/* sweep */

void WeapGroup_Reset(int param_1)

{
  WeapSlot_ToggleLinked(&DAT_005b1f10 + (&DAT_005b20d4)[param_1] * 0xe);
  Snd_Play2D(1,10,0,0xff);
  return;
}

