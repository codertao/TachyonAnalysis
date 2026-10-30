
void FUN_004e9ee0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_005a62e4;
  iVar2 = DAT_005a62e0;
  if (DAT_005a62d8 < DAT_00604460) {
    iVar1 = DAT_00604460 - DAT_005a62d8;
    DAT_005a62d8 = DAT_005a62d8 + iVar1;
    DAT_005a62e0 = DAT_005a62e0 - iVar1;
    if (DAT_005a62e0 == 0 || iVar2 < iVar1) {
      return;
    }
  }
  iVar2 = DAT_005a62e0;
  if ((DAT_005a62d8 + DAT_005a62e0 <= DAT_00604468) ||
     (iVar1 = ((DAT_005a62d8 + DAT_005a62e0) - DAT_00604468) + -1,
     DAT_005a62e0 = DAT_005a62e0 - iVar1, DAT_005a62e0 != 0 && iVar1 <= iVar2)) {
    if (DAT_005a62dc < DAT_00604464) {
      iVar2 = DAT_00604464 - DAT_005a62dc;
      DAT_005a62dc = DAT_005a62dc + iVar2;
      DAT_005a62d4 = DAT_005a62d4 + iVar2;
      DAT_005a62e4 = DAT_005a62e4 - iVar2;
      if (DAT_005a62e4 == 0 || iVar3 < iVar2) {
        return;
      }
    }
    iVar2 = DAT_005a62e4;
    if ((DAT_005a62dc + DAT_005a62e4 <= DAT_0060446c) ||
       (iVar3 = ((DAT_005a62dc + DAT_005a62e4) - DAT_0060446c) + -1,
       DAT_005a62e4 = DAT_005a62e4 - iVar3, DAT_005a62e4 != 0 && iVar3 <= iVar2)) {
      return;
    }
  }
  return;
}

