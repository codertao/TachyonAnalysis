
void FUN_00419c90(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_10 [16];
  
  uVar1 = global_bad_shift_rng();
  uVar3 = (uint)((ulonglong)uVar1 % 0x1e);
  if (GLBL_iter_cnt == 1) {
    if (uVar3 < 0x15) {
      SrvSend_VoiceWav(s_2jake275_wav_00534aa8);
      return;
    }
  }
  else {
    if (GLBL_iter_cnt < 2) {
      if (GLBL_iter_cnt < 6) {
        return;
      }
    }
    else if (GLBL_iter_cnt < 6) {
      if (0xe < uVar3) {
        return;
      }
      if (((ulonglong)uVar1 % 0x1e & 1) == 0) {
        SrvSend_VoiceWav(s_2jake301_wav_00534a88);
        return;
      }
      SrvSend_VoiceWav(s_2jake300_wav_00534a98);
      return;
    }
    str_sprintf(local_10,s_2jake3_02d_wav_00534a78,uVar3);
    iVar2 = Fs_Exists(local_10);
    if (iVar2 != 0) {
      SrvSend_VoiceWav(local_10);
    }
  }
  return;
}

