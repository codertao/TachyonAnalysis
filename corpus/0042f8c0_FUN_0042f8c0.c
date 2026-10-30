
void FUN_0042f8c0(void)

{
  longlong lVar1;
  uint uVar2;
  
  FUN_0049e5e0();
  if (DAT_005aeea4 == 0) {
    lVar1 = (longlong)(DAT_00603e4c * 2) * 0x10000;
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
    lVar1 = (longlong)(DAT_00603e50 * 2) * 0x10000;
    uVar2 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    DAT_005aeea8 = -uVar2;
    if (DAT_005b2b34 != 0) {
      DAT_005aeea8 = uVar2;
    }
    if (0x400 < (int)DAT_005aeea8) {
      DAT_005aeea8 = 0x400;
      return;
    }
    if ((int)DAT_005aeea8 < -0x400) {
      DAT_005aeea8 = 0xfffffc00;
    }
  }
  return;
}

