
/* sweep */

void CdAudio_IdleTick(void)

{
  if ((((DAT_005648f8 != 0) && (DAT_005648ec != 0)) && (DAT_005648f0 == 0)) &&
     (DAT_00564904 < DAT_006039f0)) {
    if (DAT_005648fc != (code *)0x0) {
      (*DAT_005648fc)(DAT_005648f4);
    }
    if (DAT_005648f8 != 0) {
      CdAudio_Play(DAT_005648f4,DAT_005648f8);
    }
  }
  return;
}

