
void FUN_004103e0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_005b9674 >> 7 == DAT_005b9678) {
    if (DAT_005b9680 != (code *)0x0) {
      (*DAT_005b9680)();
      DAT_005b9680 = (code *)0x0;
      return;
    }
  }
  else {
    iVar1 = (DAT_005b9674 >> 7) + -0x3c;
    iVar2 = DAT_005b9678 * 0x80 - DAT_005b9674;
    if (((-1 < iVar1) && (DAT_0058f1d4 == 0)) && (DAT_005b9684 != 0)) {
      FUN_0049e7d0(0xff - ((iVar1 * 0xff00) / 0xb5 >> 8));
    }
    if (8 < iVar2) {
      iVar2 = iVar2 >> 3;
    }
    iVar1 = DAT_005b967c;
    if ((DAT_005b967c < iVar2) || (iVar1 = -DAT_005b967c, iVar2 < iVar1)) {
      iVar2 = iVar1;
    }
    DAT_005b9674 = DAT_005b9674 + iVar2;
    FUN_004524a0(DAT_005b9674 >> 7);
  }
  return;
}

