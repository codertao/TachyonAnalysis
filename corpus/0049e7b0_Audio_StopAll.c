
/* sweep: guess, vtable +0x78 */

void Audio_StopAll(void)

{
  if (GLBL_audio_running != 0) {
    (**(code **)(PTR_PTR_0055deac + 0x78))();
    return;
  }
  return;
}

