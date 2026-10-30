
void FUN_004aed30(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1 = param_1 + -0x80;
  if (-1 < param_1) {
    iVar4 = 0;
    do {
      iVar1 = ((int)(char)(&DAT_0055ea48)[iVar4] * param_1 * 2 >> 8) + iVar4;
      iVar2 = iVar1 * param_2 >> 7;
      iVar3 = iVar1 * param_3 >> 7;
      iVar1 = iVar1 * param_4 >> 7;
      if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      if (0xff < iVar3) {
        iVar3 = 0xff;
      }
      if (0xff < iVar1) {
        iVar1 = 0xff;
      }
      (&DAT_00604120)[iVar4] = (char)iVar2;
      (&DAT_00604220)[iVar4] = (char)iVar3;
      (&DAT_00604320)[iVar4] = (char)iVar1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
    return;
  }
  param_1 = param_1 * -2;
  if (0xff < param_1) {
    param_1 = 0xff;
  }
  iVar4 = 0;
  do {
    iVar1 = iVar4 - ((char)(&DAT_0055ea48)[iVar4] * param_1 >> 8);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar2 = iVar1 * param_2 >> 7;
    iVar3 = iVar1 * param_3 >> 7;
    iVar1 = iVar1 * param_4 >> 7;
    if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    if (0xff < iVar3) {
      iVar3 = 0xff;
    }
    if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    (&DAT_00604120)[iVar4] = (char)iVar2;
    (&DAT_00604220)[iVar4] = (char)iVar3;
    (&DAT_00604320)[iVar4] = (char)iVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x100);
  return;
}

