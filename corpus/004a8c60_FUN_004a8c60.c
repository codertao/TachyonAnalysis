
longlong __fastcall FUN_004a8c60(undefined4 param_1,uint param_2)

{
  if (GLBL_audio_running != 0) {
    Snd_SetEffect();
  }
  return (ulonglong)param_2 << 0x20;
}

