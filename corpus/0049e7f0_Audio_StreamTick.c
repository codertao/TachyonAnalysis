
/* sweep: vtable +0x10 */

void Audio_StreamTick(undefined4 param_1)

{
  if (GLBL_audio_running != 0) {
    (**(code **)(PTR_PTR_0055deac + 0x10))(param_1);
  }
  return;
}

