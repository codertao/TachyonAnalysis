
/* sweep */

undefined4 SbfStream_Stop(void)

{
  if (DAT_006af504 != 0) {
    DAT_006af504 = 0;
    DAT_0055ed20 = 0xffffffff;
    DAT_0058f2ec = 0xffffffff;
    SndAsm_ResetStreams();
    MusScr_StopMain();
    if (DAT_00562ce0 != 0) {
      _AIL_mem_free_lock_4(DAT_00562ce0);
    }
    if (DAT_00562ce4 != 0) {
      _AIL_mem_free_lock_4(DAT_00562ce4);
    }
    _AIL_release_sample_handle_4(DAT_00562cf0);
    DAT_00562ce0 = 0;
    DAT_00562ce4 = 0;
    DAT_00562cf0 = 0;
    return 1;
  }
  return 0;
}

