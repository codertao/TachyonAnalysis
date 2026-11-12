
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void News_PlayHeadlineAudio(void)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  Ticker_Stub();
  piVar3 = DAT_005636a4;
  _DAT_005636a8 = Audio_IsPlaying(DAT_00571288);
  if ((_DAT_005636a8 == 0) && (piVar3 != (int *)0x0)) {
    while (piVar3[3] != 0) {
      piVar3 = (int *)piVar3[8];
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    piVar3[3] = 1;
    if (piVar3[6] == 0) {
      pcVar1 = _strstr((char *)(*piVar3 + 0x70),&DAT_0053ebdc);
      if (pcVar1 == (char *)0x0) {
        str_sprintf(&DAT_005a41e0,*piVar3 + 0x70);
      }
      else {
        str_sprintf(&DAT_005a41e0,*piVar3 + 0x70,(int)(char)piVar3[5]);
      }
      iVar2 = Audio_LoadSample(&DAT_005a41e0);
      piVar3[6] = iVar2;
    }
    DAT_00571288 = Audio_PlaySample(piVar3[6],0,
                                    (int)(((longlong)piVar3[7] * (longlong)GLBL_spacesav[0x55] &
                                          0xffffffffU) / 0xff),0);
    piVar3[4] = DAT_00571288;
  }
  return;
}

