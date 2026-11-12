
/* sweep: guess, vtable +0x0c */

void Audio_SetMasterVolume(undefined4 param_1)

{
  if (GLBL_audio_running != 0) {
    (**(code **)(PTR_PTR_0055deac + 0xc))(param_1);
  }
  return;
}

