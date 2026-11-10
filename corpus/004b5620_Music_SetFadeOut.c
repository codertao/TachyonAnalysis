
/* master fade speed (Hyper_Enter: 0x20) */

void Music_SetFadeOut(int param_1)

{
  DAT_006af52c = param_1 * 0x10000;
  if (DAT_006af52c < 0) {
    DAT_006af52c = 0;
    return;
  }
  if (0xff0000 < DAT_006af52c) {
    DAT_006af52c = 0xff0000;
  }
  return;
}

