
/* sweep: guess */

longlong __fastcall Snd_Fwd_4df05c(undefined4 param_1,uint param_2)

{
  if (GLBL_audio_running != 0) {
    SndAsm_StartVoice();
  }
  return (ulonglong)param_2 << 0x20;
}

