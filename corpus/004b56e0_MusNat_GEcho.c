
void MusNat_GEcho(undefined4 *param_1)

{
  if (GLBL_MAYBE_AUDIO_CB_2 != (code *)0x0) {
    (*GLBL_MAYBE_AUDIO_CB_2)(*param_1);
  }
  return;
}

