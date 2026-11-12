
/* sweep */

void Course_OnComplete(void)

{
  byte bVar1;
  
  if (DAT_005b29a8 != 0) {
    Course_SetState(2);
    Course_AwardBonus(GLBL_iter_cnt);
    Course_Advance();
    Course_SaveProgress(GLBL_iter_cnt);
    bVar1 = global_bad_shift_rng();
    if (((bVar1 & 0xf) < 4) && (4 < GLBL_iter_cnt)) {
      SrvSend_VoiceWav(s_2jake276_wav_00534b28);
    }
    return;
  }
  Course_SetState(3);
  Course_ResetScore();
  return;
}

