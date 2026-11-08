
void FUN_0041a6a0(void)

{
  byte bVar1;
  
  if (DAT_005b29a8 != 0) {
    FUN_00419d30(2);
    FUN_0041a520(GLBL_iter_cnt);
    FUN_0041a4a0();
    FUN_0041a650(GLBL_iter_cnt);
    bVar1 = global_bad_shift_rng();
    if (((bVar1 & 0xf) < 4) && (4 < GLBL_iter_cnt)) {
      SrvSend_VoiceWav(s_2jake276_wav_00534b28);
    }
    return;
  }
  FUN_00419d30(3);
  FUN_0041a420();
  return;
}

