
/* sweep */

void KeyChart_Scroll(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    DAT_005aed90 = DAT_005aed90 + -0x1e;
    if (DAT_005aed90 < 0) {
      DAT_005aed90 = 0;
      Snd_Play2D(1,0xb,0,0xff);
      return;
    }
  }
  else {
    iVar1 = DAT_005aed90 + 0x3c;
    DAT_005aed90 = DAT_005aed90 + 0x1e;
    if (DAT_005aed8c <= iVar1) {
      DAT_005aed90 = DAT_005aed8c + -0x1e;
      Snd_Play2D(1,0xb,0,0xff);
      return;
    }
  }
  Snd_Play2D(1,9,0,0xff);
  return;
}

