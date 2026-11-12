
undefined4 Music_Stop(void)

{
  undefined4 uVar1;
  
  if (GLBL_MAYBE_AUDIO_CB_4 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004b5519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*GLBL_MAYBE_AUDIO_CB_4)();
    return uVar1;
  }
  if (DAT_006af504 != 0) {
    DAT_006af504 = 0;
    DAT_0055ed20 = 0xffffffff;
    SndAsm_ResetStreams();
    MusScr_StopMain();
    return 1;
  }
  return 0;
}

