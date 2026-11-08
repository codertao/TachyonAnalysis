
void FUN_004b5500(void)

{
  if (GLBL_MAYBE_AUDIO_CB_5 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b5509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*GLBL_MAYBE_AUDIO_CB_5)();
    return;
  }
  FUN_004b53b0();
  return;
}

