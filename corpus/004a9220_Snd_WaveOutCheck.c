
/* sweep: guess */

void Snd_WaveOutCheck(int param_1)

{
  if (DAT_005f9e00 != 0) {
    if (10 < param_1) {
      param_1 = 10;
    }
    DAT_005f9d54 = param_1 * 0x2274;
    DAT_005f9d80 = param_1 * 0x89d & 0x3fffffff;
  }
  return;
}

