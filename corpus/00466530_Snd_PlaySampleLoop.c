
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Snd_PlaySampleLoop(undefined4 param_1)

{
  DAT_00563590 = 0;
  _DAT_005635a0 = 0;
  _DAT_0056358c = 0xffffffff;
  _DAT_0056359c = GLBL_spacesav[0x54];
  DAT_00563588 = Snd_ScaleVolume(DAT_00563588);
  _DAT_00563598 = Snd_IsMuted();
  SndTrig_PlayOrPost(param_1,&DAT_00563580,&DAT_005a61e0);
  return;
}

