
/* sweep: vtable +0x24 */

void Audio_StopAllSamples(void)

{
  if (GLBL_audio_running != 0) {
    (**(code **)(PTR_PTR_0055deac + 0x24))();
    return;
  }
  return;
}

