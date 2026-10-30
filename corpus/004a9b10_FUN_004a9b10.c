
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9b10(void)

{
  if (DAT_005648e8 != 0) {
    _DAT_005b9cd0 = 0;
    mciSendCommandA(DAT_005b9cd4,0x808,0,0x5b9cd0);
    DAT_005648ec = 0;
    DAT_005648f0 = 0;
  }
  return;
}

