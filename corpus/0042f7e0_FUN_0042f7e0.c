
void FUN_0042f7e0(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = DAT_00603e40 - DAT_005aeec0;
  iVar6 = DAT_00603e44 - DAT_005aeec4;
  if ((DAT_005b2b28 < iVar4) && (iVar4 < DAT_005b2b28)) {
    iVar4 = 0;
  }
  if ((DAT_005b2b28 < iVar6) && (iVar6 < DAT_005b2b28)) {
    iVar6 = 0;
  }
  iVar2 = DAT_005b2b28;
  if (DAT_005b2b28 < iVar4) {
    iVar2 = -DAT_005b2b28;
  }
  iVar3 = DAT_005b2b28;
  if (DAT_005b2b28 < iVar6) {
    iVar3 = -DAT_005b2b28;
  }
  if (DAT_005aeea4 == 0) {
    lVar1 = (longlong)(iVar4 + iVar2) * (longlong)DAT_005b2b20;
    DAT_005aeea0 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    if ((int)DAT_005aeea0 < 0x401) {
      if ((int)DAT_005aeea0 < -0x400) {
        DAT_005aeea0 = 0xfffffc00;
      }
    }
    else {
      DAT_005aeea0 = 0x400;
    }
  }
  if (DAT_005aeeac == 0) {
    lVar1 = (longlong)(iVar6 + iVar3) * (longlong)DAT_005b2b20;
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_005aeea8 = -uVar5;
    if (uVar5 != 0xfffffc00 && 0x3ff < DAT_005aeea8) {
      DAT_005aeea8 = 0x400;
      return;
    }
    if (DAT_005aeea8 < -0x400) {
      DAT_005aeea8 = -0x400;
    }
  }
  return;
}

