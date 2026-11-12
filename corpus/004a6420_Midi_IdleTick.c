
/* sweep */

void Midi_IdleTick(void)

{
  if (DAT_00564894 != 0) {
    if (((*(int *)(DAT_00564894 + 0x10) == 4) && (DAT_005648c4 != 0)) &&
       (0x960 < (uint)(DAT_006039f0 - DAT_005648b8))) {
      Midi_Stop();
      Midi_Play();
    }
    if (DAT_005648c8 != 0) {
      DAT_005648c8 = 0;
    }
  }
  return;
}

