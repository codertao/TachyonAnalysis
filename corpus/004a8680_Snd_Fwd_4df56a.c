
/* sweep: guess */

void Snd_Fwd_4df56a(uint param_1)

{
  if (GLBL_audio_running != 0) {
    DAT_005f9d40 = param_1;
    if (0xff < param_1) {
      DAT_005f9d40 = 0xff;
    }
    SndAsm_MixSetup();
    return;
  }
  return;
}

