
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* post-mix effect -> SndFx_None, default delay masks/levels */

void Snd_EffectReset(void)

{
  _DAT_004cecd0 = 0;
  _DAT_004ceccc = 0;
  DAT_004deda2 = 7;
  _DAT_004cecb4 = 0xfff;
  _DAT_004cecbc = 0x7ff;
  _DAT_004deda5 = 0x1f;
  _DAT_004cecb8 = 0xe00;
  _DAT_004cecc0 = 0x700;
  PTR_SndFx_None_004cecc4 = SndFx_None;
  DAT_004cecc8 = 0;
  return;
}

